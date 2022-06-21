class Solution {
  
//   Time: O(n^2)
  
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> sol(2);
        
        for(auto it1 = nums.begin(); it1 != nums.end(); ++it1){            
            
            auto it2 = find((it1+1), nums.end(), target - *it1);        // find() function runs in O(n) time, not in log(n) time
            
            if(it2 != nums.end()){
                sol[0] = it1 - nums.begin()+1;
                sol[1] = it2 - nums.begin()+1;  
                return sol;
            }
        }        
        return sol;      
    }
};

                                                         // 2ns Sol. by using 2-pointers method

class Solution {

//  Time: O(n) 
   
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i = 0, j = nums.size() - 1;
        
        while(i < j){
            int sum = nums[i] + nums[j];            
            
            if(sum < target)
                ++i;
            else if(sum > target)
                --j;
            else {
                return {i+1, j+1};
            }
        }
        
        return {-1};        
    }
};   
