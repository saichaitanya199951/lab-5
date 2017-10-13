#include <iostream>
using namespace std;

/*PROGRAM TO PRINT MAXIMUM, MINIMUM, MEAN, MEDIAN, MODE OF THE ELEMENTS OF THE ARRAY*/

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

void mean(int s, int arr[])
{
 int sum=0;
 for(int i=0;i<s;i++)
  {
    sum=sum+arr[i];
  }
  float mean=0;
  mean=((float)sum/5);
  cout<<"\n \nThe mean of array elements is: "<<mean;
}

void sort(int n,int arr[])
{
    for(int i=0; i<(n-1); i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted list in ascending order :\n";
	for(int d=0; d<n; d++)
	{
		cout<<arr[d]<<" ";
	}
     cout<<endl;
}

void median(int s, int arr[])
{
  int median;
  if(s%2==0)
  {
    median=(arr[s/2]+arr[(s+1)/2])/2;
  }
  else
  {
    int index=(s+1)/2;
    median=arr[index];
  }
  cout<<"\n \nThe median of the array elements is: "<<median;
}

void mode(int s, int arr[])
{
 int number = arr[0];
 int mode = number;
 int count = 1;
 int countMode = 1;
 for (int i=1; i<s; i++)
 {
      if (arr[i] == number) 
      { // count occurrences of the current number
         ++count;
      }
      else
      { // now this is a different number
            if (count > countMode) 
            {
                  countMode = count; // mode is the biggest ocurrences
                  mode = number;
            }
           count = 1; // reset count for the new number
           number = arr[i];
       }  
  }
 cout << "\n \nThe mode of the array elements is: " << mode << endl;
}
int main()
{
  int size=0;
  cout<<"PROGRAM TO PRINT MAXIMUM, MINIMUM, MEAN, MEDIAN, MODE OF THE ELEMENTS OF THE ARRAY";
  cout<<"\n \nEnter the size of the array: ";
  cin>>size;
  int arr[size];
  cout<<"\n \nEnter the elements of array: ";
  for(int a=0;a<size;a++)
  {
    cout<<"\nElement "<<(a+1)<<": ";
    cin>>arr[a];
  }
  max(size, arr);
  min(size, arr);
  mean(size, arr);
  mode(size, arr);
  //For finding mean we need a sorted array
  sort(size, arr);
  mode(size, arr);
  return 0;
}
