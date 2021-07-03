#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
           if(nums.size()==1)
           {
            return nums[0];
           }
        int a[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            a[i]=nums[i];
        }
        int asize = sizeof(a) / sizeof(a[0]);
        sort(a, a + asize);
        for(int i=0;i<asize;i++)
        {
            if(i%2==0){continue;
        }
            if(a[i]!=a[i-1])
            {
                return a[i-1];
            }
        }
        return a[asize-1];
    }
};

        