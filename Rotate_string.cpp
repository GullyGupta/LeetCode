#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
     bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
        {
            return false;
        }
        s=s+s;
        if(s.find(goal)!=-1)
        {
            return true;
        }
        return false;
    }
};