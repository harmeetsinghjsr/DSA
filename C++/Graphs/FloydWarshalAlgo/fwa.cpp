#include<bits/stdc++.h>
using namespace std;
#define v 4
#define INF 999

void printMatrix(int matrix[][v]);
void floydWarshal(int graph[][v]){
    int matrix[v][v];
    
    //copying graph -> matrix
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            matrix[i][j]=graph[i][j];
        }
    }

    for(int k=0;k<v;k++){   // for distance matrix
        for(int i=0;i<v;i++){   // for rows
            for(int j=0;j<v;j++){   // for columns
                if(matrix[i][j]>matrix[i][k]+matrix[k][j]){
                    matrix[i][j]=matrix[i][k]+matrix[k][j];
                }
            }
        }
    }
    printMatrix(matrix);
}


void printMatrix(int matrix[][v]){
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            // Check if the distance is infinity (unreachable)
            if (matrix[i][j] == INF)
                cout << setw(5) << "INF";
            else
                cout << setw(5) << matrix[i][j]; // Print the shortest distance
        }
        cout << endl;
    }
}

int main()
{
    int graph[v][v]={
        {0,3,INF,5},
        {2,0,INF,4},
        {INF,1,0,INF},
        {INF,INF,2,0}
    };
    floydWarshal(graph);
    return 0;
}