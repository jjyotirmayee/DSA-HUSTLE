#include<iostream>
using namespace std;
int main()
{
    int a,n,rn,c;
    cin>>n;
    c=n;
    rn=0;
    a=0;
    while(n!=0)
    {
        a=n%10;
        rn=rn*10+a;
        n=n/10;
    }
    cout<<rn<<endl;
    if(rn==c)
    {
        cout<<"The no. is palindromic"<<rn<<endl;
    }
    else
    {
        cout<<"The no. is not palindromic"<<endl;
    }
    return 0;
}