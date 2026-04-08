#include<iostream>
#include<algorithm>
using namespace std;

void sort(int arr[], const int size)
{
	int tmp = 0;
	for(int i = 0; i < size - 1; i++)
	{
		for(int j =0 ; j < size - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{

	int arr[] = {12,4,89,43,21,78};
	const int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr, size);
	for(auto& u : arr)
	{
		cout << u << " ";
	}
	return 0;
	
}
