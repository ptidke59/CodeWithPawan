#include<bits/stdc++.h>
#include<array>

using namespace std;

int main(){

    int basic[3] = {1,2,3};

    array<int, 4> a= {1,2,3,4};

    for(int i=0; i< a.size(); i++)
    cout<< a[i]<<endl;

    cout<< a.front()<< endl;
      cout<< a.back()<< endl;
}