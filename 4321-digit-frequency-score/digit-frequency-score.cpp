class Solution {
public:
    int digitFrequencyScore(int n) {
        int m=0;
        int sum =0;
        while(n>0)
        {
            m=n%10;
            sum+= m;
            n=n/10;
        }
        return sum;
    }
};