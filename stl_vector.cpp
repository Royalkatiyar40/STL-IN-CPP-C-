#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;   //if array was full that automate double sie of array
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(1);   //value 0+1 = 1
    // cout<<"value of V"<<vector<v>;
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(10);   //value 1+1 = 2
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(20);   //value 2+2 = 4
    cout<<"Capacity -> "<<v.capacity()<<endl;
    
    cout<<"value at index 1 -> "<<v.at(1)<<endl;
    cout<<"value at index 2 -> "<<v.at(2)<<endl;
    
    //size
    int sizevec= v.size();
    cout<<"size -> "<<v.size()<<endl;
    
    cout<<"First value of array -> "<<v.front()<<endl;
    cout<<"Last value of array -> "<<v.back()<<endl;
    for(int i = 0; i<sizevec; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop back & before clear size"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<"after clear"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}