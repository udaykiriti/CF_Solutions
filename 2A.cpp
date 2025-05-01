#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;

  vector<pair<string, int>> rounds;
  map<string, int> scores;

  for (int i = 0; i < n; ++i)
  {
    string name;
    int score;
    cin >> name >> score;
    rounds.push_back({name, score});
    scores[name] += score;
  }

  int max_score = -1e9;
  for (auto &entry : scores)
  {
    if (entry.second > max_score)
    {
      max_score = entry.second;
    }
  }

  map<string, int> running_score;
  for (auto &round : rounds)
  {
    string name = round.first;
    int score = round.second;
    running_score[name] += score;
    if (scores[name] == max_score && running_score[name] >= max_score)
    {
      cout << name << endl;
      break;
    }
  }

  return 0;
}
