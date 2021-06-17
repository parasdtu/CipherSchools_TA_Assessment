#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long int
#define pb push_back
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define lb lower_bound
#define ub upper_bound
#define endl '\n'
#define um unordered_map
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define double long double
#define fast_fast_kardo_ji ios_base::sync_with_stdio(false); cin.tie(NULL);

void helper(int n){
	vector<int> ans;
	for(int i=1;i<=n;i++)ans.pb(i),ans.pb(0-i);
	for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
	cout<<endl;
	return;
}

signed main(){
	/////////////
	#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
	#endif
	/////////////
	fast_fast_kardo_ji
	/////////////
	int n;cin>>n;
	helper(n);
	return 0;
}