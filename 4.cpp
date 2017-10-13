#include <iostream>
using namespace std;

/*PROGRAM 4*/

void max(int s, int arr[])
{
  int maxi=arr[0];
  for(int i=0; i<s;i++)
  {
    if(arr[i]>maxi)
      maxi=arr[i];
  }
  cout<<"\n \nThe maximum element of the array is: "<<maxi;
}

void min(int s, int arr[])
{
int mini=arr[0];
  for(int i=0; i<s;i++)
  {
    if(arr[i]<mini)
      mini=arr[i];
  }
  cout<<"\n \nThe minimum element of the array is: "<<mini;
}
int main()
{
  int size1=0,size2=0;
  cout<<"PROGRAM 4";
  cout<<"\n \nEnter the size of the first array: ";
  cin>>size1;
  int arr1[size1];
  cout<<"\n \nEnter the elements of first array: ";
  for(int a=0;a<size1;a++)
  {
    cout<<"\nElement "<<(a+1)<<": ";
    cin>>arr1[a];
  }
  cout<<"\n \nEnter the size of the second array: ";
  cin>>size2;
  int arr2[size2];
  cout<<"\n \nEnter the elements of second array: ";
  for(a=0;a<size2;a++)
  {
    cout<<"\nElement "<<(a+1)<<": ";
    cin>>arr2[a];
  }
  int m=size1+size2;
  int newarr[m];
  for(int x=0;x<size1;x++)
   newarr[x]=arr1[x];
  for(int x=size1;x<size1+size2;x++)
   newarr[x]=arr2[x-size1];
  max(m,newarr);
  min(m,newarr);
  return 0;
}
