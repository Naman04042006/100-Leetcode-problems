class Solution:
    def findMaxForm(self, strs, m, n):
        counts = [(s.count('0'), s.count('1')) for s in strs]
        
        dp = [[0] * (n + 1) for _ in range(m + 1)]
        for zeros, ones in counts:
           for i in range(m, zeros - 1, -1):
                row = dp[i]
                prev_row = dp[i - zeros]
                for j in range(n, ones - 1, -1):
                    row[j] = max(row[j], prev_row[j - ones] + 1)
        
        return dp[m][n]
