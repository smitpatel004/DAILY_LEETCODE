class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(), greater<>());
        int ans =0;
        int ii = 1;
        for(int i=0; i <cost.size() ; i++){
            if((i+1)%3==0){
                continue;
            }else{
                    ans += cost[i];
            }
            ii++;
        }
        return ans;
    }
};
