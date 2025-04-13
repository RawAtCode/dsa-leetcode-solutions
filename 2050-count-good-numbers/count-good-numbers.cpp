class Solution {
public:
    const int M = 1e9+7;

    int findPower(long long a, long long b){
        if(b == 0){         //a^0=1
            return 1;
        }

        //BINARY EXPONENTIATION
        //if b is even : (a^b/2)^2
        //if b is odd : a * (a^b/2)^2

        long long half = findPower(a, b/2);
        long long res = (half * half) % M;

        if(b % 2 == 1){
            res = (res * a) % M;
        }

        return res;
    }

    int countGoodNumbers(long long n) {
        return (long long)findPower(5, (n+1)/2) * findPower(4, (n/2)) % M;
    }

    //5 possibilities for even places 0,2,4,6,8
    //4 possibilities for odd places 2,3,5,7
};