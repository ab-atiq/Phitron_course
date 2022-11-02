import pytest


def make_upper(s):
    s = s.upper()
    return s


def make_capital(s):
    s = s.capitalize()
    return s


def make_lower(s):
    s = s.lower()
    return s


def test_script():
    assert make_upper('abcd') == "ABCD"
    assert make_capital('aBcd') == "Abcd"
    assert make_lower("ABcd") == 'abcd'
