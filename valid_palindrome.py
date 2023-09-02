# A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

# Given a string s, return true if it is a palindrome, or false otherwise.


class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        for ch in s:
            print(ch)
            if((ord(ch) <= 96  or ord(ch) >= 123) and (ord(ch) < 48 or ord(ch) > 57)):
                s = s.replace(ch, "")
        if(s == s[::-1]): return True
        return False;

