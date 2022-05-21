class Solution {
public:
    bool match(char a, char b){
        return ((a=='(' && b==')')  || (a=='{' && b=='}') || (a=='[' && b==']') );
    }
    bool isValid(string s) {
        stack<char> a;
        a.push('a');
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{'  || s[i]=='[')
            {
                a.push(s[i]);
            }
            if(s[i]==')' || s[i]=='}'  || s[i]==']')
            {
                if(match(a.top(),s[i]))
                    a.pop();
                else
                    a.push(s[i]);
            }
        }
        a.pop();
        return a.empty();
    }
};