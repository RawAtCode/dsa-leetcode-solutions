class Solution {
public:
    int find(vector<int>& tops, vector<int>& bottoms, int val){
        int n = tops.size();
        int swapTop = 0;
        int swapBottom = 0;

        for(int i=0; i<n; i++){
            if(tops[i] != val && bottoms[i] != val){
                return -1;
            }
            else if(tops[i] != val){
                swapTop++;
            }
            else if(bottoms[i] != val){
                swapBottom++;
            }
        }

        return min(swapTop, swapBottom);
    }

    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int res = INT_MAX;

        for(int i=1; i<=6; i++){
            int swaps = find(tops, bottoms, i);

            if(swaps != -1){
                res = min(res, swaps);
            }
        }

        return res == INT_MAX ? -1 : res;
    }
};