#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        long long int temp=x,sum=0,r;
              while(x>0)
              {
                 r=x%10;
                 sum=(sum*10)+r;
                  x=x/10;
               }
          if(temp==sum)
            return true;
          else
            return false;

             }
       };