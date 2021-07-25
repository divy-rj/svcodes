#include <bits/stdc++.h>

using namespace std;

struct edge {
    int source, desti, weight;
    edge(){
        source=0;
        desti=0;
        weight=0;
    }

    edge(int source, int desti, int weight) {
        this->desti = desti;
        this->source = source;
        this->weight=weight;
    }

};
bool compareweight(edge e1,edge e2){
    return e1.weight<e2.weight;
}
bool check_connection_pathcompression(int parent[],int i,int  j){
    int l=i,m=j;
    if (parent[i]==i&&parent[j]==j)
        return false;
    while (parent[i]==i&&parent[j]==j){
        if (parent[i]==parent[j]){
            return false;
        }
        i=parent[i];
        j=parent[j];

    }
    parent[l]=parent[i];
    parent[m]=parent[j];
    if (parent[i]==parent[j])
        return false;
    return true;
}
bool check_connection(int parent[],int i,int  j){
    if (parent[i]==i&&parent[j]==j)
    {

        return false;
    }
    while (parent[i]==i&&parent[j]==j){
        if (parent[i]==parent[j]){
            return false;
        }
        i=parent[i];
        j=parent[j];

    }
    if (parent[i]==parent[j])
        return false;
    return true;
}
void kruskals(edge input[],edge mst[],int vertex){
    int ver=vertex-1;
    int parent[vertex];
    for (int i = 0; i < vertex; ++i) {
        parent[i]=i;
    }

    int i=0;
    int j=0;
    while(ver&&i<vertex){
        if (check_connection(parent,input[i].source,input[i].desti))
        {
            i++;
            continue;
        }
        mst[j]=input[i];
        parent[i]=parent[j];
        i++;j++;

    }
}
int main(){
    int vertex=6,edges=11;

    edge input[vertex];
    for (int i = 0; i < vertex; ++i) {
        cout<<"Enter source , destination and weight of edge simultaneously"<<endl;
        cin>>input[i].source>>input[i].desti>>input[i].weight;
    }
    sort(input,input+vertex, compareweight);

    edge mst[vertex-1];
    kruskals(input,mst,vertex);
    for(edge&l:mst){
        cout<<l.source<<" "<<l.desti<<" "<<l.weight<<endl;
    }




}
//0 1 1 0 2 5 2 3 10 0 3 4 1 3 3 1 2 6 3 4 7 2 4 8 4 5 2 2 5 9 3 5 6