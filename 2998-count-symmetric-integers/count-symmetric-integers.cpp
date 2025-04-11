class Solution {
public:
    bool isSymmetric(int &n){
        string num = to_string(n);

        if(num.length() % 2 != 0){
            return false;
        }

        int mid = num.length()/2 - 1;
        int firstHalf = 0;
        int secondHalf = 0;

        for(int i=0; i<=mid; i++){
            firstHalf += num[i];
        }

        for(int i=mid+1; i<num.length(); i++){
            secondHalf += num[i];
        }

        return firstHalf == secondHalf;
    }

    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        while(low <= high){
            if(isSymmetric(low)){
                count++;
            }

            low++;
        }

        return count;
    }
};