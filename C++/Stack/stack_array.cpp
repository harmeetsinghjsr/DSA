#include<iostream>
using namespace std;
int MAXSIZE=100;
int main()
{
    int stack[MAXSIZE];
    int i, item,data,TOP=-1;
    while(true)
    {
        cout<<"Press 1 for PUSH\n"<<"Press 2 for POP\n"<<"Press 3 for PEEK\n"<<"Press 4 for Print Data of Stack\n"<<"Press 5 to Exit\t\n";
        cin>>item;
        switch(item){
            case 1:
            // push
                if(TOP==MAXSIZE-1)
                {
                    cout<<"Overflow";
                    exit(0);
                }
                
                cout<<"Enter Value ";
                cin>>data;
                TOP=TOP+1;
                stack[TOP]=data;
                break;

            case 2:
            // pop
                if(TOP==-1)
                {
                    cout<<"Underflow";
                    exit(0);
                }
                TOP=TOP-1;
                break;

            case 3:
            // peek
                if(TOP==-1)
                {
                    cout<<"Underflow";
                    exit(0);
                }
                cout<<stack[TOP]<<"\n";
                break;
            
            case 4:
            //  display
            cout<<"\n The full stack is : ";
                for(i=TOP;i>=0;i--)
                {
                    cout<<stack[i]<<"\t";
                }
                cout<<"\n";
                
                break;
            
            case 5:
                exit(0);
                break;
            }
    }
    return 0;
}