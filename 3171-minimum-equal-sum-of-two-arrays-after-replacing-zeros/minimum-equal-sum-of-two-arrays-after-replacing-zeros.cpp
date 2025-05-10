class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums1.size();
        int zeros1 = 0;
        int zeros2 = 0;
        long long sum1 = 0;
        long long sum2 = 0;


        for(int num : nums1){
            if(num == 0){
                zeros1++;
                sum1 += 1;
            }
            
            sum1 += num;
        }

        for(int num : nums2){
            if(num == 0){
                zeros2++;
                sum2 += 1;
            }
            
            sum2 += num;
        }

        if((sum1 < sum2 && zeros1 == 0) || (sum2 < sum1 && zeros2 == 0)){
            return -1;
        }

        return max(sum1, sum2);
    }
};