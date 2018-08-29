#include <iostream>

using namespace std;

int main()
{


    int a,i;
    int z=1;
    cout<<"Enter a number:";
    cin>>a;
    for(i=2;i<a-1;i++)
    {
        if(a%i!=0)
        {
            continue;
        }
        else
        {
            z=0
        }
    }
    if(z==0)
    {
        cout<<"Number is not prime";

    }
    else
    {
        cout<<"Number is not prime";
    }

    return 0;
}

