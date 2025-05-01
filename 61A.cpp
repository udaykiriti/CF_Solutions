#include <iostream>
using namespace std;
#define endl '\n';

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  const int MAX = 100;
  char *a = new char[MAX];
  char *b = new char[MAX];
  char *r = new char[MAX];

  cin >> a;
  cin >> b;
  int i = 0;
  while (a[i] != '\0')
  {
    r[i] = ((a[i] - '0') ^ (b[i] - '0')) + '0';
    cout << r[i];
    i++;
  }
  delete a;
  delete b;
  delete r;
}
