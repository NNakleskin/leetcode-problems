/*
 Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.
 */


class Solution {
public:
    string multiply(string num1, string num2) {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        char *res = (char*) malloc(256 * sizeof(char));

        for(int i = 0; i < 256; i++)
            res[i] = '0';

        int num1_len = num1.size();
        int num2_len = num2.size();

        for(int i = 0; i < num2_len; i++)
        {
            int num = 0;
            for(int j = 0; j < num1_len; j++)
            {
                int help_sum = (num1[j] - '0') * (num2[i] - '0');
                res[i + num] = ((res[i + num] - '0') + (help_sum % 10)) + '0';
                res[i + num + 1] = ((res[i + num + 1] - '0') + (help_sum / 10)) + '0';
                num++;
            }
        }

        for(int i = 0; i < 255; i++)
        {
            int help = res[i] - '0';
            res[i] = (help % 10) + '0';
            res[i + 1] = ((res[i + 1] - '0') +  (help / 10)) + '0';
        }
        
        int i = 255;
        while(res[i] == '0' && i > 0) {
            i--;
        }

        res[i + 1] = '\0';
        std::string str = res;
        reverse(str.begin(), str.end());

        return str;
    }
};
