#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef long double ld;

int32_t main(){
	int n;
	cin>>n;
	ll last=1, ans = 0;
	for(int i = 0 ; i < n; i++){
		int temp;
		cin>> temp;
		if(temp < last) ans += last-temp;
		else last = temp;
	}
	cout<<ans;
}
