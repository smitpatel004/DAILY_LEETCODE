class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        if(sum%k==0){
            return cnt;
        }
        if(sum<k){
            return sum;
        }
        else{
            int diff1 = abs(sum - k);
           int ans = diff1%k;
            return ans;

        }
    }
};
