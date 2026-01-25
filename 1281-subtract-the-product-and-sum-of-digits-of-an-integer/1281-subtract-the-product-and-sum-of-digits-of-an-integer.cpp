class Solution {
public:
    int subtractProductAndSum(int n) {

        int sum=0;
        int mul=1;
        string s=to_string(n);
        while(n>0){
            int ne=n%10;
            n=n/10;

            sum+=ne;
            mul*=ne;
        }
        return (mul-sum);
    }
};