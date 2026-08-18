class Solution {
public:
    string encode(vector<string>& strs) {
        string res = "";
        for(string s : strs){
            for(char c: s){
                res.push_back(c);
            }
            res.push_back((char)0xffffff);
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == (char)0xffffff){
                res.push_back(str);
                str = "";
            }else{
                str += s[i];
            }
        }

        return res;
    }
};
