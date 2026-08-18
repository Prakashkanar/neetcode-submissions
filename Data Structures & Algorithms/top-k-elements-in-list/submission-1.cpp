class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        multimap<int, int, greater<int>> mp2;
        for(auto it: mp){
            mp2.insert({it.second, it.first});
        }

        vector<int> res;
        auto it = mp2.begin();
        for(int i = 0; i < k && it != mp2.end(); i++, it++){
            res.push_back(it->second);
        }

        return res;
    }
};
