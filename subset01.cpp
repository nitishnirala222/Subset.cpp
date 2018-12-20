#include<iostream>
#include<math.h>
using namespace std;
int subset(int set[],int x)
{
unsigned int n=pow(2,x);
int count=0,sum=0;
for(int i=1;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(i&(1<<j)){
cout<<set[j]<<" ";
sum+=set[j];
}}
cout<<endl;
if(sum%2==0)
    count++;
}
cout<<count;
}
int main()
{
    int y;
    cout<<"Enter size of array:";
    cin>>y;
    int set[y];
    for(int i=0;i<y;i++)
        cin>>set[i];
//int   set[]={1,2,3};
subset(set,y);
}
