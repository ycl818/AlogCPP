#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numTest;
int n, k;

int main() {
      cin >> numTest;
      while (numTest--) {
        cin >> n >> k;
        string s;
        vector<int> flip(n, 0);
        cin >> s;
        int tmpt = k;
        // if k has't becomes 0 keep reducing
        for (int i = 0; i < n && tmpt > 0; i++) {
            if (k % 2 == 0) {
                if (s[i] == '0') {
                    flip[i] += 1;
                    tmpt--;
                }
            } else if (k % 2 == 1) {
                if (s[i] == '1') {
                    flip[i] += 1;
                    tmpt--;
                }
            }
        }
        flip[n - 1] += tmpt; // modify last digit
        for (int i = 0; i < n; i++) {
            if (flip[i] % 2 == 1) {
                if (k % 2 == 0) {
                    s[i] = (s[i] == '0') ? '1' : '0';
                }
            }
            if (flip[i] % 2 == 0) {
                if (k % 2 == 1) {
                    s[i] = (s[i] == '0') ? '1' : '0';
                }
            }
        }
        cout << s << endl;
        for (auto i : flip) {
            cout << i << " ";
        }
        cout << endl;
    }
}