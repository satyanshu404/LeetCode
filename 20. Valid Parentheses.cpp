class Solution {
  
//   Time: O(n)
  
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        for(int i = 0; s[i] != '\0'; ++i){
            
            if(s[i] == '(' or s[i] == '{' or s[i] == '[')
                st.push(s[i]);
            else{
                
                if(st.empty())
                    return false;
                if(st.top() == '{' and s[i] != '}')
                    return false;
                if(st.top() == '(' and s[i] != ')')
                    return false;
                if(st.top() == '[' and s[i] != ']')
                    return false;
                
                st.pop();                
            }
            
        }
        
        if(!st.empty())
            return false;
        
        return true;        
    }
        
        
};
