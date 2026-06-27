// Problem: Sort Colors
// Platform: LeetCode
// Approach: Dutch National Flag Algorithm (Three Pointers)
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0,end=nums.size()-1,mid=0;
        while(mid<=end){
            if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==0){
                swap(nums[s],nums[mid]);
                s++;
                mid++;
            }
            else{
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
};