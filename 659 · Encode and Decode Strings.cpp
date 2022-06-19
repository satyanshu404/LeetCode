class Solution {
  
  // Time: O(n)
  
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs){
        string sol = "";
        for (int i = 0; i < strs.size(); ++i)    {
            sol.append(strs[i]);
            sol.append("@");
    }

    return sol;
}

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
    vector<string> decode(string &str){
        stringstream X(str);
        string t;

        vector<string> sol;
        while(getline(X, t, '@')){
            sol.push_back(t);
        }

        return sol;
}

};
