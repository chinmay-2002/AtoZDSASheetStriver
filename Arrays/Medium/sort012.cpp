
// YOHO MI KEL YOHI

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int i = 0, j = 0, k = nums.size()-1;
        while(k>=j && i<=j && j<nums.size()){
            if(nums[j]==0){
                swap(nums[i++], nums[j]);
            }
            else if(nums[j]==2){
                swap(nums[j], nums[k--]);
                if(nums[j]!=1){
                    continue;
                }
            }
            j++;
            
        }
    }
};