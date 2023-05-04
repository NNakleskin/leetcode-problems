/*
 *Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 Constraints:

-100.0 < x < 100.0
-231 <= n <= 231-1
n is an integer.
-104 <= xn <= 104
 */


class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        bool sign = (n >= 0) ? true : false;
        n = abs(n);
        cout << sign;
        vector<int> arr;
        while(n > 1) {
            arr.push_back(n % 2);
            n /= 2;
        }
        arr.push_back(n % 2);
        for(auto it = arr.rbegin(); it != arr.rend(); ++it) {
            res *= res * (*it == 1 ? x : 1);
        }
        return sign ? res : (1 / res);
    }
};
