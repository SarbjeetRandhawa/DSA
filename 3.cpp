#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> find_max_weight_node(int T, vector<vector<int>> &testcases)
{
    vector<int> result;

    for (int t = 0; t < T; ++t)
    {
        int N = testcases[2 * t][0];
        vector<int> edges = testcases[2 * t + 1];
        vector<int> weights(N, 0);

        // Calculate weights of each node
        for (int i = 0; i < N; ++i)
        {
            if (edges[i] != -1)
            {
                weights[edges[i]] += i;
            }
        }

        // Find the maximum weight and its corresponding node number
        int max_weight = *max_element(weights.begin(), weights.end());
        int max_node = distance(weights.begin(), find(weights.begin(), weights.end(), max_weight));

        result.push_back(max_node);
    }

    return result;
}

int main()
{
    int T;
    cin >> T;
    vector<vector<int>> testcases(2 * T);

    for (int i = 0; i < T; ++i)
    {
        int inp;
        cin >> inp;
        testcases[2 * i].push_back(inp);

        vector<int> lst1(inp);
        for (int j = 0; j < inp; ++j)
        {
            cin >> lst1[j];
        }
        testcases[2 * i + 1] = lst1;
    }

    vector<int> lst = find_max_weight_node(T, testcases);
    for (int i : lst)
    {
        cout << i << " ";
    }

    return 0;
}
