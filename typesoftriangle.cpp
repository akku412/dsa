#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    if(n1==n2  && n2==n3 && n3==n1){

        cout<<"it is an equilateral traingle";

    }
    

    else if(n1=n2 && n2==n3 &&  n3!=n1){


         cout<<"it is isosceles triangle";

    }
    

    else {

        cout<<"it is a scalar triangle";

    }
    
}