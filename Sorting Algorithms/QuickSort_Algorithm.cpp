#include<iostream>
using namespace std;
    /*   Quick Sort Implementation   */
int Partition(int A[],int lb,int ub)
{
	int pivot=A[lb],start=lb,end=ub,temp;
	while(start<end)
	{
		while(A[start]<=pivot)
		{
			start++;
		}
		while(A[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=A[start];
			A[start]=A[end];
			A[end]=temp;
		}
	}
	temp=A[lb];
	A[lb]=A[end];
	A[end]=temp;
	return end;
}
void QuickSort(int A[],int lb,int ub)
{
	if(lb<ub)
	{
		int LOC=Partition(A,lb,ub);
		QuickSort(A,lb,LOC-1);
		QuickSort(A,LOC+1,ub);
	}
}
int main()
{
       int A[]={44,33,11,55,77,22,66,99,88};
       int N=sizeof(A)/sizeof(A[0]);
       cout<<"Before Sorting"<<endl;
       for(int i=0; i<N; i++)
       {
          cout<<A[i]<<" ";
       }
       QuickSort(A,0,N-1);
       cout<<"\nAfter Sorting"<<endl;
       for(int i=0; i<N; i++)
       {
           cout<<A[i]<<" ";
       }
       return 0;
}
