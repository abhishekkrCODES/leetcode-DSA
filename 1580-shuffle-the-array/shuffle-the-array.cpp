class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> vec;
        for(int idx=0; idx<n; idx++){
            vec.push_back(nums[idx]);
            vec.push_back(nums[idx+n]);
        }
        return vec;
    }
};