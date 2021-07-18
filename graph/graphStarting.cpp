#include <bits/stdc++.h>

using namespace std;

class graph {
public:
    int n;
    int **edges;

    graph(int i) {
        n = i;
        edges = new int *[n];
        for (int j = 0; j < n; ++j) {
            edges[j] = new int[n];
        }

    }
    void print(int data[],int sv){
        cout<<sv<<" "<<endl;
        data[sv]=1;
        for (int i = 0; i < this->n; ++i) {
            if (i==sv)
                continue;
            if (this->edges[sv][i]){
                if(data[i])
                    continue;
                else{

                    print(data,i);
                }
            }
        }
    }



};

int main() {
    int i, j,x,y;
    cout << "Enter number of edges in graph" << endl;
    cin >> i;
    graph g1(i);
    cout<<"Enter number of edges :- " <<endl;
    cin>>j;
    for (int k = 0; k < j; ++k) {
        cout<<"enter "<<k+1<<" edge,enter value of x and y "<<endl;
        cin>>x>>y;
        g1.edges[x][y]=1;
        g1.edges[y][x]=1;
    }
    int pass[i];
    for (int k = 0; k < i; ++k) {
        pass[k]=0;
    }
    g1.print(pass,0);

}