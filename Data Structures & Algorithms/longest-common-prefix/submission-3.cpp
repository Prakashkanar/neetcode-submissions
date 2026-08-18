class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs[0].size(); i++){
            char ch = strs[0][i];
            bool allMatch = true;
            for(int j = 1; j < strs.size(); j++){
                if(i > strs[j].size() || ch != strs[j][i]){
                    allMatch = false;
                    break;
                }
            }
            // cout << "char = " << ch << " allmatch = " << allMatch << endl;
            if(allMatch) res += ch;
            else break;
        }

        return res;
    }
};