#include<iostream>
using namespace std;
int main(){
    int head,req,sum=0,count=0;
    cout<<"SCAN Disk scheduling algorithm"<<endl;
    cout<<"19001011044"<<endl;
    cout<<"Promit Sindhu"<<endl;
    cout<<"enter disk size"<<endl;
    int size;
    cin>>size;
    cout<<"enter number of request=";
    cin>>req;
    int a[req];
    cout<<"request squence"<<endl;
    for(int i=0;i<req;i++){
        cin>>a[i];
    }
    cout<<"enter head position=";
    cin>>head;
    cout<<"tell the direction in which pointer will move"<<endl;
       
    cout<<"total number of seek operation=";
    cout<<sum<<endl;
    return 0;
}