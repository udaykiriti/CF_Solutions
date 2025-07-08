#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
  ll t; cin>>t;
  while(t--){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll a, b; cin>>a>>b;
    if(a > b){
      if((a%2 == 0 && b%2 == 0) || (a%2 != 0 && b%2 != 0)){
        cout<<1<<endl;
        continue;
      }
      cout<<2<<endl;
      continue;
    }
    if(a < b){
      if((a%2 == 0 && b%2 == 0) || (a%2 != 0 && b%2 != 0)){
        cout<<2<<endl;
        continue;
      }
      cout<<1<<endl;
      continue;
    }
    cout<<0<<endl;
  }
  return 0;
}