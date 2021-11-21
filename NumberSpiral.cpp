#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int32_t main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		if(n>m){
			if(!(n&1)){
				cout<<(n*n)-m+1<<endl;
				continue;
			}else{
				cout<<(n-1)*(n-1)+m<<endl;
				continue;
			}
		}else{
			if(m&1){
				cout<<(m*m)-n+1<<endl;
				continue;
			}else{
				cout<<(m-1)*(m-1)+n<<endl;
			}
		}
	}
}
