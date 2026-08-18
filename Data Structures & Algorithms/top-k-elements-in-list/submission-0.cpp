class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        multimap<int, int, greater<int>> mp2;
        vector<int> s;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto it: mp){
            mp2.insert({it.second, it.first});
        }

        int i = 1;
        for(auto it : mp2){
            if(i > k) break;
            s.push_back(it.second);
            i++;
        }

        return s;
    }
};
