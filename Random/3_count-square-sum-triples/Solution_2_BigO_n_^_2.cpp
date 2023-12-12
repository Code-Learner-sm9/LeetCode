#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int countTriples(int n)
  {
    int count = 0;

    for (int a = 1; a <= n; a++)
    {
      for (int b = a; b <= n; b++)
      {
        int c_square = a * a + b * b;
        int c = sqrt(c_square);
        if (c <= n && c * c == c_square)
        {
          // counting two times, because if a^2 + b^2 = c^2, then b^2 + a^2 = c^2
          count += 2;
        }
      }
    }

    return count;
  }
};
int main()
{
  int n;
  cin >> n;
  Solution solu;
  int count = solu.countTriples(n);
  cout << count;
  return 0;
}