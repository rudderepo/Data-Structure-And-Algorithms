// Problem: Union of Two Arrays with Duplicates
// Platform: GeeksforGeeks
// Approach: Using Set
// Time Complexity: O((n + m) log(n + m))
// Space Complexity: O(n + m)
class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> s;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
            s.insert(b[i]);
        }
        vector<int>ans;
        for(int x:s){
            ans.push_back(x);
        }
        return ans;
    }
};