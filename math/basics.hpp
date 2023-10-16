namespace math
{   
    //Returns the factorial of a number
    //If a number is negative, it returns -1
    long long fctr(int number) 
    {
        if (number < 1) return -1;
        long long result = 1;
        for (int i = 1; i < number + 1; i++) {
            result *= i;
        }
        return result;
    }

    //Gets the number in a certain power
    long long toPower(int number, int power)
    {
        long long result = 1;
        for (int i = 0; i < power; i++) 
        {
            result *= number;
        }
        return number;
    }

    //Returns the number squared
    long long sqr(int number) 
    {
        return toPower(number, 2);
    } 
    
} 
