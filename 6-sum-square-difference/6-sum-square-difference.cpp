#include <iostream>

static long squareNatSum(int n)
{
    n = (n * (n + 1)) / 2;
    return n * n;
}

static long sumNatSquares(int n)
{
    return n * ((n + 1) * (2 * n + 1)) / 6;
}

int main()
{
    std::cout << squareNatSum(100) - sumNatSquares(100);
}