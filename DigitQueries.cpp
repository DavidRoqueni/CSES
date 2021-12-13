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
	int q;
	cin>>q;
	vt<ll> p(19,1);
	int i = 1;
	For(i,1,19) p[i] = p[i-1]*10;
	while(q--){
		ll query;
		cin>> query;
		ll d = 0, db = 0;
		//find number of digits in the number for the query
		// each round will tell us the number of digits in the coresponding power of 10
		// 1 digit is numbers 1-9 2 10-189 3 190-2889
		int n = 0;
		For(i, 1,19){
			d +=(p[i] -p[i-1])*i;
			if(d >= query){
				n = i;
				break;
			}
			db += (p[i] - p[i-1])*i;
		}
		ll l = p[n-1], r = p[n]-1;
		ll pos = 0, num = 0;
		//b search for the best number
		//this is done by looking for best number where s = the starting index we of the number we have found
		//m is the number we are looking at as a possible solution
		//if m is better then current number we have stored then replace it
		
		while(l<=r){
			ll m = l + (r-l)/2;
			ll s = db +1+(m-p[n-1]) *n;
			if(s <= query){
				if(m > num){
					num = m;
					pos = s;
				}
				l = m+1;
			}else{
				r = m-1;
			}
 
		}
		//convert to string and take the query number we were looking for minus the starting position which will
		//give us the digit is the string we are looking for
		string ans = to_string(num);
		cout<<ans[query-pos]<<endl;
	}
}
 
int main(){
	int t = 1;
	//cin>>t;
	while(t--){solve();cout<<endl;}
}
 
