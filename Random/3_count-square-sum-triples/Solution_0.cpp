#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int a = 1; a <= n; ++a) {
        for (int b = 1; b <= n; ++b) {
            for(int c =1;c<=n;++c)
            {
              if(a*a + b*b == c*c)
              {
                count++;
              }
            }
           
        }
    }

    cout <<count << endl;

    return 0;
}
