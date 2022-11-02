class Hall:
    seats = {}  # dictionary of seat information
    show_list = []  # list of tuples
    rows_cols = []  # 2d list

    def __init__(self,rows,cols,hall_no) -> None:
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no

    def entry_show(self, id, movie_name, time):
        self.id = id
        self.movie_name = movie_name
        self.time = time

        self.seats[id] = self.rows_cols  # key=id, value=2d list

        make_tuple = (id, movie_name, time)  # string
        self.show_list.append(make_tuple)

    def book_seats(self, customer_name, phone_number, show_id, tuple_row_col):
        self.customer_name = customer_name
        self.phone_number = phone_number
        self.tuple_row_col = tuple_row_col
        # check the id of the show
        for single_show in self.show_list:
            if show_id == single_show[0]:
                print("Matched the show id. Now book the seat.")

    def view_show_list(self):
        print(self.show_list)  # running show

    def view_available_seats(self, show_id):
        print("Available seat in that show")


class Star_Cinema(Hall):
    hall_list = []

    def entry_hall(self):
        self.hall_list.append(Hall)


# 7. make a replica system so that the counter ca view all shows that are running, view available seats in a show and can book tickets in a show
