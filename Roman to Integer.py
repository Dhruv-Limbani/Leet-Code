class Solution:
    def romanToInt(self, s: str) -> int:
        rdict = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000
        }
        num=0
        ls='I'
        for i in s[::-1]:
            if rdict[i]<rdict[ls]:
                num-=rdict[i]
            else:
                num+=rdict[i]
            ls = i
        return num