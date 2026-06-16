class Solution {
public:
    string processStr(string s) {
        string ans ="";
        for(char c:s){
            if(c == '*' || c== '#'|| c=='%'){
                if(c=='*'){
                              if (!ans.empty()) {
                    ans.pop_back();
                }
                   cout<<"ans"<<endl;
                   cout<<ans<<endl;
                }
                  if(c=='#'){
                  ans = ans +ans;
                   cout<<"ans>>>"<<endl;
                   cout<<ans<<endl;
                }
              if(c=='%'){
                    reverse(ans.begin(),ans.end());
                     cout<<"ans<<<<<+++"<<endl;
                   cout<<ans<<endl;
                }
            }
            else{
                ans += c;
                 cout<<"ans!!!!!!!!!!!!!!!"<<endl;
                   cout<<ans<<endl;
            }
        }
        return ans;
    }
};
