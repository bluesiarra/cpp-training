#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>


using namespace std;

int find_biggest_group(int n, int k, vector<long long>& d)
{

    int ans = -1;
    int ans_l = -1;
    int ans_r = -1;
    int l = 0;
    int r = 1;



    while (r < n)
    {
        int max_diamond = d[l] + k;

        if (d[r] > max_diamond)
        {

            if (r-l > ans)
            {
                ans = r-l;
                ans_l = l;
                ans_r = r;
            }


            l += 1;
            r = max(r, l + 1);
        }

        else {
            r += 1;
        }
    }

    if (r-l > ans)
    {
        ans = r-l;
        ans_l = l;
        ans_r = r;
    }

    //cout << ans << " " << ans_l << " " << ans_r;
    //cout << endl;
    d.erase(d.begin() + ans_l, d.begin() + ans_r);
    return ans;

}
// 1 5 5 9 10 12 14
// 0 1 2 3  4  5 6
int main() {
    freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
    
    int N, K;
    cin >> N >> K;
    vector<long long> diamonds;

    for (int i = 0; i < N; i++){
        int a;
        cin >> a;

        diamonds.push_back(a);
    }

    sort(diamonds.begin(), diamonds.end());
    int ans1 = find_biggest_group(N, K, diamonds);
    int ans2 = find_biggest_group(diamonds.size(), K, diamonds);

    cout << ans1 + ans2;

    
}