#include <iostream>
#include <string>
using namespace std;

int n, cnt, res, cur, cut;
string s;

void dfs(int aux)
{
    // cout << cur << " " << aux << endl;
    if (cur >= n || s[cur++] == '0') return;
    ++cut;
    if (aux + 1 > cnt) {
        cnt = aux + 1;
        res = cut;
    }
    dfs(aux + 1);
    dfs(aux + 1);
}

int main()
{
    for (int ti = 0; ti < 10; ++ti) {
        cin >> n >> s;
        cnt = res = cur = cut = 0;
        dfs(0);
        cout << res << endl;
   }
}
