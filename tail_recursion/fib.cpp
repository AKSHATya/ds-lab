 #include 
long long int dat[101];
long long int fib(int n)
{
    if (n == 1 || n == 2)
        return dat[n] = n - 1;
    else
    {
        if (dat[n] == 0)
            dat[n] = fib(n - 1) + fib(n - 2);
    }
    return dat[n];
}

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

bool is_palindrome(string s, int lo, int hi)
{
    if (s[lo] != s[hi])
        return false;
    if (lo < hi)
    {
        is_palindrome(s, lo + 1, hi - 1);
    }
    return true;
}
int rev(int n, int ans = 0)
{
    return n == 0 ? ans : rev(n / 10, ans * 10 + n % 10);
}

int sumOfdg(int n, int ans = 0)
{
    return n == 0 ? ans : sumOfdg(n / 10, ans + n % 10);
}
