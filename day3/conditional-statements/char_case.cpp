#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<< "enter a character(alphabet): ";
    cin>> ch;

    if(ch>='a' && ch<='z'){
        cout<< "lowercase";

    }else{
        cout<< "uppercase";
    }
    

        char cc;
    cout<< "enter a character(alphabet): ";
    cin>> cc;

    if(cc>=65 && ch<=90){
        cout<< "lowercase";

    }else{
        cout<< "uppercase";
    }
    return 0;

}