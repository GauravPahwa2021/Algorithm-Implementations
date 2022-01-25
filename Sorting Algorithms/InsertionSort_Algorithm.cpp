#include<iostream>
using namespace std;
    /*   Insertion Sort Implementation   */
void InsertionSort(int A[],int N)
{
	for(int i=1; i<N; i++)
	{
		int data=A[i];
		int j=i-1;
		while(j>=0 && A[j]>data)
		{
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=data;
	}
}
int main()
{
	int A[] = { 12, 11, 13, 5, 6, 20, 7 };
    int N = sizeof(A)/sizeof(A[0]);
    cout<<"Before sorting"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<A[i]<<" ";
    }
    InsertionSort(A,N);
    cout<<"\nAfter sorting"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<A[i]<<" ";
    }
	return 0;
}