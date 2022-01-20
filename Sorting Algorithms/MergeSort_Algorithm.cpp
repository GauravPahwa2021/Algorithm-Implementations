#include<iostream>
using namespace std;
    /*   Merge Sort Implementation   */  
void Merge(int A[],int lb,int mid,int ub)
{
	int length1=mid-lb+1;
	int length2=ub-mid;
	
	int *arr1=new int[length1];
	int *arr2=new int[length2];
	
	for(int i=0; i<length1; i++)
	{
		arr1[i]=A[lb+i];
	}
	for(int i=0; i<length2; i++)
	{
		arr2[i]=A[mid+1+i];
	}
	
	int indexof_arr1=0; 
	int indexof_arr2=0;
	int indexof_mergeA=lb;
	
	while(indexof_arr1<length1 && indexof_arr2<length2)
	{
		if(arr1[indexof_arr1]<=arr2[indexof_arr2])
		{
			A[indexof_mergeA]=arr1[indexof_arr1];
			indexof_arr1++;
		}
		else
		{
			A[indexof_mergeA]=arr2[indexof_arr2];
			indexof_arr2++;
		}
		indexof_mergeA++;
	}
	
	while(indexof_arr1<length1)
	{
		A[indexof_mergeA]=arr1[indexof_arr1];
		indexof_arr1++;
		indexof_mergeA++;
	}
	while(indexof_arr2<length2)
	{
		A[indexof_mergeA]=arr2[indexof_arr2];
		indexof_arr2++;
		indexof_mergeA++;
	}
}
void MergeSort(int A[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid=lb+(ub-lb)/2;
		MergeSort(A,lb,mid);
		MergeSort(A,mid+1,ub);
		Merge(A,lb,mid,ub);
	}
}
int main()
{
    int A[]={66,44,11,33,55,77,22,88,99};
    int N=sizeof(A)/sizeof(A[0]);
    cout<<"Before Sorting"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<A[i]<<" ";
    }
    MergeSort(A,0,N-1);
    cout<<"\nAfter Sorting"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<A[i]<<" ";
    }
	return 0;
}