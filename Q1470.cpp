class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> a;
        for(int i=0,j=n;i<n;i++,j++)
        {
            a.push_back(nums[i]);
            a.push_back(nums[j]);
        }
        return a;
    }
};
