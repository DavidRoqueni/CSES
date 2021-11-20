#include "bits/stdc++.h"
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
int32_t main(){
	ll n;
	cin>>n ;
	while(n != 1){
		cout<<n<<" ";
		if(n&1){n*=3;n++;}
		else n/=2;
	}
	cout<<n<<endl;
}
