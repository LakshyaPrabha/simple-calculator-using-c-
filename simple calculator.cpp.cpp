#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char op;
    cout<<"enter two vaLUE:";
    cin>>a>>b;
    cout<<"enter choose:+,-,*,/:";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<a+b;
        break;
        case '-':
        if(a>b)
        {
            cout<<a-b;
        }
        else
        {
            cout<<b-a;

        }
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        if(a>b)
        {
            cout<<a/b;
        }
        else
        {
            cout<<b/a;

        }
        break;
        default:
        cout<<"wrong choice";
        

    }

    
    
    return 0;
}