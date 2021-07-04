#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        if(digits.back()+1>9) // check if the last elements generates carry
       {
         int p=digits.size()-1;      // get the length of the string
            
// traverse the array in reverse till the numbers continue generating carry
         
         while(p>=0 && digits.at(p)+1>9)
         
         {    
               digits.at(p)=0;         // replace digit with 0 
                p--;
          }
          if(p>=0)
            digits.at(p)++; // add carry to the last element less than 9
            else
            digits.insert(digits.begin(), 1);  
            
            // if no element remaining, insert 1 in the start 
            
        }
        
    else
      {
        
       digits.back()=digits.back()+1;//if last element not 9,add one simply

       }
    return digits;
        
    }
};
        
        