#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums)
    {
        int i=0,n=nums.size();
        while(i<n-1 && nums[i]<=nums[i+1]){
            i++;
        }
        if(i==n-1)return true;
        i++;
        while(i<n-1 && nums[i]<=nums[i+1]){
            i++;
        }
        if(i==n-1 && nums[n-1]<=nums[0])return true;
        return false;

        
    }
};