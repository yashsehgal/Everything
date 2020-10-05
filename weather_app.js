# https://m.facebook.com/story.php?story_fbid=2746412395598393&id=100006889785546
# Subscribed by Nitish Kumar



const path = require("path");
const express = require("express");
const hbs = require("hbs");
const geocode = require("./utils/geocode.js");
const forecast = require("./utils/forecast.js");

// console.log(__dirname);
// console.log(path.join(__dirname, "../public"));

const app = express();
const port = process.env.PORT || 3000;

// DEFINE PATHS FOR EXPRESS CONFIG
const publicDirectoryPath = path.join(__dirname, "../public");
const viewsPath = path.join(__dirname, "../templates/views");
const partialsPath = path.join(__dirname, "../templates/partials");

// SETUP HANDLEBARS ENGINE AND VIEWS LOCATION
app.set("view engine", "hbs");
app.set("views", viewsPath);
hbs.registerPartials(partialsPath);

// SETUP STATIC DIRECTORY TO SERVE
app.use(express.static(publicDirectoryPath));

// app.get("", (req, res) => {
//   res.send("<h1>Hello Express!</h1>");
// });
// app.get("/help", (req, res) => {
//   res.send({
//     name: "Nitish",
//     age: 23
//   });
// });
// app.get("/about", (req, res) => {
//   res.send([
//     {
//       name: "Rahul",
//       age: 22
//     },
//     {
//       name: "Sonam",
//       age: 22
//     }
//   ]);
// });

app.get("", (req, res) => {
  res.render("index", {
    title: "Weather App",
    name: "Nitish Kumar"
  });
});
app.get("/about", (req, res) => {
  res.render("about", {
    title: "About page",
    name: "Nitish Kumar"
  });
});

app.get("/help", (req, res) => {
  res.render("help", {
    title: "Help page",
    text: "This is some helpful text",
    name: "Nitish Kumar"
  });
});

app.get("/weather", (req, res) => {
  if (!req.query.address) {
    return res.send({
      error: "Please provide an address"
    });
  }
  geocode(req.query.address, (error, geocodeData) => {
    // OR  => geocode(req.query.address, (error, { latitude, longitude, location } = {} ) => {
    if (error) {
      return res.send({ error: error });
    }

    forecast(
      geocodeData.latitude,
      geocodeData.longitude,
      (error, forecastData) => {
        if (error) {
          return res.send({ error }); // object destructuring
        }

        res.send({
          forecast: forecastData,
          location: geocodeData.location,
          address: req.query.address
        });
      }
    );
  });
});

// QUERY STRING:-
// app.get("/products", (req, res) => {
//   if (!req.query.search) {
//     return res.send({
//       Error: "You must provide  a search term"
//     });
//   }
//   res.send(req.query);
// });

app.get("/help/*", (re, res) => {
  res.render("404", {
    title: "404",
    errorMessage: "Help article not found",
    name: "Nitish Kumar"
  });
});

// WILDCARD CHARACTER :-
app.get("*", (req, res) => {
  res.render("404", {
    title: "404",
    errorMessage: "Page not found",
    name: "Nitish Kumar"
  });
});

app.listen(port, () => {
  console.log("Server is up on port " + port);
});
