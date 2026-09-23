//week03-2.cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k =0;
        for (int num : nums){
            if (num !=0){
                nums[k] = num;
                k++;
            }
        }
        //把殘留的 , 都變成0
        for (int i=k; i<nums.size();i++){
            nums[i] = 0;
        }
    }
};
