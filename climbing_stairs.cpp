/*
 You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 */




// lol AHHAHAHAHA
class Solution {
public:
    int climbStairs(int n) {
        switch(n) {
            case 0:
                return 1;
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 3;
            case 4:
                return 5;
            case 5:
                return 8;
        }
        return climbStairs(n - 2) + climbStairs(n - 1);
    }
};
