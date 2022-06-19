class Solution {

// TIme O(n)

public:
    bool isAnagram(string s, string t) {
        
        vector<int> alphabets(26);
        
        for(auto &C : s){
            alphabets[C - 'a']++;
        }
        
        for(auto &C : t){
            alphabets[C - 'a']--;
        }        
        
        for(auto &C : alphabets){
            if(C < 0 || C > 1){
                return false;
            }
        }
        
        return true;
    }    
    
};
 
                                                                  // 2nd Sol. using sorting 

class Solution {

// TIme O(nlogn)
    
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s.compare(t) == 0){
            return true;
        }  
        return false;
    }
    
    
};
