"": {
	"prefix": "cc",
	"body": [
	  "#include <bits/stdc++.h>",
	  "using namespace std;",
	  "#include <ext/pb_ds/assoc_container.hpp>",
	  "#include <ext/pb_ds/tree_policy.hpp>",
	  "#define pb push_back",
	  "#define ll long long int",
	  "#define mod 1000000007",
	  "#define pll pair<ll,ll>",
	  "#define pii pair<int ,int>",
	  "#define vb vector<bool>",
	  "#define vs vector<string>",
	  "#define vll vector<ll>",
	  "#define vpll vector<pll>",
	  "#define vpii vector<pii>",
	  "#define vvll vector<vector<ll>>",
	  "#define inp(a, n) for(int i=0; i<n; i++) cin>>a[i];",
	  "#define out(a, n) for(int i=0; i<n; i++) cout<<a[i]\" \";",
	  "#define rep(i,a,b) for(int i = a; i < b; i++)",
	  "#define all(x) x.begin(),x.end()",
	  "#define yes cout << \"YES\" << endl;",
	  "#define no cout << \"NO\" << endl;",
	  " ",
	  "ll _lcm(ll a, ll b){return (a * b)/__gcd(a, b);}",
	  " ",
	  "bool _isPrime(ll n){",
	  "    if (n == 1 ) return 0;",
	  "    if (n == 2 || n == 3) return 1;",
	  "    if ((n & 1) == 0) return 0;",
	  "    if (n % 3 == 0)return 0;",
	  "    for (ll i = 5; i * i <= n; i += 6){",
	  "        if (n % i == 0 || n % (i + 2) == 0) return 0;",
	  "    }",
	  "    return 1;",
	  "}",
	  " ",
	  "void google(int i) {cout<<\"Case #\"<<i<<\": \";}"
	],
	"description": ""
  }