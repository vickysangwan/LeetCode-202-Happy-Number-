#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    int newNum=0,digit=0;
    while(n!=4 && n!=1)
    {
        newNum=0;
        while(n!=0)
        {
            digit=n%10;
            n=n/10;
            newNum=newNum + digit*digit;
        }
        n=newNum;
    }
    if(n==1)
    {
        cout<<"Happy Number"<<endl;
    }
    else
    {
        cout<<"Not a happy Number"<<endl;
    }
    return 0;
}
