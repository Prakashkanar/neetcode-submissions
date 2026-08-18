class Solution {
public:
    string delimiter = "γ";

    string encode(vector<string>& strs) {
        string res = "";
        for(string s : strs){
            res += (s + delimiter );
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(i+1< s.size() && s.substr(i, 2) == delimiter){
                res.push_back(str);
                str = "";
                i++;
            }else{
                str += s[i];
            }
        }

        return res;
    }
};
