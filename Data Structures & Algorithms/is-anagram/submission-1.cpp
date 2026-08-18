class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26);

        for(char x : s) freq[x - 'a']++;
        for(char x : t) freq[x - 'a']--;

        for(int x : freq) if(x) return false;

        return true;
    }
};