#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) 
    {
        if(s.size() == 1)
         return true;
    
        string temp = "";
   
        for(int i = 0; i < s.length(); i++)
        {
            
          if((s[i] >= 'A' && s[i] <= 'Z'))
             temp += s[i] + 32;
          else if(s[i] >= 'a' && s[i] <= 'z')
             temp += s[i];
          else if(s[i] >= '0' && s[i] <= '9')
             temp += s[i];
            
        }
    
    
    int h = temp.size() - 1;
    int l = 0;
    
    while(l <= h)
    {
        if(temp[l] != temp[h])
            return false;
        l++;
        h--;
    }
    
    return true;   
  }
        
};