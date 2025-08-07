class Solution {
public:
    bool isPalindrome(string s) {
        int index = 0;
        for(int i = 0;i<s.size();i++){
            char ch = s[i];
            if(isalnum(ch)){
                s[index] = tolower(ch);
                index++;
            }
        }
        s.resize(index);

        int l = 0;
        int r = s.size()-1;
        while(l<=r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
