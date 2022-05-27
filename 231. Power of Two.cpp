class Solution {
public:
    bool isPowerOfTwo(int n) {
        long i=n;
        if(i==0)
            return false;
        else if((i&(i-1))==0){
            return true;
        }
        else{
            return false;
        }
    }
};