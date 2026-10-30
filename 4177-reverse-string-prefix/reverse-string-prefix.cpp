class Solution {
public:
    string reversePrefix(string s, int k) {
        int st =0;
        k=k-1;
        while(st<k){
            swap(s[st],s[k]);
            st++;
            k--;
        }
        return s;
    }
};