class Solution {
public:
    string encode(vector<string>& strs) {
        string res = "";
        for(string s : strs){
            res.push_back((char)s.size());
            res += s;
        }
        cout << "encode string = " << res << endl;
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string str = "";
        int i = 0; 
        while(i < s.size()){
            int len = (unsigned char)s[i];
            while(len){
                str += s[i + 1];
                i++;
                len--;
            }

            res.push_back(str);
            str = "";
            i++;
        }

        return res;
    }
};
