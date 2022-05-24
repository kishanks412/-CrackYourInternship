class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
        string s="";
        int l=a.size()-1,m=b.size()-1;
        while(l>=0 && m>=0)
        {
            int x=c+(b[m]-'0')+(a[l]-'0');
            s=to_string(x%2)+s;
            c=x/2;
            l--;m--;
        }
        while(l>=0)
        {
            int x=c+(a[l]-'0');
            s=to_string(x%2)+s;
            c=x/2;
            l--;
        }
        while(m>=0)
        {
            int x=c+(b[m]-'0');
            s=to_string(x%2)+s;
            c=x/2;
            m--;
        }
        if(c)
            s=to_string(c)+s;
        return s;
        
    }
};