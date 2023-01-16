import pytest


def halfAdder(A, B):
    Sum = A ^ B
    Carry = A & B
    return [Sum, Carry]


def test_half_adder():
    s, c = halfAdder(0, 0)
    assert s == 0 and c == 0
    s, c = halfAdder(0, 1)
    assert s == 1 and c == 0
    s, c = halfAdder(1, 0)
    assert s == 1 and c == 0
    s, c = halfAdder(1, 1)
    assert s == 0 and c == 1
