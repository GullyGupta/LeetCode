#include<iostream>
using namespace std;

class Solution {
public:
    int secondHighest(string s) 
    {
        
          int max =-1, secmax = -1;
        for(char c :s)
        {
            if( c >= '0' && c <='9')
            {
                int temp = c -'0';
                if(temp > max)
                {
                    secmax = max;
                    max = temp;
                }
                if(temp < max && temp > secmax)
                {
                    secmax = temp;
                }
            }
        }
        return secmax;
        
        
    }
};