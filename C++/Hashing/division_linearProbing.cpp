#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,size=10;
    cin>>k;
    int hashtable[size];
    for(int i=0;i<size;i++){
        hashtable[i] = -1;
    }
    for(int i=0;i<k;i++){
        int key;
        cin>>key;
        int index=key%size;
        if(hashtable[index]==-1){
            hashtable[index]=key;
        }
        else{
            while(hashtable[index]!=-1){
                index++;
                if(index)
            }
        }
    }
    return 0;
}