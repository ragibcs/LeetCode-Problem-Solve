class Solution {
public:
    bool isValid(string s) {
        int x=s.length();
        for(int i = 0; i < x- 1; i++){
            if((s[i]=='(' && s[i+1]==')') || 
               (s[i]=='[' && s[i+1]==']') || 
               (s[i]=='{' && s[i+1]=='}')){
                s.erase(i, 2);
                i = -1;
            }
        }
        return s.empty();
    }
};