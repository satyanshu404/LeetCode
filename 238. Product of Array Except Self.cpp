class Solution {
 
 // Time O(n)
 
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        long long int product = 1;
        int zero_count = 0;
        
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] != 0)
                product *= nums[i];
            else 
                zero_count++;
        }    
        
        vector<int> ans(nums.size());        
        for(int i = 0; i < nums.size(); ++i){
            
            if(zero_count > 1)
                ans[i] = 0;
            else if(nums[i] == 0 && zero_count == 1)
                ans[i] = product;
            else if(nums[i] != 0 && zero_count == 1)
                ans[i] = 0;
            else
                ans[i] = product / nums[i];
        }
        
        return ans;        
    }
};


                                                               // 2nd solution using prefix and postfix
 
 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        
        for(int i = 0, prod = 1; i < n; prod *= nums[i++]){
            ans[i] *= prod;
        }
        
        for(int i = n - 1, prod = 1; i >= 0; prod *= nums[i--]){
            ans[i] *= prod;
        }
        return ans;
    }
};
