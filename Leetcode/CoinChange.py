class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        if amount == 0:
            return 0
        dp = [0 for i in range(amount+2)]
        def rec(amount):
            if amount<0:
                return -1
            if amount == 0:
                return 0
            if dp[amount]!=0:
                return dp[amount]
            minn = math.inf
            for coin in coins:
                res = rec(amount - coin)
                if res>=0 and res < minn:
                    minn = 1 + res
            dp[amount] = minn if minn!=math.inf else -1
            return dp[amount]
        return rec(amount)