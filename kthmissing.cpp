#include<iostream>
#include<map>
#include<vector>
#include<stdlib.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        
         int c=0,i;
        unordered_map<int,int>mp;
        for(auto x:arr)
           mp[x]++;
        i=1;
        while(1)
       {
           if(mp[i]==0)c++;
            if(c==k)
            {
                return i;
            }i++;
       }return 0;
        
    }
};