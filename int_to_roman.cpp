#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string intToRoman(int num)
    {
      int temp = 0;
      int integer[] ={1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
      char* roman[] = 
                 {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
      string ans;
        
      for(int i =12; i >= 0; i--)
      {
          temp = num / integer[i];
          
          for(int j = 0; j < temp; j++)
              ans += roman[i];
          
          num %= integer[i];
          
      }
        
        return ans;
    }
};