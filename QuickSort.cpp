#include<iostream>

using namespace std;

/*int partition(int arr[],int s,int e)
{
	int pindex = s;
	int pivot = arr[e];
	
		for(int i = s;i<e;i++)
		{
			if(arr[i]<pivot)
			{
				int temp = arr[i];
				arr[i] = arr[pindex];
				arr[pindex] = temp;
				pindex++;	
			}
			int temp = arr[e];
			 	arr[e]= arr[pindex];
				arr[pindex] = temp; 
		}
			
	
	return pindex;
}

void  QuickSort(int myarr[],int s,int e)
{
	if(s<e)
	{
	int p = partition(myarr,s,e);
	QuickSort(myarr,s,p-1);
	QuickSort(myarr,p+1,e);
}
}
*/
int partition(int arr[],int s,int e)
{
	int pindex = s;
	int pivot = arr[e];
	
		for(int i = s;i<e;i++)
		{
			if(arr[i]<pivot)
			{
				int temp = arr[i];
				arr[i] = arr[pindex];
				arr[pindex] = temp;
				pindex++;	
			}
			
		}
			
	int temp = arr[e];
	arr[e]= arr[pindex];
	arr[pindex] = temp; 
	return pindex;
}
/*int Partition(int arr[], int s, int e)
{
 int pivot = arr[e];
 int pIndex = s;
 
 for(int i = s;i<e;i++)
 {
 if(arr[i]<pivot)
 {
 int temp = arr[i];
 arr[i] = arr[pIndex];
 arr[pIndex] = temp;
 pIndex++;
 }
 }
 
 int temp = arr[e];
 arr[e] = arr[pIndex];
 arr[pIndex] = temp;
 
 return pIndex;
}
 */
void QuickSort(int arr[], int s, int e)
{
 if(s<e)
 {
 int p = partition(arr,s, e);
 QuickSort(arr, s, (p-1));  // recursive QS call for left partition
 QuickSort(arr, (p+1), e);  // recursive QS call for right partition
 }
}

int main()
{
	int size;
	cout<<"enter the size of the arr"<<endl;
	cin>>size;
	int myarr[size];
	
	cout<<"enter"<<size<<"intrger in any order"<<endl;
	for(int i = 0;i<size;i++)
	{
		cin>>myarr[i];  
	}
	cout<<"before sorting"<<endl;
	for(int i = 0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
		 
	}
	cout<<endl; 
	QuickSort(myarr,0,(size-1));
	cout<<"after  sorting "<<endl;
	for(int i = 0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
		 
	}
}
/*
 # include <iostream>
using namespace std;
// quick sort sorting algorithm
int Partition(int arr[], int s, int e)
{
 int pivot = arr[e];
 int pIndex = s;
 
 for(int i = s;i<e;i++)
 {
 if(arr[i]<pivot)
 {
 int temp = arr[i];
 arr[i] = arr[pIndex];
 arr[pIndex] = temp;
 pIndex++;
 }
 }
 
 int temp = arr[e];
 arr[e] = arr[pIndex];
 arr[pIndex] = temp;
 
 return pIndex;
}
 
void QuickSort(int arr[], int s, int e)
{
 if(s<e)
 {
 int p = Partition(arr,s, e);
 QuickSort(arr, s, (p-1));  // recursive QS call for left partition
 QuickSort(arr, (p+1), e);  // recursive QS call for right partition
 }
}
 
int main()
{
 
 int size=0;
 cout<<"Enter Size of array: "<<endl;
 cin>>size;
 int myarray[size];
 
 cout<<"Enter "<<size<<" integers in any order: "<<endl;
 for(int i=0;i<size;i++)
 {
 cin>>myarray[i];
 }
 cout<<"Before Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }
 cout<<endl;
 
 QuickSort(myarray,0,(size-1));  // quick sort called
 
 cout<<"After Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }
 
 return 0;
}*/
