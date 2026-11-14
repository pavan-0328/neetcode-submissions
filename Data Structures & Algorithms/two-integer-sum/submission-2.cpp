class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> lookUp;
        for(int i=0;i<nums.size();i++){
            lookUp[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(lookUp.count(diff) !=0 && lookUp[diff] != i){
                return {min(i,lookUp[diff]),max(i,lookUp[diff])};
            }
        }
        return {-1,-1};
    }
};
