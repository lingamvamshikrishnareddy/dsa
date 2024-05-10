<<<<<<< HEAD
// check the given number is palindrome or not


#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(int n)
{
    int temp= n;
    int answer{0};
    while(n>0)
    { 
        answer=answer*10+n%10;
        n/=10; 
    }
    if(answer==temp)
    {
        return 1;
    }
    else 
    {
        return 0;
    }

}



int main()
{
    int n;
    cin>>n;
    cout<<ispalindrome(n);
=======
// check the given number is palindrome or not


#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(int n)
{
    int temp= n;
    int answer{0};
    while(n>0)
    { 
        answer=answer*10+n%10;
        n/=10; 
    }
    if(answer==temp)
    {
        return 1;
    }
    else 
    {
        return 0;
    }

}



int main()
{
    int n;
    cin>>n;
    cout<<ispalindrome(n);
>>>>>>> 1e5f0278670db5d0d1a2071b23f06ca7a8280e62
}