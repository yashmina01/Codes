#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> s = {1,2,3,4,5,6,7,8};
   
   int x; cin>>x;

   cout<<binary_search(s.begin() , s.end() , x);
   cout<<endl;

   int index = lower_bound(s.begin() ,s.end() ,x) - s.begin();
   if(index != s.size() && s[index] == x) cout<<"Index of the given element is "<<index;
   else cout<<"-1";

}