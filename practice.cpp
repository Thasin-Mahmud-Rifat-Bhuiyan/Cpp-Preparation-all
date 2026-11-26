#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin >> n;
  vector<long long> arr(n);
  if(n<2)
      return 0;

  for (long long i = 0; i < n; i++) {
    cin >> arr[i];
  }

  auto x = *min_element(arr.begin(), arr.end());

  if (x == 1)
    cout << "YES\n";
  else
    cout << "NO\n";
}