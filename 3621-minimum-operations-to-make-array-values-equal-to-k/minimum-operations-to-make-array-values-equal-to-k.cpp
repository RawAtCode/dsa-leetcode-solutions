class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> st;

        for(int &currNum : nums) {
            if(currNum < k) {
                return -1;
            } 
            else if(currNum > k) {
                st.insert(currNum);  
            }
        }

        return st.size();
    }
};