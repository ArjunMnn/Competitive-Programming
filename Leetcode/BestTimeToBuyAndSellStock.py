class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mi = 99999999
        ma = 0
        for i in range(len(prices)):
            if prices[i]<mi:
                mi=prices[i]
            elif prices[i]-mi>ma:
                ma=prices[i]-mi
        return ma