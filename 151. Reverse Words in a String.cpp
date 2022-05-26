class Solution {
public:
    string reverseWords(string s) {
        string word;
        string ans="";
        stringstream iss(s);
        while(iss>>word)
        {
            ans=" "+word+ans;
        }
        return ans[0]==' '?ans.substr(1):ans;
    }
};