class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum=0;
        int temp;
        for(int i=0;i<nums.size(); i++){
            elementSum+=nums[i];
            temp=nums[i];
            while(temp!=0){
                digitSum+=temp % 10;
                temp=temp/10;
            }
        }
        return abs(elementSum - digitSum);
            }
};