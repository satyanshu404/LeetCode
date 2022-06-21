class Solution {
  
//   Time: O(n) 
//   Using 2-pointer Concept
  
public:
    int maxArea(vector<int>& height) {
        
        int i  = 0, j = height.size()-1;
        
        int mini_height = min(height[i], height[j]);
        int width, max_vol = -1;
        
        while(i < j){
            
            width = j-i;
            
            max_vol = max(max_vol, mini_height * width);
            
            if(height[i] < height[j])
                mini_height = min(height[++i], height[j]);
            else
                mini_height = min(height[i], height[--j]);
        }
        
        return max_vol;
        
    }
};
