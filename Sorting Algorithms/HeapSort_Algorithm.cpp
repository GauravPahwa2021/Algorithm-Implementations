#include<iostream>
using namespace std;
    /*   Heap Sort Implementation   */
void Heapify(int A[],int N,int i)
{
	int left=2*i+1,right=2*i+2,max=i,temp;
	if(left<N && A[left]>A[i])
	{
		max=left;
	}
	if(right<N && A[right]>A[max])
	{
		max=right;
	}
	if(max!=i)
	{
		temp=A[i];
		A[i]=A[max];
		A[max]=temp;
		Heapify(A,N,max);
	}
}
void BuildHeap(int A[],int N)
{
	int ub=N-1;
	for(int i=(ub-1)/2; i>=0; i--)
	{
		Heapify(A,N,i);
	}
}
void HeapSort(int A[],int N)
{
	BuildHeap(A,N);
	int old_size=N,temp;
	for(int i=N-1; i>0; i--)
	{
		temp=A[0];
		A[0]=A[N-1];
		A[N-1]=temp;
		N--;
		Heapify(A,N,0);
	}
	N=old_size;
}
int main()
{
    int A[]={56,11,32,45,95,62,81,9,73};
    int N=sizeof(A)/sizeof(A[0]);
    cout<<"Before sorting"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<A[i]<<" ";
    }
    HeapSort(A,N);
    cout<<"\nAfter sorting"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
