#include <bits/stdc++.h>>
using namespace std;


/*
bool isprime(int n)
{
      
       for(int i=2;i<n;i++)
       {
          if(n%i==0)
          {
            return 0;
          }
       }
       return 1;

}

int main()
{
    int n;
    cin>>n;
    cout<<isprime(n);
    return 0;
}

*/
/* Time complexity of code O(n) and s.c 0(1)*/


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
    
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
		if (n % i == 0 || n % (i + 2) == 0)
        return 0;
    }
    return 1;


}


int main()
{
    int n;
    cin>>n;
    cout<<isprime(n);
    return 0;
}


