class Solution {
public:

    string encode(vector<string>& strs) {
        vector<pair<int, string>> lengths;
        for(string s:strs){
            lengths.push_back({s.length(), s});
        }
        string answer="";
        for(auto &l:lengths){
            string len = to_string(l.first);
            answer = answer+"#"+len+"#"+l.second;
        }
        return answer;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        
        while (i < s.size()) {
            i++;
            int j = i;
            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            string word = s.substr(j + 1, len);
            ans.push_back(word);

            i = j + 1 + len;
        }

        return ans;
    }
};
