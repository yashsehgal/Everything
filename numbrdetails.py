
import phonenumbers
from phonenumbers import carrier
from phonenumbers import geocoder

def check_details(phone_no):
    information = []
    number = phonenumbers.parse(phone_no)
    information.append(geocoder.description_for_number(number, 'en'))
    information.append(carrier.name_for_number(number, 'en'))
    return information

if __name__ == '__main__':
    number = input('Enter Your number: ')
    print(check_details(number))
