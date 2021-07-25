#include <bits/stdc++.h>

using namespace std;
struct edge {
    int parent = 0, vertex, weight = INT32_MAX;
};

void prims(int *input[], edge mst[], set<int> visited, set<int> notvisited, int n) {
    int i=0,k,lw;


    while (!notvisited.empty()){
        cout<<"not visited ";
        for(auto  itr:notvisited){
            cout<<itr<< " "<<endl;
        }
        cout<<"visited";
        for(auto  itr:visited){
            cout<<itr<< " "<<endl;
        }
        lw=INT32_MAX;
        for (int j = 0; j < n; ++j) {
            if (i==j)
                continue;
            if (input[i][j]){

               if(mst[j].weight>input[i][j]){
                   auto itr=notvisited.find(mst[j].vertex);
                   if (itr==notvisited.end())
                       continue;
                   mst[j].parent=i;
                   mst[j].weight=input[i][j];

               }
            }

        }
        for (auto iy: notvisited) {
            int low=INT32_MAX;
            if (mst[iy].weight<low)
            {
                low=mst[iy].weight;
                i=iy;
            }
        }

        auto it=notvisited.find(i);

            visited.insert(*it);
            notvisited.erase(it);



    }


}
int main(){
    int v,e,x,y,z;
    cout<<"Enter number of vertices ! "<<endl;
    cin>>v;
    int **input=new int* [v];
    for (int i = 0; i < v; ++i) {
        input[i]=new int[v];
        for (int j = 0; j < v; ++j) {
            input[i][j]=0;
        }
    }

    cout<<"Enter number of edges "<<endl;
    cin>>e;
    cout<<"Enter edges : ";
    for (int i = 0; i < e; ++i) {
        cin>>x>>y>>z;
        input[x][y]=z;
        input[y][x]=z;
    }

    edge mst[v];
    set<int> visited,notvisited;
    mst[0].weight=-1;mst[0].parent=-1;
    mst[0].vertex=0;
    for (int i = 1; i < v; ++i) {
        mst[i].vertex=i;
        mst[i].weight=INT32_MAX;
        mst[i].parent=0;
        notvisited.insert(i);
    }
    notvisited.erase(0);
    visited.insert(0);
    prims(input, mst, visited, notvisited, v);

    for (int i = 0; i < v; ++i) {
        cout<<mst[i].vertex<< " "<<mst[i].parent<<" "<<mst[i].weight<<endl;
    }



}