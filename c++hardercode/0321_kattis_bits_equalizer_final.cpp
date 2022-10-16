#include <bits/stdc++.h>
using namespace std;

int main() {

    int tc_count; 
    scanf("%d", &tc_count);

    for(int casenum = 0; casenum < tc_count; casenum++) {

        // step 1) read data per test case
        string s, t;
        cin >> s >> t;

        int total_steps = 0;

        // step 2) Your algo goes here

        int i = 0, j = 0, k = 0, l = 0;
        char m, n;

        for(int x = 0; x < s.size(); x++) {
            m = s[x];
            n = t[x];

            if(m == '0' && n == '0') {
                continue;
            }

            else if(m == '1' && n == '1') {
                continue;
            }

            else if(m == '0' && n == '1') {
                i++;
            }

            else if(m == '1' && n == '0') {
                j++;
            }

            else if(m == '?' && n == '0') {
                k++;
            }

            else if(m == '?' && n == '1') {
                l++;
            }
        }
        
        total_steps += min(i, j);

        int minij = min(i, j);
        i -= minij;
        j -= minij;

        if(j != 0 && j > l) {
            total_steps = -1;
        }
        else {
            total_steps += i;
            total_steps += j;
            total_steps += k;
            total_steps += l;
        }

        // step 3) print result
        // Case 1: 3
        cout << "Case " << casenum + 1 << ": " << total_steps << endl;
    }
    return 0;
}