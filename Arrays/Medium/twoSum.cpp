
// https://leetcode.com/problems/two-sum/submissions/990138683/

// TC = O(n) AS: O(n)
// Also can be find using O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            if(m.find(target - nums[i])==m.end()){
                m[nums[i]] = i;
            }
            else{
                return {m[target - nums[i]], i};
            }
        }
        return {-1,-1};
    }
};