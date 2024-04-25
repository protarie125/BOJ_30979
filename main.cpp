#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;

ll t, n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> t >> n;
  auto cum = ll{0};
  while (0 < (n--)) {
    ll f;
    cin >> f;
    cum += f;
  }

  if (cum < t) {
    cout << "Padaeng_i Cry";
  } else {
    cout << "Padaeng_i Happy";
  }

  return 0;
}