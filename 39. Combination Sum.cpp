class Solution {
  
//   Time: O(n^target)
//   Space: O(target)
public:
    
    vector<vector<int>> ans;
    vector<int> v;
    
    void search(vector<int>& arr, int strt, int trgt){
        if(trgt == 0){
    //   strore the array
            ans.push_back(v);
            return;
        }

        for(int i = strt; i < arr.size(); ++i){            
            
            int x = trgt - arr[i];          
           
            if(x < 0) continue;
            
            v.push_back(arr[i]);
            search(arr, i,  x);
            v.pop_back();
        }
    }    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        search(candidates, 0, target);
        
        return ans;
    }
};
