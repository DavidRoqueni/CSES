#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<string,string> pss;
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
 
#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define For(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)
#define MAX(a,b) a=max(a,b)
#define MIN(a,b) a=min(a,b)
 
void solve(){
	int n;cin>>n;
	vt<string> a;
	a.pb("0");
	a.pb("1");
	int i,j;
	for(i = 2; i < (1<<n); i=(i<<1)){
		for(j = i-1;j>=0;j--) a.pb(a[j]);
		for(j=0;j<i;j++) a[j] = "0"+a[j];
		for(j=i;j<2*i;j++) a[j] = "1"+a[j];
	}
	For(sz(a)) {cout<<a[i]<<endl;}
 
}
 
int main(){
	int t = 1;
	//cin>>t;
	while(t--){solve();cout<<endl;}
}
