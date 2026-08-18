class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        set<tuple<int, int, int>> st;
        for(int i = 0; i < n-2; i++){
            int l = i+1;
            int r = n - 1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0){
                    st.insert({nums[i], nums[l], nums[r]});
                }
                
                if(sum < 0){
                    l++;
                }else{
                    r--;
                }
            }
        }
        for(auto &[a, b, c] : st){
            ans.push_back({a, b, c});
        }

        return ans;
    }
};
