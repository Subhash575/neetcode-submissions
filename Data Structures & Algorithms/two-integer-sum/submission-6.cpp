class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> res;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            res.push_back({nums[i], i});
        }

        sort(res.begin(), res.end());

        int i = 0;
        int j = n-1;

        while(i < j){
            int curr = res[i].first + res[j].first;
            if(curr == target){
                return {min(res[i].second, res[j].second),
                max(res[i].second, res[j].second)};
               
            }else if(curr > target){
                j--;
            }else if(curr < target){
                i++;
            }
        }

        return {};   
    }
};
