#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string thousandSeparator(int n) {
         if( n == 0) return "0";
        string result = "";
        int count =1;
        
        while(n > 0)
        {
            if(count % 4 ==0)
            {
                result ="."+ result;
            }
            else{
                result = to_string(n%10)+ result;
                n/=10;
            }
            count++;
        }
        
        return result;
    }
};