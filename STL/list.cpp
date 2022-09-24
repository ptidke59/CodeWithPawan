#include<bits/stdc++.h>
#include<list>

using namespace std;

int main(){

list <int> l;
list <int> n(l);

l.push_back(10);
l.push_back(2);
l.push_front(1);

for(int i: l){
cout<<i<< endl;

}

l.pop_front();
for(int i: l){
cout<<i<< endl;

}

}