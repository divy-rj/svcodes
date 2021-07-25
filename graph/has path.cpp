#include <bits/stdc++.h>

using namespace std;
class graph;
queue<int>q;
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
        q.push(sv);
        while (!q.empty()){
            int i=q.front();
            q.pop();
            if(!data[i])
            {
               cout<<i<<" ";
                data[i]=1;
            }
            for (int j = 0; j < n; ++j) {

                if (edges[i][j])
                {     if (i==j)
                        continue;
                    if (data[j])
                        continue;
                    else{
                        cout<<j<<" ";
                        data[j]=1;
                        q.push(j);
                    }
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
    for (int k = 0; k < i; ++k) {
        for (int l = 0; l < i; ++l) {
            g1.edges[k][l]=0;
        }
    }
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
    cout<<"Enter vertices to find path"<<endl;
    int x1,x2;
    cin>>x1>>x2;
    g1.print(pass,x1);
    if(pass[x2])
        cout<<"path found";
    else
        cout<<"Not";

}