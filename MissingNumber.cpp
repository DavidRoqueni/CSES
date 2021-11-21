#include "bits/stdc++.h"
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
int32_t main(){
	ll n;
	cin>>n;
	ll presum=0;
	for(int i =1 ; i < n; i++){
		ll temp;
		cin>>temp;
		presum+=temp;
	}
	cout<<n*(n+1)/2-presum<<endl;
}
