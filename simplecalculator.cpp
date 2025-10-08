#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the value of n and m:";
    cin>>n>>m;
    char op;
    cout<<"enter the operand:";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<n+m<<endl;
        break;
        case '-':
        cout<<n-m<<endl;
        break;
        case '*':
        cout<<n*m<<endl;
        break;
        case '/':
        cout<<m/n<<endl;
        break;
        case '%':
        cout<<n%m<<endl;
        break;
        default:
    cout<<"there is no such operation";
    }
    return 0;


}