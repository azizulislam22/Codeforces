#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int tc;
  cin >> tc;

  while (tc--) {
    int n;
    cin >> n;

    int ans = 0;

    for (int i = 1; i <= n; i++) {
      int k;
      cin >> k;

      ans = max(ans, k - i);
    }
    cout << ans << "\n";
    
  }

  return 0;

}