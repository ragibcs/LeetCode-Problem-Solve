class Solution {
public:
    int differenceOfSums(int n, int m) {
        int temp=0;
        int temp1=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                temp+=i;
            }
            else{
                temp1+=i;
            }
        }
        return (temp1-temp);
    }
};