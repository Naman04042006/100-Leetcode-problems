#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int negInd=1,posInd=0;
        vector<int> result(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                result[posInd]=nums[i];
                posInd = posInd+2;
            }
            else {
                result[negInd] = nums[i];
                negInd = negInd+2;
            }
        }
    return result;
}
int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    int n = nums.size();
    vector<int> result = rearrangeArray(nums);
    int n1 = result.size();
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
