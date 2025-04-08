class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;

        while (true) {
            unordered_set<int> st;
            bool hasDuplicate = false;

            //duplicates dhundo
            for (int num : nums) {
                if (st.count(num)) {
                    hasDuplicate = true;
                    break;
                }
                st.insert(num);
            }

            //koi duplicate nhi ya array empty ho gya
            if (!hasDuplicate || nums.empty())
                break;

            //pehle 3 elements hata do
            int removeCount = min(3, (int)nums.size());
            nums.erase(nums.begin(), nums.begin() + removeCount);
            count++;
        }

        return count;
    }
};
