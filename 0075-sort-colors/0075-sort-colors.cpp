class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0;
        int c1=0;
        int c2=0;
        int n=nums.size();
        int i;
        for(i=0;i<n;i++){
            if(nums[i]==0) c0++;
            if(nums[i]==1) c1++;
            if(nums[i]==2) c2++;
        }
        i=0;
        while(c0--) nums[i++]=0;
        while(c1--) nums[i++]=1;
        while(c2--) nums[i++]=2;
    }
};