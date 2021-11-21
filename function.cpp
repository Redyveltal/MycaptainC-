#include <iostream>
using namespace std;
bool checkprime(int n);
int main()
{
    int n, i;
    bool flag = false;

    cout << "Enter any positive  integer: ";
    cin >> n;

    for(i = 2; i <= n/2; ++i)
    {
        if (checkprime(i))
        {
            if (checkprime(n - i))
            {
                cout << n << " = " << i << " + " << n-i << endl;
                flag = true;
            }
        }
    }
    if (!flag)
      cout << n << " cannot be expressed as the sum of two prime numbers.";
    return 0;
}
bool checkprime(int n)
{
    int i;
    bool isPrime = true;
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
