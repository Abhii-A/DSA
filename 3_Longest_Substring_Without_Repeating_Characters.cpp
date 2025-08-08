class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;

        int n = s.size();
        int maxi = 0;
        int len = 0;

        int l = 0;
        for(int i=0;i<n;i++){
            if(mpp.find(s[i])!=mpp.end() && mpp[s[i]]>=l){
                l = mpp[s[i]]+1;
            }
            len = i-l+1;
            maxi = max(maxi,len);
            mpp[s[i]] = i;
        }
        return maxi;
    }
};
