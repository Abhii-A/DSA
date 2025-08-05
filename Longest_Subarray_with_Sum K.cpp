int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int sum = 0;
        int maxi = 0;
        unordered_map<int,int>presum;
        
        for(int i =0;i<n;i++){
            sum = sum+arr[i];
            if(sum==k){
                maxi = i+1;
            }
            int rem = sum-k;
            if(sum!=k && presum.find(rem)!=presum.end()){
                int len = i-presum[rem];
                maxi = max(maxi,len);
            }
            if(presum.find(sum)==presum.end()){
                presum[sum] = i;
            }
        }
        return maxi;
    }
