#include<iostream>
#include<map>
using namespace std;
int main() {
    int n, c;
    cin >> n >> c;
    long long res = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }
    for (const auto& pair : mp) {   // 不使用结构化绑定
        int key = pair.first;
        int value = pair.second;
        auto it = mp.find(key + c);
        if (it != mp.end()) {
            res += (long long)value * it->second;
        }
    }
    cout << res;
    return 0;
}
