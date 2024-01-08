#include <iostream>
#include <vector>
using namespace std;

int ncr(int n, int r)
{
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

void pascal(int row)
{
    int ele;
    for (int i = 1; i <= row; i++)
    {
        ele = ncr(row - 1, i - 1);
        cout << ele << " ";
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        pascal(i);
        cout << endl;
    }
    return 0;
}
