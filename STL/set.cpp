#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(10);
       s.insert(10);
          s.insert(10);
             s.insert(10);
                s.insert(1);
                 s.insert(17);
                   s.insert(17);
                    s.erase(s.begin());

    for(int i : s){
        cout<<i<<endl;
    }
   

}
