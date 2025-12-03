class Solution {
public:
    int reverseDegree(string s) {
        int s1=0;
      for(int i=0;i<s.length();i++){
        s1 += ((i+1)*(26-(s[i]-'a')));
      }
      return s1;
    }
};
