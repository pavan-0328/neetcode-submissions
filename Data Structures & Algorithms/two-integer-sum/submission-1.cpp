class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> A(nums.size());
        for(int idx=0;idx<nums.size();idx++){
            A[idx] = pair<int,int>{nums[idx],idx};
        }

        sort(A.begin(),A.end());
        
        int p1{0},p2{(int)nums.size()-1};
        while(p1 < p2){
            int sum = A[p1].first + A[p2].first;
            if(sum == target){
                return {min(A[p1].second,A[p2].second),max(A[p1].second,A[p2].second)};
            }
            else if(sum < target){
                p1++;
            }
            else{
                p2--;
            }
        }
        return {-1,-1};
    }
};
