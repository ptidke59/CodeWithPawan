#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{

    vector<int> v;

    v.push_back(2);
     v.push_back(3);
       v.push_back(3);

       for(int i: v)
       {
        cout<<i<<"\t";
       }
       cout<<endl;
           cout<< v.capacity()<< endl;
     cout<< v.size()<< endl;
        //   cout<< v.at(0)<<endl;

             v.pop_back();
             v.clear();
              v.erase(v.begin(), v.end());
 v.shrink_to_fit();

     for(int i: v)
       {
        cout<<i<<"\t";
       }
        cout<<endl;

    cout<< v.capacity()<< endl;
     cout<< v.size()<< endl;




}