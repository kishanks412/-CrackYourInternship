class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int>s;
        vector<int>v(n);
        v[n-1]=0;
        s.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false && temperatures[s.top()]<=temperatures[i])
                s.pop();
            int x=s.empty()?0:s.top()-i;
            v[i]=x;
            s.push(i);
        }
        return v;
    }
};