class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int> numbers(nums.begin(),nums.end());
        for(int num:numbers){
            if(numbers.find(num-1)==numbers.end()){
                int current=num;
                int length=1;
            
            while(numbers.find(current+1)!=numbers.end()){
                current++;
                length++;
            }
            longest=max(longest,length);
            }
        }
       return longest; 
    }
};