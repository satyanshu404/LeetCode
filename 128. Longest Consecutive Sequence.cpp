class Solution {
  
  // Time: O(n)
  
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> s;
        
        for(auto &C : nums){
            s.insert(C);
        }
        
        int count = 1, max_count = 0;
        
        auto it1 = s.begin();
        
        for(auto it = s.begin(); it1 != s.end(); ++it){
            
            it1++;
            
            if((*(it1) == *(it) + 1) && (it1 != s.end()))
                ++count;
            else 
                count = 1;
            
            max_count = max(count, max_count);
        }
        
        return max_count;        
        
    }
};
