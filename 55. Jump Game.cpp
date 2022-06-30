class Solution {
  
//                                                       Using recusrion & complete search (can be optimized by DP)
  
public:
    bool canJump(vector<int>& nums) {
                
        return pathexists(nums, nums.size()-1);
    }
    
private:
    
    bool pathexists(vector<int>arr, int n){
        if(n == 0)
            return true;          
        
        //  recursive way
        bool path1,path2, opt;       
            
        for(int i = n-1; i >= 0; --i){  
            
            if(n-i <= arr[i])
                path1 = true;
            else
                path1 = false;
            
            path2 = path1 and pathexists(arr, n-1);
            
            opt = (opt or path2);           
            
        }        
        return opt;
    }
};
//                                                           2nd way, just shifiting the goal

class Solution {
  
//   TIme: o(n)
  
public:
    bool canJump(vector<int>& nums) {
        
        int n= nums.size()-1;
        
       for(int i = nums.size()-1; i >= 0; --i){
           if(nums[i] >= n-i)
               n = i;
       }
        
        if(n == 0)
            return true;
        
        return false;
    
    }
};
