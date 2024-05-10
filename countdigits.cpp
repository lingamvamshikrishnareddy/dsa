/* count number of digits in a number*/






#include <bits/stdc++.h>
using namespace std;


/*

int countdigits(int n)
{
    int count{0};
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
}

*/

// another apporach since its time complexity 0logn and a.s is 0(1)

/*
int main()
{
    int n;
    cin>>n;
    cout<<int(log10(n)+1);
}
*/

/*

int main()
{
    int n;
    cin>>n;
    string answer;
    while(n>0)
    {
        int num = n%10;
        char ans= '0'+num;
       answer= ans+answer;
        n/=10;
    }
    cout<<answer.length()<<endl;
    return 0;

}

*/