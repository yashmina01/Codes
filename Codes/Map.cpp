#include <bits/stdc++.h>
using namespace std;

int main() {
   map<int,string> m;
   
   m[2] = "hello";
   m[5] = "world";
   m[10] = "!!!!";
   m[1] = "hye";

    auto f = m.begin()->second;
    cout<<f<<endl;
   for(auto x : m){
       cout<<x.first<<" "<<x.second<<endl;
   }
   return 0;

}