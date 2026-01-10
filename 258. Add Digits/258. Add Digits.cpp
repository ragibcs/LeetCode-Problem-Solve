class Solution {
public:
    int addDigits(int num) {
        string s=to_string(num);
        int add=0;
        for(int i=0;i<s.length();i++){
           int a=s[i]-'0';
           add+=a;
        }
        
        while (add>=10){
            string news =to_string(add);
            int sum=0;
            for(int j=0;j<news.length();j++){
            int b=news[j]-'0';
            sum+=b;
            }
            add=sum;
        }
        return add;

    }
};
