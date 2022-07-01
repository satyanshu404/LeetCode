class Solution {
  
//   Time: O(n^2)                                       using DP
  
public:
    int lengthOfLIS(vector<int>& nums) {
               
        vector<int> cnt(nums.size(), 1);   
        
        int maxi = 0;
        
        for(int i = 0; i < nums.size(); ++i){
            for(int j = 0; j < i; ++j){           
                if(nums[i] > nums[j])
                    cnt[i] = max(cnt[i], cnt[j]+1);
           } 
           maxi = max(maxi, cnt[i]); 
        }
        
        return maxi;
    }
};

//                                                                         Method 2
//                                         This is good to find the no. of elements, but not for finding the array of LIS

class Solution {
  
//   Time: O(nlog(n))
  
public:
    int lengthOfLIS(vector<int>& nums) {
        std::vector<int> dp;
        for(auto &num : nums) {
            if(dp.empty() || dp.back() < num) {
                dp.push_back(num);
            } else {
                auto it = lower_bound(dp.begin(), dp.end(), num);
                *it = num;
            }
        }
        
        return dp.size();
    }
};
