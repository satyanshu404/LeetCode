class Solution {
  
//   TIme: O(n)
  
public:
    bool isPalindrome(string s) {
        
        string str = "";
        
        for(auto &C : s){
            if(iswalnum(C))
                str += tolower(char(C));            
        }
        
        int n = str.length();
        
        for(int i = 0; i < n/2; i++){
            if(str[i] != str[n-1-i])
                return false;
        }
        
        return true;        
        
    }
};

                                                              // 2nd sol using two pointer concept
  

class Solution {
  
  // Time: O(n)
  
public:
    bool isPalindrome(string s) 
    {
        cin.tie(0);
        
        int i = 0;
        int j = s.size()-1;
        while(i<=j)
        {
            if(!iswalnum(s[i]))
                ++i;
            else if(!iswalnum(s[j]))
                --j;
            else if(tolower(s[i++]) != tolower(s[j--]))
                return false;
        }
        
        return true;
    }
};
