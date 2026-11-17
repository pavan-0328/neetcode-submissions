class Solution {
private: 
    vector<int> b_search(vector<int>& num,int strt, int end, int target,int i){
        while(strt <= end){
            int mid = strt + (end - strt)/2;
            if(num[mid] == target){
                return {i+1, mid+1};
            }
            else if(num[mid] < target){
                strt = mid + 1;
            }else end = mid - 1;
        }
        return {};
    }
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++){
            vector<int> res = b_search(numbers,i+1,numbers.size()-1,target - numbers[i],i);
            if(res.size() != 0){
                return res;
            }
        }
        return {-1,-1};
    }
};
