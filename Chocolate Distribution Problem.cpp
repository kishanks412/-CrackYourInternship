class Solution{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    int x=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i<n-m+1;i++)
    {
        if(x>a[m+i-1]-a[i])
            x=a[m+i-1]-a[i];
    }
    return x;
    }   
};