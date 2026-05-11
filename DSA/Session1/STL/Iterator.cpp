#include<bits/stdc++.h>

using namespace std;
int main(){

    //iterator can be created using following syntax in cpp

    vector<int> vec ={3, 5 , 6,8};
    vector<int>::iterator it;

    for(it = vec.begin() ; it != vec.end(); it++){   // ye hogya forward iterator 
        cout<<*(it)<<" ";  //* derefrence operator hota h
    }
    cout<<endl;



    //backward k liye we use rbegin and rend

    vector<int>:: reverse_iterator itr;
    for(itr = vec.rbegin(); itr!= vec.rend(); itr++){
        cout<<*(itr)<<" " ;
       }


       //instead of iterator thing , we can use auto 

       for(auto it = vec.begin(); it != vec.end(); it++){
        cout<<*(it)<< " ";
       }
}