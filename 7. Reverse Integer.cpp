class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x)
        {
            int d=x%10;
            if((ans< (INT_MIN/10)) || ans>INT_MAX/10)
                return 0;
            ans=ans*10 + d;
            x/=10;
        }
        return ans;
    }
};