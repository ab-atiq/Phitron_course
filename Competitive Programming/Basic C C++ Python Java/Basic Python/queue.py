from collections import deque
bank = deque(["Atiqur", "Abul", "Bashar"])
print(bank)
bank.popleft()
print(bank)
bank.popleft()
print(bank)
bank.popleft()
print(bank)

if not bank:
    print("Queue item is not present")