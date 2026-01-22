class Solution(object):
    def triangleType(self, nums):
        nums.sort()
        a, b, c = nums

        if a + b <= c or b+c<=a or c+a<=b:
            return "none"

        if a == b == c:
            return "equilateral"
        elif a == b or b == c or a == c:
            return "isosceles"
        else:
            return "scalene"
