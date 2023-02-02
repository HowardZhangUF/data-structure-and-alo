#include<iostream>
using namespace std;

	void selectionSort(int arr[])
	{
		
		for(int i = 0;i<5;i++)
		{
			int min = i;
			for(int j=i+1;j<5;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j;
			}	
		}
	
	//swap
		if(min!=i)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;	
		}	
		}
		
		
	}

int main(){
	
	
	int myarr[5];
	cout<<"enter 5 number you wnat to put in the array: "<<endl;
	
	for(int i;i<5;i++)
	{
		cin>>myarr[i];
	}
	cout<<"unsorted array: "<<endl;
	for(int i = 0 ; i<5;i++)
	{
		cout<<myarr[i];
	}
	selectionSort(myarr);
	
	cout<<"sorted array";
	
	for(int i = 0 ; i<5;i++)
	{
		cout<<myarr[i];
	}
	
	
}
