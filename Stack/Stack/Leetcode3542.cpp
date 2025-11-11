#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int> st;
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            while(!st.empty() && st.top() > nums[i]){
                st.pop();
            }
            
            if(st.empty() || st.top() < nums[i]){
                st.push(nums[i]);
                res++;
            }
        }
        return res;
    }
};