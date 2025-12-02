class Solution {
public:
    string defangIPaddr(string address) {
        string s ="";
        for(char c :address){
            // cout<<c<<endl;
            if(c == '.'){
                s=s+'[';
                 s=s+'.';
                  s=s+']';

            }else{
                s+=c;
            }
        }
        return s;
    }
};
