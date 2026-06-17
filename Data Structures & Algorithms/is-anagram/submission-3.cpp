class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()){
            return false;
        }

        vector <int> s_alpha(26,0);
        vector <int> t_alpha(26,0);
        
        for (char ch : s){
            s_alpha[ch-'a']++;
        }
        for (char ch : t){
            t_alpha[ch-'a']++;
        }

        for (int i=0;i<26;i++){
            if(s_alpha[i]!=t_alpha[i]){
                return false;
            }
        }

        return true;
    }
};
