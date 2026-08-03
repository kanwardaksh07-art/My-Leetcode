class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i;
        int j;
        int temp;
        int n=nums.size();
        unordered_map <int,int> freq;
        for(i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second>n/2) return it.first;
        }
        return 0;
    }
};