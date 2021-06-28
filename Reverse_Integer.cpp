#include<iostream>
using namespace std;

class Solution {
public:
        int reverse(int x) {

    long long reverse=0;
    
    while(x!=0){
         
        reverse = reverse*10 + x%10;
        x = x/10;
    }
    return (reverse<INT_MIN || reverse>INT_MAX) ? 0 : reverse;
}
};