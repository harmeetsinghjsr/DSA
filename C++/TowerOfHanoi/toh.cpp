#include<iostream>
using namespace std;

void TowerOfHanoi(int start,int end,char source,char auxillary,char destination){   //start and end are starting and ending number of disks
    if(start>end){      //executes when all disks are moved
        return;
    }
    TowerOfHanoi(start,end-1,source,destination,auxillary);
    cout<<"Move disk "<<end<<" from "<<source<<" to "<<destination<<endl;
    TowerOfHanoi(start,end-1,auxillary,source,destination);
}


// void toh(int e,char a,char b,char c){
//     if(e>0){
//         toh(e-1,a,c,b);
//         cout<<"from "<<a<<" to "<<c<<endl;
//         toh(e-1,b,a,c);
//     }
// }

// void diskCount(){
           
// }

int main()
{
    // toh(3,'A','B','C');
    cout<<endl;
    TowerOfHanoi(1,3,'A','B','C');
    return 0;
}