class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0;
        int ans = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                m++;
            }
            else{
                ans = max(ans, m);
                m = 0;
            }
        }
        ans = max(ans, m);
        if(ans==-1) return 0;
        return ans;
    }
};