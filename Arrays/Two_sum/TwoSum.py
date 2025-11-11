

from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i, num in enumerate(nums):
            need = target - num
            if need in seen:
                return [seen[need], i]
            seen[num] = i
        return [] 


if __name__ == "__main__":
    sol = Solution()
    print(sol.twoSum([2,7,11,15], 9)) 
