#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    int countTriples(int n) 
    {
         int answer = 0;
    
      for(int i = 2; i < n ; i++)
      {
        int a = i*i;
          for(int j = i+1; j < n; j++)
          {
            int b = j*j;
            int c = sqrt(a + b);
             if(c > n)  
               break;
            if(a + b == c*c ) 
               answer += 2;
          }
       }
    return answer;
        
    }
};