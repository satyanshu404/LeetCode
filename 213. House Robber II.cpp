class Solution {
  
//   Time: O(n)
  
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1)
            return nums[0];
        
        return max(rob_helper(nums, 0, n-1), rob_helper(nums, 1, n));
        
    }
    
private:
    int rob_helper(vector<int>& nums, int start, int end) {
        int rob1 = 0, rob2 = 0;
        
        for(int i = start; i < end; ++i){
            int tmp = max(rob2, rob1 + nums[i]);
            rob1 = rob2;
            rob2 = tmp;
        }
        
        return max(rob1, rob2);        
    }
};
