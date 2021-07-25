#include <bits/stdc++.h>

using namespace std;
vector<int> s;
bool  found = false;
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
    void dfs(int data[], int sv,int end) {
        if (found)
            return;
        if (sv==end && !found){
            data[sv]=1;
            s.push_back(sv);
          //  cout<<sv<<" "<<found;
            found= true;
            return;
        }
        data[sv] = 1;
     //   cout<<sv<<" "<<found;
        s.push_back(sv);
        for (int i = 0; i < n; ++i) {

            if (edges[sv][i]) {
                if (i == sv)
                    continue;
                if (data[i])
                    continue;
                else {
                    dfs(data, i,end);

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
    cout<<"Enter vertices to find path"<<endl;
    int x1,x2;
    cin>>x1>>x2;
    g1.dfs(g1.data, x1,x2);
    if (found)
        for(int&u:s){
            cout<<u<<" ";
        }
    else
        cout<<"Not found";

}
//