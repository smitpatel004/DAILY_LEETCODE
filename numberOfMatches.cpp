class Solution {
    public int numberOfMatches(int n) {
        int sum=0;
        while(n!=1){
            int r = n /2;
             sum +=r;
            r =  n-r;
         
            
            n = r;
        
        }
        return sum;
    }
}
