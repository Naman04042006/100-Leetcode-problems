class Solution {
    public int search(int[] nums, int target) {
        int left=0;
        int right=nums.length-1;
         int start=0;
        int end=nums.length-1;
        if(nums[left]>nums[right]){
        while(left!=right){
            int mid=((right-left)/2)+left;
            if(left+1==right ){
                left=right;
                break;
            }
            if(nums[mid]>nums[left]){
                left=mid;
            }
            else{
                right=mid;
            }
        }
        if(target==nums[left]){
            return left;
        }
        else if(nums[start]==target){
            return start;
        }
        else if(nums[end]==target){
            return end;
        }
        else if(target>nums[start]){
            end=left-1;
        }
        else if(target<nums[end]){
            start=left;
        }
        }
        while(start<=end){
            int mid=((end-start)/2)+start;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
}


