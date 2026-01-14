class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        int digit;
        int count=0;
        while(temp!=0){
            digit=temp%10;
            temp=temp/10;
            if(num%digit==0){
                count++;
            }
        }
        return count;
    }
};