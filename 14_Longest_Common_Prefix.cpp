class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans = "";
        for(int i =0; i<s[0].size(); i++){
            char ch = s[0][i];
            for(int j = 1; j<s.size(); j++){
                if(ch != s[j][i]) return ans;
                
            }
            ans += ch;
        }
        return ans;
    }
};
