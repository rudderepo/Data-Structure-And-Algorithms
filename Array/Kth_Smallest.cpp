// Problem: Kth Smallest Element
// Platform: GeeksforGeeks
// Approach: Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};