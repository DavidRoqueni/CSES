#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
int32_t main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
		ll s = i*i;
		ll ans = (s*(s-1))/2;
		if(i > 2) ans-=4*(i-2)*(i-1);
		cout<< ans<< endl;
	}
}
