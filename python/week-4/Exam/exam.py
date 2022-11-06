class Star_Cinema:
    hall_list = []

    def entry_hall(self, hall_object):
        self.hall_list.append(hall_object)


class Hall(Star_Cinema):
    # false means free
    rows_cols_2D_list = []

    def __init__(self, rows, cols, hall_no) -> None:
        self.seats = {}  # dictionary of seat information
        self.show_list = []  # list of tuples(show information)
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no

        for r in range(rows):
            single_list = []
            rr = chr(r+65)
            for c in range(cols):
                cc = str(c)
                single_list.append(rr+cc)
            self.rows_cols_2D_list.append(single_list)

    def entry_show(self, id, movie_name, time):  # id,movie_name,time are string format
        self.id = id
        self.movie_name = movie_name
        self.time = time
        make_tuple = (id, movie_name, time)  # tuple
        self.show_list.append(make_tuple)

        self.seats[id] = self.rows_cols_2D_list  # key=id, value=2d list

    def book_seats(self, customer_name, phone_number, show_id, list_of_tuple):
        self.customer_name = customer_name
        self.phone_number = phone_number
        self.list_of_tuple = list_of_tuple  # tuple contain row and col

        self.tickets_lst = []

        if show_id in self.seats:
            for show_tpl in self.show_list:
                if show_tpl[0] == show_id:
                    for single_tuple in list_of_tuple:
                        row = single_tuple[0]
                        col = single_tuple[1]

                        # print(self.seats[show_id])
                        # print(self.seats[show_id][row][col])

                        self.seats[show_tpl[0]][row][col] = 'X'

                        # print(show_id, self.seats[show_id])
                        # print(self.seats)

                        # reconvert seat in str
                        r_str = str(chr(row+65))
                        c_str = str(col)
                        concat_r_c_str = r_str+c_str
                        self.tickets_lst.append(concat_r_c_str)

                    if True:
                        print("##### Ticket booked successfully!! #####")
                        print(
                            "\n---------------------------------------------------------------------")
                        print(f"Name: {self.customer_name}")
                        print(f"Phone Number: {self.phone_number}\n")
                        if show_id in self.seats:
                            for tpl in self.show_list:
                                if show_id in tpl:
                                    print(
                                        f"Movie name: {tpl[1]}\tMovie Time: {tpl[2]}")
                        print("Tickets: ", end="")
                        for ST in self.tickets_lst:
                            print(ST, end=", ")
                        print()
                        print(f"Hall: {self.hall_no}")
                        print(
                            "---------------------------------------------------------------------\n")
        # if show_id in self.seats:
        #     for key in self.seats:
        #         if key == show_id:
        #             for single_tuple in list_of_tuple:
        #                 row = single_tuple[0]
        #                 col = single_tuple[1]

        #                 print(self.seats[show_id])
        #                 print(self.seats[show_id][row][col])

        #                 self.seats[show_id][row][col] = 'X'

        #                 print(key, self.seats[key])
        #                 print(self.seats)

        #                 # reconvert seat in str
        #                 r_str = str(chr(row+65))
        #                 c_str = str(col)
        #                 concat_r_c_str = r_str+c_str
        #                 self.tickets_lst.append(concat_r_c_str)

        #                 if True:
        #                     print("##### Ticket booked successfully!! #####")
        #                     print(
        #                         "\n---------------------------------------------------------------------")
        #                     print(f"Name: {self.customer_name}")
        #                     print(f"Phone Number: {self.phone_number}\n")
        #                     if show_id in self.seats:
        #                         for tpl in self.show_list:
        #                             if show_id in tpl:
        #                                 print(
        #                                     f"Movie name: {tpl[1]}\tMovie Time: {tpl[2]}")
        #                     print("Tickets: ", end="")
        #                     for ST in self.tickets_lst:
        #                         print(ST, end=" ")
        #                     print()
        #                     print(f"Hall: {self.hall_no}")
        #                     print(
        #                         "---------------------------------------------------------------------\n")
        else:
            print("Your show id is not matched.")

        # check the id of the show
        # for single_show in self.show_list:
        #     if show_id == single_show[0]:
        #         print("Matched the show id. Now book the seat.")

    def view_show_list(self):
        # print(self.show_list)  # running show
        for tpl in self.show_list:
            print(
                f"Movie Name: {tpl[0]}\t\tShow ID: {tpl[1]}\t\tTime: {tpl[2]}")

    def view_available_seats(self, show_id):
        if show_id in self.seats:
            for tpl in self.show_list:
                if show_id in tpl:
                    print(
                        f"\n\nMovie Name: {tpl[1]}\tTime: {tpl[2]}\nX for already booked seats")  # 6

            print(
                "\n---------------------------------------------------------------------")
            for showID in self.seats:
                if showID == show_id:
                    for r in range(self.rows):
                        for c in range(self.cols):
                            print(self.seats[show_id][r][c], end="\t")
                        print()
            print(
                "---------------------------------------------------------------------")
        else:
            print("\nSorry!!! Your given Show Id is not found.\n")


starCinema = Star_Cinema()
obj_of_Hall = Hall(5, 5, 'Provati123')

starCinema.entry_hall(obj_of_Hall)  # input object of hall class
# starCinema.hall_list[1].view_show_list()
# print(starCinema.hall_list[0].hall_no)

obj_of_Hall.entry_show("BA1", "Black Adam: Beginning", "11-11-22")
obj_of_Hall.entry_show("MI6", "Mission Impossible 6", "22-10-22")
obj_of_Hall.entry_show("SM2", "Spider Man Way to Home", "30-11-22")
# print(starCinema.hall_list[0].view_show_list())

# # print(obj_of_Hall.show_list)
# obj_of_Hall.view_show_list()
# print()
# print(obj_of_Hall.seats)
# print()
# obj_of_Hall.view_available_seats("BA1")
# print()

# book_seat_list_of_tuple = [(1, 2), (0, 2)]
# obj_of_Hall.book_seats("Atqiur", "0888888", "BA1", book_seat_list_of_tuple)
# obj_of_Hall.view_available_seats("BA1")
# print()


# 7. make a replica system so that the counter ca view all shows that are running, view available seats in a show and can book tickets in a show
print("1. View all show today\n2. View available seats\n3. Book ticket\n4. Exit")
opt = input("Enter Option: ")
while opt != '4':
    match opt:
        case '1':
            print(
                "\n---------------------------------------------------------------------")
            obj_of_Hall.view_show_list()
            print(
                "---------------------------------------------------------------------\n")
        case '2':
            show_id = input("Enter Show ID: ")
            obj_of_Hall.view_available_seats(show_id)

        case '3':
            name = input("Enter customer name: ")
            phone = input("Enter customer phone number: ")
            show_ID = input("Enter show ID: ")

            total_ticket = int(input("Enter number of tickets: "))

            list_of_tuple = []
            for i in range(total_ticket):
                try:
                    # input will be string, like: A0
                    seat = input("Enter seat no: ")

                    seat_str_to_lst = []
                    for char in seat:
                        seat_str_to_lst.append(char)

                    r_int = int(ord(seat_str_to_lst[0])-65)
                    c_int = int(seat_str_to_lst[1])

                    # tuple of row and col
                    tuple_of_row_col = tuple((r_int, c_int))
                    list_of_tuple.append(tuple_of_row_col)
                except:
                    print("Your given seat no is wrong. Please, give right seat no.")
            obj_of_Hall.book_seats(name, phone, show_ID, list_of_tuple)

        case _:
            print("Your enter wrong. Please, input (1/2/3/4): ")

    print("1. View all show today\n2. View available seats\n3. Book ticket\n4. Exit")
    opt = input("Enter Option: ")
