class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int m=x,s=0;
        while(m)
        {
            if(s>=INT_MAX/10)
                return false;
            int rem=m%10;
            s=s*10+rem;
            
            m/=10;
        }
        return (s==x);
            
    }
};