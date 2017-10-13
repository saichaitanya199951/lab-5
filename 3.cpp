#include <iostream>
using namespace std;

/*PROGRAM TO PRINT Kth LARGEST AND Kth SMALLEST ELEMENT OF ARRAY*/
void klarge(int s, int arr[],int k)
{
  for(int i=0;i<s;i++)
    for(int j=i+1;j<s;j++)
      if(arr[i]<arr[j])
      {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    cout<<"\n \nThe Kth largest element is: "<<arr[k-1];
}

void ksmall(int s, int arr[],int k)
{
    for(int i=0;i<s;i++)
    for(int j=i+1;j<s;j++)
      if(arr[i]>arr[j])
      {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    cout<<"\n \nThe Kth smallest element is: "<<arr[k-1];
}
  
  
}

int main()
{
  int size=0,K=0;
  cout<<"PROGRAM TO PRINT Kth LARGEST AND Kth SMALLEST ELEMENT OF ARRAY";
  cout<<"\n \nEnter the size of the array: ";
  cin>>size;
  int arr[size];
  cout<<"\n \nEnter the elements of array: ";
  for(int a=0;a<size;a++)
  {
    cout<<"\nElement "<<(a+1)<<": ";
    cin>>arr[a];
  }
  cout<<"\n \nEnter the value of k: ";
  cin>>K;
  klarge(size, arr,K);
  ksmall(size, arr,K);
  return 0;
}
