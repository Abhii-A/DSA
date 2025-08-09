class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        long ans = 0;

        while(i<s.size() && s[i]== ' '){
            i++;
        }
        
        int sign = 1;
        if(s[i]=='-' || s[i]=='+') {
            if(s[i]=='-') sign = -1;
            i++;
        }

        while(i<n && s[i]=='0'){
            i++;
        }

        while(isdigit(s[i]) && i<n){

            int num = s[i] - '0';
            ans = ans*10 + num;

            if(sign == 1 && ans>INT_MAX) return INT_MAX;
            if(sign == -1 && -ans<INT_MIN) return INT_MIN;
         
            i++;
        }
        return sign*ans;
    }
};
