// Problem: Maximum and Minimum in an Array
// Platform: GeeksforGeeks
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return {min,max};
        
    }
};