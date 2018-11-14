#include<iostream>

using namespace std;

int main()
{
int array[20],n,i,ele,temp=0;

cout<<"Enter the size of array: ";

cin>>n;
for(i=0;i<n;i++)
{
cin>>array[i];
}
for(i=0;i<n;i++)
{
    cout<<array[i]<<" ";
}
cout<<endl;
cout<<"\nEnter the ele to search: ";

cin>>ele;
for(i=0;i<n;i++)
{
    if(array[i]==ele)
    {
        cout<<"\nPosition of "<<ele<<" is: "<<i+1;
        temp=1;
        break;
    }
}
if(temp==0)
{
    cout<<"\nElement not found\n";
}
return 0;
}
