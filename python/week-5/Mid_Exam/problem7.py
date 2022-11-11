import keyboard
with open("File.txt", "r") as file:
    txt = file.readline()
    txt_lst = txt.split("--")
    i = 0
    while 0 <= i and i < len(txt_lst):
        print(txt_lst[i])
        try:
            num = int(input(f"Skip forward or backward(input integer number): "))
            chk = i+num
            if (0 > chk) or (chk > len(txt_lst)):
                print("Now you are exceed the book pages")
                continue
            elif num < 0:
                i += num
            else:
                i += num-1
        except:
            print('[enter - read more, press q to quit]')

        # faw_enter = keyboard.read_key()
        if keyboard.is_pressed('enter'):
            i += 1
            continue
        elif keyboard.is_pressed('q'):
            break
