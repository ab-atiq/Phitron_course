class Hall:
    # rows_cols_2D_list = [
    #     [False, False, False, False, False],
    #     [False, False, False, False, False],
    #     [False, False, False, False, False],
    #     [False, False, False, False, False],
    #     [False, False, False, False, False]
    # ] # false means free
    rows_cols_2D_list = []

    def __init__(self, rows, cols, hall_no) -> None:
        self.seats = {}  # dictionary of seat information
        self.show_list = []  # list of tuples(show information)
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        for r in range(rows):
            single_list = []
            for c in range(cols):
                single_list.append(False)
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

        for single_tuple in list_of_tuple:
            row, col = single_tuple[0], single_tuple[1]
            row = int(row)
            col = int(col)
            for key, value in self.seats.items():
                if key == show_id:
                    value[row][col] = True
            # self.rows_cols_2D_list[row][col] = True

        # check the id of the show
        for single_show in self.show_list:
            if show_id == single_show[0]:
                print("Matched the show id. Now book the seat.")

    def view_show_list(self):
        print(self.show_list)  # running show

    def view_available_seats(self, show_id):
        print(f"Available seat in show: {show_id} ")  # 6
        print(self.seats[show_id])  # all seat in given show_id


class Star_Cinema(Hall):
    hall_list = []

    def __init__(self, rows, cols, hall_no) -> None:
        super().__init__(rows, cols, hall_no)
        self.hall_list.append(self.hall_no)

    def entry_hall(self, hall):
        self.hall_list.append([self.rows, self.cols, self.hall_no])


obj_of_Hall = Hall(2, 3, 'provati123')
obj_of_Hall.entry_show("BA1", "Black Adam", "28-11-22")
obj_of_Hall.entry_show("MI6", "Mission Impossible 6", "28-11-22")
obj_of_Hall.entry_show("SM2", "Spider Man: Back Home", "28-11-22")
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

# starCinema = Star_Cinema(1, 1, 1)
# starCinema.entry_hall(obj_of_Hall)  # input object of hall class
# print(starCinema.hall_list)

# 7. make a replica system so that the counter ca view all shows that are running, view available seats in a show and can book tickets in a show

print("1. View all show today\n2. View available seats\n3. Book ticket\n4. Exit")
opt = input("Enter Option: ")
while opt != '4':
    match opt:
        case '1':
            print(
                "\n---------------------------------------------------------------------")
            print(f"Movie Name: \tShow ID: \tTime: \n")
            obj_of_Hall.view_show_list()
            print(
                "---------------------------------------------------------------------\n")
        case '2':
            show_id = input("Enter Show ID: ")

            print(f"Movie name: \tTime: ")
            print("X for already booked seats")

            print(
                "\n---------------------------------------------------------------------")
            print(f"Seat")
            obj_of_Hall.view_available_seats(show_id)
            print(
                "---------------------------------------------------------------------\n")

        case '3':
            name = input("Enter customer name: ")
            phone = input("Enter customer phone number:")
            show_ID = input("Enter show ID: ")
            total_ticket = int(input("Enter number of tickets: "))

            ticket_buy_success = False
            seat_already_booked = False
            over_seat_select = False

            list_of_tuple = []
            for i in range(total_ticket):
                seat = input("Enter seat no: ")
                r, c = seat.split(' ')
                tuple_of_row_col = tuple((r, c))
                list_of_tuple.append(tuple_of_row_col)

            obj_of_Hall.book_seats(name, phone, show_ID, list_of_tuple)

            # if ticket_buy_success == True:
            #     print("##### Ticket booked successfully!! #####")
            #     print(
            #         "\n---------------------------------------------------------------------")
            #     print(f"Name: ")
            #     print(f"Phone Number: ")
            #     print(f"Movie name: \tMovie Time: ")
            #     print(f"Tickets: ")
            #     print(f"Hall: ")
            #     print(
            #         "---------------------------------------------------------------------\n")
            # elif seat_already_booked == True:
            #     print(
            #         "\n---------------------------------------------------------------------")
            #     print(f"These seats were booked - ")
            #     print(
            #         "---------------------------------------------------------------------\n")
            # elif over_seat_select == True:
            #     print(
            #         "\n---------------------------------------------------------------------")
            #     print(f"Invalid seat no - . Try again")
            #     print(
            #         "---------------------------------------------------------------------\n")
        case _:
            print("Your enter wrong. Please, input (1/2/3/4): ")

    print("1. View all show today\n2. View available seats\n3. Book ticket\n4. Exit")
    opt = input("Enter Option: ")
