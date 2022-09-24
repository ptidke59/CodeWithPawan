#include<bits/stdc++.h>
#include<map>

using namespace std;

int main(){

    map<int,string> a;
  a[0] = "baby";
    a[1] = "babber";
    a[0] = "bab";
    a[3] = "babb";

    for(auto i : a){
        cout<<i.second<<" "<< i.first<< endl;
    }
cout<<endl;

cout<< "find element"<< a.count(0)<<endl;
cout<< "find element"<< a.find()<<endl;



}