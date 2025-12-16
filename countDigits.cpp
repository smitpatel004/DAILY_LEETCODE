class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int l=num;
        while(num != 0){
            int r = num %10;
            if(l % r==0){
                cnt++;
            }
            num = num /10;
        }
        return cnt;
    }
};
