#include <iostream>
using namespace std;

/*PROGRAM TO FIND SUM OF ALL ELEMENTS OF AN ARRAY USING FUNCTIONS*/


int sumarr(int sz,int array[])
{
  int s=0;
  for(int i=0;i<sz;i++)
  {
    s=s+array[i];
  }
  return s;
}
int main()
{
  int size=0,sum=0;
  cout<<"PROGRAM TO FIND SUM OF ALL ELEMENTS OF AN ARRAY USING FUNCTIONS";
  cout<<"\n \nEnter the size of the array: ";
  cin>>size;
  int arr[size];
  cout<<"\n \nEnter the elements of array: ";
  for(int a=0;a<size;a++)
  {
    cout<<"\nElement "<<(a+1)<<": ";
    cin>>arr[a];
  }
  sum=sumarr(size,arr);
  cout<<"\n \nThe sum of elements of the array is: "<<sum;
  return 0;
}


  



