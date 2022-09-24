#include<bits/stdc++.h>
#include<deque>

using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
      d.push_back(10);
        d.push_front(2.10);
         d.push_front(210);

    for(int i:d){
    cout<< i<<"\t";
}
cout<<endl;

   cout<< d.at(1)<<"\t";
   cout<<endl;

   d.erase(d.begin(),d.end()-2);

   cout<< d.size()<<endl;
    for(int i:d){
    cout<< i<<"\t";
}
cout<<endl;

}