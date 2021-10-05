#include<iostream>
using namespace std;
int main(){
    int head,req,sum=0,count=0;
    cout<<"FCFS Disk scheduling algorithm"<<endl;
    cout<<"19001011044"<<endl;
    cout<<"Promit Sindhu"<<endl;
    cout<<"enter number of request=";
    cin>>req;
    int a[req];
    cout<<"request squence"<<endl;
    for(int i=0;i<req;i++){
        cin>>a[i];
    }
    cout<<"enter head position=";
    cin>>head;
    for(int j=0;j<req;j++){
        if(count==1){
            if(a[j]>a[j-1]){
                sum=sum+(a[j]-a[j-1]);
            }
            else{
                sum=sum+(a[j-1]-a[j]);
            }
        }
        if(count==0){
            if(a[j]>head){
                sum=sum+(a[j]-head);
                count++;
            }
            else{
                sum=sum+(head-a[j]);
                count++;
            }
        }
    }
    cout<<"total number of seek operation=";
    cout<<sum<<endl;
    cout<<"average seek time=";
    cout<<sum/req;
    return 0;
}