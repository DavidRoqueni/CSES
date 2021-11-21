#include "bits/stdc++.h"
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
int32_t main(){
	string s;
	cin>>s;
	int m, cur = 0;
	char c = s[0];
	for(int i =0;s[i];++i){
		if(s[i] == c){
			cur++;
			m = max(m,cur);
		}else{
			cur = 1;
			c = s[i];
		}
	}
	cout<<m;
}
