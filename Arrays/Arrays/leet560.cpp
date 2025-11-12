#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;  // Base case: prefix sum 0 occurs once

    int currentSum = 0;
    int count = 0;

    for (int num : nums) {
        currentSum += num;

        // Check if there exists a prefix sum that would make currentSum - prefixSum = k
        if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
            count += prefixSumCount[currentSum - k];
        }

        // Store/update the frequency of the current prefix sum
        prefixSumCount[currentSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;
    cout << "Total subarrays with sum " << k << " = " << subarraySum(nums, k) << endl;
    return 0;
}