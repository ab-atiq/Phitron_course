class TelegramChat:
    def __init__(self) -> None:
        self.__observers = []

    def attach(self, observer):
        self.__observers.append(observer)

    def detach(self, observer):
        self.__observers.remove(observer)

    def add_new_message(self, msg):
        self.notify(msg)

    def notify(self, msg):
        for observer in self.__observers:
            observer.update(msg)


class Observer:
    def __init__(self, name) -> None:
        self.name = name

    def update(self, msg):
        print(f'New Message for {self.name}: {msg}')


telegram = TelegramChat()

rony = Observer('Rony')
abul = Observer('Abul')
rahman = Observer('Rahman')

telegram.attach(rony)
telegram.attach(abul)
telegram.attach(rahman)
telegram.add_new_message('Good morning')

telegram.detach(rony)
telegram.add_new_message('Hi everyone, How are U?')
