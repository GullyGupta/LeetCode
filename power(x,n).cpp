#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    double myPow(double x, int n)
    {
        
        if(n==0)
            return 1;
        if(n&1)
            return x*pow(x,n-1);
        return pow(x*x,n/2);
    }
};
        
    