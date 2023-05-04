#Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

class Solution:
    def addDigits(self, num: int) -> int:
        if num < 10:
            return num
        return (num - 1) % 9 + 1
