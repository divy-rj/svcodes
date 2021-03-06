#include <bits/stdc++.h>

using namespace std;
vector<int> s;

class graph {
public:
    int n;
    int **edges;
    int *data;

    graph(int i) {
        n = i;
        edges = new int *[n];
        for (int j = 0; j < n; ++j) {
            edges[j] = new int[n];
        }
        data = new int[n];

    }

    void print(int data[], int sv) {
        bfs(data, sv)
        int i = 0;
        while (i <= n) {
            if (data[i] == 0) {
                bfs(data, sv);
                i = 0;
            }
            i++;
        }


    }

    void dfs(int data[], int sv) {
        cout << sv << "  2  " << endl;
        data[sv] = 1;
        for (int i = 0; i < n; ++i) {

            if (edges[sv][i]) {
                if (i == sv)
                    continue;
                if (data[i])
                    continue;
                else {
                    s.push_back(i);
                    print(data, i);
                }
            }
        }
    }


};

int main() {
    int i, j, x, y;
    cout << "Enter number of edges in graph" << endl;
    cin >> i;
    graph g1(i);
    cout << "Enter number of edges :- " << endl;
    cin >> j;
    for (int k = 0; k < i; ++k) {
        for (int l = 0; l < i; ++l) {
            g1.edges[k][l] = 0;
        }
    }
    for (int k = 0; k < j; ++k) {
        cout << "enter " << k + 1 << " edge,enter value of x and y " << endl;
        cin >> x >> y;
        g1.edges[x][y] = 1;
        g1.edges[y][x] = 1;
    }

    for (int k = 0; k < i; ++k) {
        g1.data[k] = 0;
    }

    g1.print(g1.data, 0);

}
//