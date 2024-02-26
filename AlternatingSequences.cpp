#include <bits/stdc++.h>

using i64 = long long;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

void solve() {
    std::cout << "Please enter a positive and negative integer, in any order, separated by a space: " << std::flush; //have to flush output buffer as we tied cin to nullptr

    int n, m;
    std::cin >> n >> m;

    auto curr = m;
    auto prev = n;
    auto cnt = 2;

    std::cout << "\nAlternating sequence: " << prev << ", " << curr << ", ";
    while (curr + prev > 0 && curr < 0 || curr + prev < 0 && curr > 0) {
        std::cout << curr + prev << ", ";

        auto temp = curr;
        curr += prev;
        prev = temp;
        ++cnt;
    }

    std::cout << "...\nLength of alternating portion: " << cnt;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}
