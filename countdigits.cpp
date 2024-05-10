#include<bits/stdc++.h>
using namespace std;

int countdigits(int n)
{
    long long int count{0};
    while(n>0)
    {
        count++;
        n/=10;
    }
    return count;
}


int main()
{
    int n;
    cin>>n;
    cout<<countdigits(n)<<endl;
    return 0;
}