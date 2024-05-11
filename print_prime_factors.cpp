#include <bits/stdc++.h>
using namespace std;


void print_prime_factors(int n)
{
    if(n<=1)
    cout<<-1<<endl;

    while(n%2==0)
    {
        cout<<2<<endl;
        n=n/2;
    }
    while(n%3==0)
    {
        cout<<3<<endl;
        n=n/3;
    }
     
    for(int i=5;i<=sqrt(n);i+=6)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<i+2<<endl;;
            n=n/(i+2);
        }
    }
    if(n>3)
    {
        cout<<n;
    }

}
int main()
{
    int n;
    cin>>n;
    print_prime_factors(n);
}