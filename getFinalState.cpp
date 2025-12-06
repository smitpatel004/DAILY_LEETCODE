class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int min =INT_MAX;
            int r=0;
           for(int i=0;i<nums.size();i++){
                if(nums[i]<min){
                    min = nums[i];
                    r=i;
                }
           }
           nums[r]= min*multiplier;
        }
        return nums;
    }
};
