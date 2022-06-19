class Solution {
  
  // Time: O(n)
  
public:
    bool isPalindrome(string s) {
        
        string str = "";
        for(auto &C : s){
            if((C>64&&C<91)||(C>96&&C<123)||(C>47&&C<58)){
                str += tolower(char(C));
            }
        }
        
        int n = str.length();
        
        for(int i = 0; i < n/2; i++){
            if(str[i] != str[n-1-i])
                return false;
        }
        
        return true;
        
        
    }
};

                                                      // 2nd sol using two pointer concepts & without using ascii code


class Solution {
  
  // Time: O(n)
  
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        while (i < j) {
            while (!isalnum(s[i]) && i < j) {
                i++;
            }
            while (!isalnum(s[j]) && i < j) {
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
};
