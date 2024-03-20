
#include <iostream>
#include <string>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        // int n;
	    // cin>>n;
	    // string s;
	    // cin>>s;
	    // string ans;
        // ans.reserve(n);
        int n, o = -1;
        cin >> n;

        string S;
        cin >> S;

        string ans = "";

        for (int i = 0; i < n - 1; i++) {
            if (S[i] > S[i + 1]) {
                o = i;
                break;
            }
        }
        // for (int i = 0; i < n; i++) {
        //     string chk = s;
        //     chk.erase(i, 1);
        //     if (ans.empty() || ans > chk) {
        //         ans = chk;
        //     }
        // }
        if (o == -1)o = n - 1;
        for (int i = 0; i < n; i++) {
            if (i != o)ans += S[i];
        }
        cout << ans << endl;
    }

    return 0;
}