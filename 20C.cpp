#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define BYE return 0;
using namespace std;
using namespace __gnu_pbds;

using i64 = long long int;
using vi = vector<int>;
using vii = vector<i64>;
template <typename T>
using vv = vector<vector<T>>;
template <typename T>
using pq = priority_queue<T>;
template <typename T>
using pq_ = priority_queue<T, vector<T>, greater<T>>;
template <typename T1, typename T2>
using vp = vector<pair<T1, T2>>;

template <typename key, typename val = null_type, typename cmp = less<key>>
using pbds = tree<key, val, cmp, rb_tree_tag, tree_order_statistics_node_update>;

#define ln "\n"
#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define pb push_back
#define mp make_pair
#define sz(x) int((x).size())
#define All(x) (x).begin(), (x).end()
#define bug(x) cout << (#x) << ": " << (x) << ln

const i64 INF = 1e18;

void printPath(vector<i64> &parent, i64 node)
{
  if (node != 1)
    printPath(parent, parent[node]);
  cout << node << " ";
}

void solve()
{
  i64 n, m; cin >> n >> m;
  vector<vector<pair<i64, i64>>> adj(n + 1);
  for (i64 i = 0; i < m; i++)
  {
    i64 a, b, w; cin >> a >> b >> w;
    adj[a].pb({b, w});
    adj[b].pb({a, w});
  }

  vector<i64> dist(n + 1, INF);
  vector<i64> parent(n + 1, -1);
  pq_<pair<i64, i64>> pq;

  dist[1] = 0;
  pq.push({0, 1});

  while (!pq.empty())
  {
    auto [d, u] = pq.top();
    pq.pop();

    if (d > dist[u])
      continue;

    for (auto [v, w] : adj[u])
    {
      if (dist[u] + w < dist[v])
      {
        dist[v] = dist[u] + w;
        parent[v] = u;
        pq.push({dist[v], v});
      }
    }
  }

  if (dist[n] == INF)
  {
    cout << -1 << ln;
  }
  else
  {
    printPath(parent, n);
    cout << ln;
  }
}

int main()
{
  stop_sync; untie_ios;
  solve();
  return 0;
}