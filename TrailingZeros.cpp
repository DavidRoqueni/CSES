#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
int32_t main(){
	ll n, ans=0; 
	cin>>n;
	for(ll i = 5; i<=n; i*=5){
		ans+=n/i;
	}
	cout<<ans;
}
