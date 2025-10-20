#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec={1,3,2,4,5};
    cout<< "vector elemetns are\n";
    for(int i:vec){
        cout<< i<<"\t";
    }
    cout<<endl;
    cout<<"size of the vector: "<<vec.size()<<"\n";
    cout<<endl;
  cout<<endl;

    vec.push_back(10);
    for(int i:vec){
        cout<< i<<"\t";
    }
    cout<<endl;
    cout<<"size of the vector: "<<vec.size()<<endl;

     cout<<endl;
    cout<<endl;


    vec.pop_back();
    vec.pop_back();
    for(int i:vec){
        cout<< i<<"\t";
    }
    cout<<endl;
    cout<<"size of the vector: "<<vec.size()<<endl;

     cout<<endl;
    cout<<endl;

    vector<int> vec1(3,0);
    cout<< vec1[0]<<endl;
    cout<< vec1[1]<<endl;
    cout<< vec1[2]<<endl;

    cout<<endl;
    cout<<endl;

    vector<char> vec2={'a','b','c','d','e','f','g'};
    cout<< vec2[1]<<endl;

    cout<<"front: "<<vec2.front()<<endl;
    cout<<"back: "<<vec2.back()<<endl;
    cout<<"at: "<< vec2.at(3);

    return 0;
} 