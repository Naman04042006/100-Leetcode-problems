def max_sub_array(nums):
    # Kadane's Algorithm
    current_sum = 0
    max_sum = float('-inf')

    for num in nums:
        if current_sum < 0:
            current_sum = 0
        current_sum += num
        max_sum = max(max_sum, current_sum)

    return max_sum