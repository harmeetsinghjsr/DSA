#include<bits/stdc++.h>
using namespace std;
#define v 4

void printClosure(int reach[][v]);
void transitiveClosure(int graph[][4]){
    int reach[v][v];
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            reach[i][j] = graph[i][j];
        }
    }

    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                reach[i][j]=reach[i][j] || (reach[i][k] && reach[k][j]);
            }
        }
    }
    printClosure(reach);
}
void printClosure(int reach[][v]){
    cout << "Transitive Closure Matrix:" << endl;
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            cout << reach[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int graph[v][v]={
        // {1,1,0,1},
        // {0,1,1,0},
        // {0,0,1,1},
        // {0,0,0,1}
        {0,0,0,0},
        {1,0,1,0},
        {1,0,0,1},
        {1,0,1,0},
    };
    transitiveClosure(graph);
    return 0;
}