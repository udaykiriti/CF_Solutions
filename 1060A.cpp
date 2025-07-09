#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define newline cout << ln

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int n, cnt = 0;
	string s; cin>>n>>s;
	for(int i = 0; i < n; ++i){
		if(s[i] == '8') ++cnt;
	}
	n /= 11;
	if(cnt >= n) cout << n << ln;
    else cout << cnt << ln;
	return 0;
}