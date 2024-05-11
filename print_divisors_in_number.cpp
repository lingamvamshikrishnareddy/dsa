#include <bits/stdc++.h>
using namespace std;


/*

void print_divisors_in_number(int n)
{
    cout<<1<<endl;
         for(int i=2;i<n;i++)
         {
            if(n%i==0)
            {
                cout<<i<<endl;
            }
         }
         cout<<n<<endl;
}


int main()
{
    int n;
    cin>>n;
    print_divisors_in_number(n);
}

*/

/* Time complexity o(n) and space complexity o(1)*/


void print_divisors_in_numbers(int n)
{    int i{0};
    for( i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
    for(;i>0;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<endl;
        }

    }
}

int main()
{
    int n;
    cin>>n;
    print_divisors_in_numbers(n);
    return 0;
}