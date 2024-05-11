/* sieve of erastosthenes print all prime numbers form n*/
#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2 || n==3)
    {
        return 1;
    }
    if(n%2==0 || n%3==0)
    {
        return 0;
    }
    for(int i=5;i<=sqrt(n);i=i+6)
    {
        if(n%i==0)
        {
            return 0;
        }
        if(n%(i+2)==0)
        {
            return 0;
        }
    }
    return 1;
}





void print_all_prime_numbers(int n)
{
  for(int i=0;i<=n;i++)
  {
     if(isprime(i))
     {
        cout<<i<<endl;
     }
  }


} 
int main()
{
    int n;
    cin>>n;
    print_all_prime_numbers(n);
}


/*
void print_all_prime_numbers(int n)
{
   vector<bool>isprime(n+1,true);
   for(int i=2;i<=n;i++)
   {
       if(isprime[i])
       {
        cout<<i<<endl;
        for(int j=i*i;j<=n;j=j+i)
         {
             isprime[j]=false;
         }
       }
   }
   
}


int main()
{
    int n;
    cin>>n;
    print_all_prime_numbers(n);
}

*/