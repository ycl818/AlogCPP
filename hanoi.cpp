#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char from, char to, char mid)
{
  if (n == 1)
  {
    cout << "Move ring " << n << " from " << from << " to " << to << endl;
    return;
  }
  hanoi(n - 1, from, mid, to);
  cout << "Move ring " << n << " from " << from << " to " << to << '\n';
  hanoi(n - 1, mid, to, from);
}

int n;
int main()
{
  while (cin >> n)
  {
    hanoi(n, 'A', 'C', 'B');
    cout << '\n';
  }
}