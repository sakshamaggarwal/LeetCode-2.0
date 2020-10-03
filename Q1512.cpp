class Solution {
public:
    int cal(int k)
    {
        int a=0;
        while(k>0)
        {
            a+=k;
            k--;
        }
        return a;
    }
    int numIdenticalPairs(vector<int>& nums) {
        
        int n=nums.size();
        int k=0,sum=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            k=0;
            while(i<n&&nums[i]==nums[i-1])
            {
                k++;
                i++;
            }
            
            sum+=cal(k);
        }
        
        return sum;
    }
};
