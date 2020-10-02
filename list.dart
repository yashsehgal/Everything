main() {

  // Specifying the length creates a fixed-length list.
  var list = new List(3);
  list[0] = 'a';
  list[1] = 'b';
  list[2] = 'c';
  print(list);

  // Leaving out the lenght creates a growable list.
  var growable = new List();
  growable.addAll(['grow', 'able']);
  print(growable);

  // Lists can be defined using bracket literals.
  //
  var list2 = [40, 41];
  list2.add(42);
  print(list2);
  
}
