class Solution:
    def isPalindrome(self, s: str) -> bool:
        textString = s.lower()
        resultString = ''
        for i in range(0, len(s)):
            if(textString[i].isalpha() or textString[i].isnumeric()):
                resultString += textString[i]
        
        i,j = 0, len(resultString) - 1

        while (i<j):
            if (resultString[i] != resultString[j]):
                return False
            i += 1
            j -= 1
        return True
        