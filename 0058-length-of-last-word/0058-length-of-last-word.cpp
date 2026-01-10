class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty()) return 0;
        int count=0;
        bool fchar=false;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                fchar=true;
                count++;
            }
            else if(fchar){
                break;
            }
        }
        return count;
    }
};
