int gcd(unsigned int a, unsigned int b)
{
    int temp;
    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a > 2147483647 || b > 2147483647)
        return 0;

    if(a == 0 || b == 0)
        return 0;
    return ((a * b) / gcd(a,b));
}