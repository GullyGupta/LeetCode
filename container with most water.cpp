#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
          int i = 0;
        int j = height.size()-1;
        int max_area = min(height[i], height[j])*(j-i);
        
        while(i < j)
        {
            
            if(height[i] < height[j]) i++;
            else j--;
                
            max_area = max(min(height[i], height[j])*(j-i), max_area);
            
        }
        
        return max_area;
    }
};