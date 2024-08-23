class Solution {
public:
    string fractionAddition(string expression) 
    {
        vector<int> numerators;
        vector<int> denominators;
        
        int n = 0, d = 1; // Initialize with zero numerator and denominator of 1
        int sign = 1;
        
        for(int i = 0; i < expression.length();)
        {
            // Check for sign
            if(expression[i] == '-')
            {
                sign = -1;
                i++;
            }
            else if(expression[i] == '+') 
            {
                sign = 1;
                i++;
            }
            
            // Extract numerator
            int num = 0;
            while(i < expression.length() && isdigit(expression[i]))
            {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            num *= sign;
            
            // Skip the '/' character
            i++;
            
            // Extract denominator
            int den = 0;
            while(i < expression.length() && isdigit(expression[i]))
            {
                den = den * 10 + (expression[i] - '0');
                i++;
            }
            
            // Adjust the common denominator
            int common_lcm = lcm(d, den);
            
            // Convert both fractions to the common denominator
            n = n * (common_lcm / d) + num * (common_lcm / den);
            d = common_lcm;
            
            // Simplify the fraction
            int g = gcd(abs(n), d);
            n /= g;
            d /= g;
        }
        
        return to_string(n) + "/" + to_string(d);
    }
};
