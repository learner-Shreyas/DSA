#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter the marks";
    cin>> marks;

    if(marks>=90){
        cout<<"distinction\n";

    }else if(marks>=80 && marks<=89){
        cout<< "1st class\n";
    }
    else if(marks>=35 && marks<=79){
        cout<< "pass\n";
    }else{
        cout<< "fail";
    }
    return 0;   


}