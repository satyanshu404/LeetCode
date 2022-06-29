class Solution {
  
//   Time: O(n)                                                       Using recusrion & complete search
  
public:
    bool canJump(vector<int>& nums) {
                
        return pathexists(nums, nums.size()-1);
    }
    
private:
    
    bool pathexists(vector<int>arr, int n){
        if(n == 0)
            return true;          
        
        //  recursive way
        bool path1,path2, path3;       
            
        for(int i = n-1; i >= 0; --i){  
            
            if(n-i <= arr[i])
                path1 = true;
            else
                path1 = false;
            
            path2 = path1 and pathexists(arr, n-1);
            
            path3 = (path3 or path2);           
            
        }        
        return path3;
    }
};
