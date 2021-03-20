#include <iostream>
using namespace std;

int printRepeating(int arr[], int size) 
{ 
    int *count = new int[sizeof(int)*(size - 2)]; 
    int i; 

    for(i = 0; i < size; i++) 
    { 
        if(count[arr[i]] == 1) 
            return -1;
        else
            count[arr[i]]++; 
    } 

    return 0;
} 
 
void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	int i = 0;
	int j = 0;
	int k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[],int l,int r){
	if(l>=r){
		return;
	}
	int m =l+ (r-l)/2;
	mergeSort(arr,l,m);
	mergeSort(arr,m+1,r);
	merge(arr,l,m,r);
}

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
}

int main()
{
	int arr[10];
	int n,find,check;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cin>>find;

	check=printRepeating(arr,n);

	if(check==-1)
	{
		cout<<"INVALID INPUT";
		exit(0);
	}

	mergeSort(arr, 0, n - 1);

	cout<<arr[n-find];

}
