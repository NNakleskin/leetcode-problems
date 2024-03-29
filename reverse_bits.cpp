/*
    Reverse bits of a given 32 bits unsigned integer.

Note:

Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
In Java, the compiler represents the signed integers using 2's complement notation. Therefore, in Example 2 above, the input represents the signed integer -3 and the output represents the signed integer -1073741825.
 */


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        std::string bits;
        for(int i = 0; i < 32; i++) {
            bits += n % 2 + '0';
            n /= 2;
        }
        return (uint32_t) std::strtoll(bits.c_str(), nullptr, 2);
    }
};
