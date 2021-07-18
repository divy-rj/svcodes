#include <bits/stdc++.h>

using namespace std;
vector<int>merge_array(vector<vector<int>> data){
    vector<int>q;
    if(data.size()==0)
        return q;
    priority_queue<pair<int,int>,vector<int>>pq;
    for (int i = 0; i < data.size(); ++i) {
        pq.push(data[i][0]);
    }

}