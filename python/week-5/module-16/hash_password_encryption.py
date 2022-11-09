# Rtrams => smart
# Splkiyoanr => lion

import hashlib

email = 'atiqur@gmail.com'
password = 'atiqur20022'
# email = 'abmar@gmail.com'
# password = 'abmar2345'

password_encode = password.encode()
password_hash = hashlib.md5(password_encode).hexdigest()
# print(password_encode)
# print(password_hash)

hacked_email = 'atiqur@gmail.com'
hacked_pass = 'atiqur20022'
# hacked_pass = '6700cd123a73df885c5c3fe133c64c81'
pass_hashed = hashlib.md5(hacked_pass.encode()).hexdigest()

if email==hacked_email and password_hash==pass_hashed:
    print("Right user")
else:
    print("Wrong Password")