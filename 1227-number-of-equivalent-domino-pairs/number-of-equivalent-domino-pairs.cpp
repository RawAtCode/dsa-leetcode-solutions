class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        int count = 0;
        map<pair<int, int>, int> mp;

        for(int i=0; i<n; i++){
            if(dominoes[i][0] > dominoes[i][1]){
                swap(dominoes[i][0], dominoes[i][1]);       //{1,2} is same as {2,1}
            }

            mp[{dominoes[i][0], dominoes[i][1]}]++;
        }

        for(const auto &pair : mp){
            int freq = pair.second;

            count += freq * (freq-1) / 2;
        }

        return count;
    }
};