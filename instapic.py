
import instaloader

username = str(input('Enter username: '))
x = instaloader.Instaloader()
print(x.download_profile(username, profile_pic_only=True))


print(username)
