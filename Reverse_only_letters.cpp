#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s)
    {
         int i=0; 
        int j=s.length()-1;
        while(i<j)
        {
            if(!isalpha(s[i]))
                i++;
            if(!isalpha(s[j]))
                j--;
            if(isalpha(s[i]) and isalpha(s[j]))
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    
    }
};
    