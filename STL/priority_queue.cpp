#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main(){

priority_queue<int>maxi; 

priority_queue<int, vector<int>, greater<int>> mini;


// max_heap
maxi.push(10);
maxi.push(1);
maxi.push(100);
maxi.push(2);
cout<<maxi.size()<<endl;

int n= maxi.size();
for(int i=0 ; i<n; i++ ){
cout<<maxi.top()<<endl;
maxi.pop();


}
cout<<endl;

// min heap
mini.push(10);
mini.push(1);
mini.push(100);
mini.push(2);
cout<<mini.size()<<endl;

int m= mini.size();
for(int i=0 ; i<m; i++ ){
cout<<mini.top()<<endl;
mini.pop();


}


}