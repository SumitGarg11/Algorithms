#include <bits/stdc++.h>
using namespace std;

struct problem {
    int score, decay, time;
};

// Custom comparator to sort problems
bool cmp(problem a, problem b) {
    return 1LL * a.decay * b.time > 1LL * b.decay * a.time;
}

void solve() {
    int n;
    cin >> n;
    problem p[n];

    // Input problems
    for (int i = 0; i < n; i++) {
        cin >> p[i].score >> p[i].decay >> p[i].time;
    }

    // Sort problems in optimal order
    sort(p, p + n, cmp);

    long long timetaken = 0;
    long long ans = 0;

    // Process problems
    for (int i = 0; i < n; i++) {
        timetaken += p[i].time;  // Add time taken for this problem
        ans += p[i].score - p[i].decay * timetaken; // Calculate remaining score
    }

    cout << ans << endl; // Print the maximum achievable score
}

int main() {
    int t = 1; // If multiple test cases, set cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
