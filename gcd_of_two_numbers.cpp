#include <bits/stdc++.h>
using namespace std;

/* Naive method */
/*
int main()
{
    int m,n;
    cin>>m>>n;
    int minimum= min(m,n);
    
    while(minimum>0)
    {
        if(m%minimum==0 && n%minimum==0)
        {
            break;

        }
        minimum--;
    }
    cout<<minimum<<endl;
    return 0;
}
*/

/* Better Solution */
/*
int main()
{
    int m,n;
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
        
    }
    cout<<m<<endl;
    return 0;
}

*/

int gcd_of_two_num(int m,int n)
{
    if(n==0)
    {
        return m;
    }
    return gcd_of_two_num(n,m%n);
}


int main()
{
    int m,n;
    cin>>m>>n;
    cout<<gcd_of_two_num(m,n)<<endl;
}

/* recursive approach t.c o(1) or s.c  0(log(min(a,b)))*/