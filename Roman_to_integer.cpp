#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i >= s.length())
            {
                break;
            }
            if (s[i] == 'I')
            {
                if (s[i + 1] == 'V')
                {
                    result = result + 4;
                    i++;
                }
                else if (s[i + 1] == 'X')
                {
                    result = result + 9;
                    i++;
                }
                else if (s[i + 1] == 'I')
                {
                    if (s[i + 2] == 'I')
                    {
                        result = result + 3;
                        i = i + 2;
                    }
                    else 
                    {
                        result = result + 2;
                        i++;
                    }
                }
                else result++;
            }
            else if (s[i] == 'X')
            {
                if (s[i + 1] == 'L')
                {
                    result = result + 40;
                    i++;
                }
                else if (s[i + 1] == 'C')
                {
                    result = result + 90;
                    i++;
                }
                else if (s[i + 1] == 'X')
                {
                    if (s[i + 2] == 'X')
                    {
                        result = result + 30;
                        i = i + 2;
                    }
                    else 
                    {
                        result = result + 20;
                        i++;
                    }
                }
                else result = result + 10;
            }
            else if (s[i] == 'C')
            {
                if (s[i + 1] == 'D')
                {
                    result = result + 400;
                    i++;
                }
                else if (s[i + 1] == 'M')
                {
                    result = result + 900;
                    i++;
                }
                else if (s[i + 1] == 'C')
                {
                    if (s[i + 2] == 'C')
                    {
                        result = result + 300;
                        i = i + 2;
                    }
                    else 
                    {
                        result = result + 200;
                        i++;
                    }
                }
                else result = result + 100;
            }
            else if (s[i] == 'V')
                result = result + 5;
            else if (s[i] == 'L')
                result = result + 50;
            else if (s[i] == 'D')
                result = result + 500;
            else if (s[i] == 'M')
                result = result + 1000;
        }
        return result;
    }
        
    
};