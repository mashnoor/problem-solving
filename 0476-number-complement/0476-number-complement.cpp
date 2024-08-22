class Solution {
public:
    int findComplement(int num) {
        int num_bits = floor(log2(num)) + 1;
        unsigned long long v = ((1ULL << num_bits) - 1);
        
        return  v ^ num;
        
    }
};