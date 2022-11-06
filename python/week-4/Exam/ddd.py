class Demo:
    def __init__(self) -> None:
        self.seat = {"1": [['a1', 'b1', 'c1'], ['a1', 'b1', 'c1'], ['a1', 'b1', 'c1']], "2": [
            ['a2', 'b2', 'c2']], "3": [['a3', 'b3', 'c3']]}

        print(self.seat['1'])
        self.seat['1'][0][1] = "done"
        print(self.seat['1'])


obj = Demo()
