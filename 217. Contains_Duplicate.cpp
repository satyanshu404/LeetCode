class Solution {

// Time : O(n)

public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int, int> M;
        
        for(int i = 0; i < nums.size(); ++i){
            M[nums[i]]++;
            
            if(M[nums[i]] > 1)
                    return true;                    
        }
        
        return false;
        
    }
};
