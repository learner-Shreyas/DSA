#include<iostream>
using namespace std;

int main(){
    int a=600;
    int b=30;

    cout<<"arithmetic operations\n";
    cout<<"sum ="<< (a+b)<<endl;
    cout<<"multiplication ="<< (a*b)<<endl;
    cout<<"division ="<< (a/b)<<endl;
    cout<<"subtraction ="<< (a-b)<<endl;
    cout<<"modulo ="<< (a%b)<<endl;

    cout<<5/double(2)<<endl;

    cout<<"relational operations\n";
    cout <<(3<5)<<endl;
    cout <<(3<=5)<<endl;
    cout <<(3>=5)<<endl;
    cout <<(3>5)<<endl;
    cout <<(3==5)<<endl;
    cout <<(3!=5)<<endl;

    cout<<"logical operations output"<<endl;
    cout << ((2>4) || (2<4)) <<endl;
    cout << ((2>4) && (2<4)) <<endl;
    cout << ( !(2>4)) <<endl;

    cout<<"unary operator"<<endl;
    int x=10;
    cout<<"x: "<<x<<endl;
    int y=x++;
    cout<<"y: "<<y<<endl;
    cout<<"x: "<<x<<endl;

    cout<<"decremental "<<endl;
    
     
    
    cout<<"x: "<<x<<endl;
    y=x--;
    cout<<"y: "<<y<<endl;
    cout<<"x: "<<x<<endl;
    return 0;
}