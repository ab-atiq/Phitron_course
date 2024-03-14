# conditions
biriyani_price = 300
kabab_price = 50

if biriyani_price < 250:
    print("Sultan e khamu fokir homu")
elif kabab_price < 100:
    print("Kabab kamu moja lutmu")
else:
    print("Cha dia ruti kahmu")

# multi-conditions
exam_bank = 'Bank'
passed_bank = True
exam_bcs = 'BCS'
passed_bcs = True

if (exam_bank == 'Bank' and passed_bank == True) and (exam_bcs == 'BCS' and passed_bcs == True):
    print("Tor biya pakka kono sundori mayar sate and joutuk o laker opor paba")
elif (exam_bank == 'Bank' and passed_bank == True) or (exam_bcs == 'BCS' and passed_bcs == True):
    print("Tor biya pakka kono sundori mayar sate")
else:
    print("Tor kopale biya nai")

# nested conditions
salary = 50000
has_flat = True
if salary > 40000:
    if has_flat == True:
        print("wow!! tor life to set")
    else:
        print("Don't worry! you can made flat in future.")
else:
    print("Valo kore por naile tor life brita")