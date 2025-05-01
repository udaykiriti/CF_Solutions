#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  cin>>s;
  int low = 0, up = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 97){
      low++;
    }
    else{
      up++;
    }
  }
  if(low >= up){
    transform(s.begin() , s.end(), s.begin(), ::tolower);
  }
  else{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  cout<<s;

}
