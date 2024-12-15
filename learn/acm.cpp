#include <iostream>
#include <vector>

using namespace std;

class solution {
   public:
    void fun() {
        int n, m;
        cin >> n >> m;
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (j > i) continue;
                dp[i] += dp[i - j];
            }
        }
        cout << dp.back() << endl;
    }
};

int main() { solution().fun(); }
