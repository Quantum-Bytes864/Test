#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

    unordered_map<int, int> f;
        for (int num : a) {
            f[num]++;
        }
        int s = 0;
        for (auto &e : f) {
            s += e.second / 2;
        }
        cout << s << endl;
    }

    return 0;
}
