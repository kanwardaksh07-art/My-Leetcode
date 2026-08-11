class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();

        int el1 = 0;
        int el2 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        // Phase 1: Find two possible candidates
        for(int i = 0; i < n; i++){

            if(cnt1 == 0 && el2 != nums[i]){
                el1 = nums[i];
                cnt1++;
            }
            else if(cnt2 == 0 && el1 != nums[i]){
                el2 = nums[i];
                cnt2++;
            }
            else if(nums[i] == el1){
                cnt1++;
            }
            else if(nums[i] == el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ls;

        // Phase 2: Actually count the candidates
        cnt1 = 0;
        cnt2 = 0;

        for(int i = 0; i < n; i++){

            if(el1 == nums[i]){
                cnt1++;
            }

            if(el2 == nums[i]){
                cnt2++;
            }
        }

        int mini = n/3 + 1;

        if(cnt1 >= mini){
            ls.push_back(el1);
        }

        if(cnt2 >= mini && el1 !=el2){
            ls.push_back(el2);
        }

        sort(ls.begin(), ls.end());

        return ls;
    }
};