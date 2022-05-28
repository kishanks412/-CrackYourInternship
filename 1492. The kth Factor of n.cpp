class Solution {
public:
    int kthFactor(int n, int k) {
        set<int> s;
        
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                    s.insert(i);
                else{
                    s.insert(i);
                    s.insert(n/i);
                }
            }
        }
        int i=0,ans;
        for(auto it=s.begin(); it!=s.end() && i<k;it++ )
        {
            ans=*it;
            i++;
        }
        if(k>s.size())
            return -1;
        return ans;
    }
};