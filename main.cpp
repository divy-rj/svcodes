#include <iostream>

using namespace std;
void pt(int **input){
    for (int j = 0; j < 4; ++j) {
        for (int l = 0; l < 4; ++l) {
            cout<<j<<" "<<l<<" "<<input[j][l];
        }
        cout<<endl;
    }

}
int main(){
    int a,b,v=4,x,y,z;
    int input[v][v];
    for (int j = 0; j < v; ++j) {
        for (int l = 0; l < v; ++l) {
            input[j][l]=0;
        }

    }
    cout<<"Enter number of edges "<<endl;

    cout<<"Enter edges : ";
    for (int i = 0; i < 4; ++i) {
        cin>>x>>y>>z;
        input[x][y]=z;
        input[y][x]=z;
    }
    pt(input);
}