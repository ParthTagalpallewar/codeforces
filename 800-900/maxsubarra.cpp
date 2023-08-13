#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int> solve(int n, vector<int> &arr)
{

    int l = 0;
    int r = 0;
    int fl = -1;
    int fr = -1;
    ll sum = 0;
    ll fsum = -1;

    while (r < n)
    {

        if (arr[r] < 0)
        {
            l = r + 1;
            sum = 0;
        }
        else
        {

            sum += (ll)arr[r];

            if (sum > fsum)
            {
                fsum = sum;
                fl = l;
                fr = r;
            }
            else if (sum == fsum && (r - l) > (fr - fl))
            {
                fl = l;
                fr = r;
            }
        }

        r += 1;
    }

    vector<int> ans;

    if (fl == -1 || fr == -1)
    {
        ans.push_back(-1);
        return ans;
    }

    for (int i = fl; i <= fr; i++)
    {
        ans.push_back(arr[i]);
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = solve(n, arr);

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}