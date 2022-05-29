#include <iostream>

int main() 
{
    int sum = 0;
    int n = 2, nSub1 = 0, nSub2 = 1;
    while(n < 4000000)
    {
        n = nSub1 + nSub2;
        if(n % 2 == 0)
            sum += n;
        nSub2 = nSub1;
        nSub1 = n;
    }
    std::cout << sum;
}