#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int n;
   int j;

   cout << "Give me a number: ";
   cin >> n;

   int a[n];
   int lowerbound = sqrt(n);


    for (int i = 2; i <= n ; i++)
    {
        a[i] = i;
    }

    for (int i = 2; i <= lowerbound; i++)
    {
        if (a[n] != 0)
        {
            j = i*i;
            while (j <= n)
            {
                a[j] = 0;
                j = j + i;
            }
        }

    }

    cout << "The primes are: ";

    for (int i = 2; i < (n + 1); i++)
    {
        if (a[i] != 0)
        {
             cout << a[i] << endl;
        }

    }





}
