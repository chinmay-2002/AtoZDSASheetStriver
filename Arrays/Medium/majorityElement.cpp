// https://leetcode.com/problems/majority-element/description/



//  O(n) and O(1) extra space

// Need to understand

public class Solution {
    public int majorityElement(int[] num) {

        int major=num[0], count = 1;
        for(int i=1; i<num.length;i++){
            if(count==0){
                count++;
                major=num[i];
            }else if(major==num[i]){
                count++;
            }else count--;
            
        }
        return major;
    }
}


//  O(nlogn) and O(1) extra space

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 1;
        int count = 1;
        while(i<nums.size()){
            if(nums[i]!=nums[i-1]){
                if(count > nums.size()/2){
                    return nums[i-1];
                }
                count = 1;
            }
            else{
                count++;
            }
            i++;
        }
        return count>nums.size()/2?nums[nums.size()-1]:-1;
    }
};


//  O(n) space TC O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<long long int,long long int> mp;
        for(long long int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second>nums.size()/2){
                return it.first;
            }
        }
        return -1;
    }
};