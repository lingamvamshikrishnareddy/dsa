#include <bits/stdc++.h>
using namespace std;
/*
int trailingzerosinfactorial(int n)
{
    int fact=1;
    int count{0};
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
        while(fact%10==0)
        {    
            count++;
            fact/=10;
        }
    }
    return count;
}


int main()
{
    int n;
    cin>>n;
    cout<<trailingzerosinfactorial(n);
    return 0;
}

*/

int trailingzerosinfactorial(int n)
{
    int res{0};
    for(int i=5;i<=n;i*=5)
    {
        res+=n/i;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<trailingzerosinfactorial(n);
    return 0;
}

/* Time complexity O(log5n) Space complexity O(1)*/