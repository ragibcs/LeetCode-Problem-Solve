class Solution(object):
    def maximumWealth(self, accounts):
        maxWealth = 0
        for customer in accounts:
            totalWealth = sum(customer)
            maxWealth = max(maxWealth, totalWealth)
        return maxWealth
