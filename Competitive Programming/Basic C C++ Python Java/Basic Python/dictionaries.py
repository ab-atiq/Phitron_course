studentId = {
    1905004: "Atqiur Rahman",
    1905006: "Monirujjaman masum",
    1905007: "Rakib Hasan",
    1905037: "Rony Islam",
    1905040: "Sabuj Isalm"
}
print(studentId[1905004])  # found
# print(studentId[1905005]) # not found, and default error
print(studentId.get(1905037))  # found
print(studentId.get(1905073))  # not found
print(studentId.get(1905073, "Value is not found in dictionary"))  # my default error message
