#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        for(int i=0;i<=n/2;i++)
      {
        if(pow(2,i)==n)
        return true;
    
        if(pow(2,i)>n)
        break;
      }
     return false;
   }
};
        
    