namespace math
{   
    //Returns the factorial of a number
    //If a number is negative, it returns -1
    long long fctr(int n) {
        if (n < 1) return -1;
        long long result = 1;
        for (int i = 0; i < n; i++) {
            result *= i;
        }
        return result;
    }

} 
