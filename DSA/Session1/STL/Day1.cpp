#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(12);
   

    vec.push_back(24);
    vec.push_back(90);
    vec.push_back(80);

    vec.pop_back();  //removes last element in vector 

    for(int values : vec){
        cout<< values<<endl;
    }
    cout<<endl;

     cout<<"Size is :"<< vec.size()<<endl;;  //prints the size 

    cout<<"Capacity is"<<vec.capacity()<<endl;  //how much element it can hold 
}