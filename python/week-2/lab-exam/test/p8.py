text = "my Name Is atiqur RAhman"

def test_script(text):
    str_txt = text
    def make_upper(str_txt):
        u = str_txt.upper()
        print(u)
    make_upper(str_txt)

    def make_capital(str_txt):
        c = str_txt.capitalize()
        print(c)
    make_capital(str_txt)

    def make_lower(str_txt):
        l = str_txt.lower()
        print(l)
    make_lower(str_txt)


test_script(text)
