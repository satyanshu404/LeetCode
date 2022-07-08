class Solution {
  
//   Time: O(n)
  
public:
    int rob(vector<int>& nums) {
        
        int rob1 = 0, rob2 = 0;
        
        for(int i =0; i < nums.size(); ++i){
            int tmp = max(nums[i]+rob1, rob2);
            rob1 = rob2;
            rob2 = tmp;
        }
        
        return max(rob1, rob2);
    }

};
