#include<iostream>
#include<stdlib.h>
using namespace std;
#include<time.h>
#include<windows.h>

int main()
{
    string t[3]={"pen","paper","questionpaper"},a="pen",b="paper",c="questionpaper";
    int i,r;
    srand(time(NULL));
process:
     r=rand()%3;

    cout<<"   Teacher =  ";
    for(i=0;i<3;i++)
    {
        if(i!=r)
        {
            cout<<t[i]<<"  ";
        }
    }
    cout<<endl;
    if(a==t[r])
        cout<<"   a has completed"<<endl<<endl;
    else if(b==t[r])
        cout<<"   b has completed"<<endl<<endl;
    else if(c==t[r])
        cout<<"   c has completed"<<endl<<endl;
    Sleep(1000);
    goto process;
}
