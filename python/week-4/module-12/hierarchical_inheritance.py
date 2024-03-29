# though Employee Class inherit in Developer, Testing, Sales, TechLead. so, it is hierarchical inheritance.
class Employee:
    def __init__(self, name, id, salary, position, experience):
        self.name = name
        self.id = id
        self.salary = salary
        self.position = position


class Developer(Employee):
    def __init__(self, name, id, salary, position, tech, focus):
        self.tech = tech
        self.area_of_work = focus
        super().__init__(name, id, salary, position)


class Testing(Employee):
    pass


class Sales(Employee):
    pass


class TechLead(Employee):
    def __init__(self,  name, id, salary, position, team):
        self.team = team
        super().__init__(name, id, salary, position)
