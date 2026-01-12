class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector <bool> p(26,false);
        for(int i=0;i<sentence.length();i++){
            p[sentence[i]-'a']=true;
        }
        for(int i=0;i<26;i++){
            if(p[i]==false){
                return false;
            }
        }
        return true;
    }
};