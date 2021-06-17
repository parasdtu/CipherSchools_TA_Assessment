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

// input order
// N, array of prices, robotAnswer,customerMoney
void helper(int n,vector<int> &v,int robotKaAnswer,int customerMoney){
	int ans=0;
	for(int i=0;i<n;i++){
		if(customerMoney%v[i]==0)ans+=1;
	}
	if(ans==robotKaAnswer)cout<<"Right"<<endl;
	else cout<<"Wrong"<<endl;
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
	int n;cin>>n;
	vector<int> v(n,0);
	for(int i=0;i<n;i++)cin>>v[i];
	int robotKaAnswer,customerMoney;
	cin>>robotKaAnswer>>customerMoney;
	helper(n,v,robotKaAnswer,customerMoney);
	return 0;
}