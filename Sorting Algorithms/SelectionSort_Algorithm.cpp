#include<iostream>
using namespace std;
    /*   Selection Sort Implementation   */
void SelectionSort(int A[],int N)
{
	for(int i=0; i<N-1; i++)
	{
		int min=i;
		for(int j=i+1; j<N; j++)
		{
			if(A[j]<A[min])
			{
				min=j;
			}
		}
		int temp=A[i];
		A[i]=A[min];
		A[min]=temp;
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
        SelectionSort(A,N);
        cout<<"\nAfter sorting"<<endl;
        for(int i=0; i<N; i++)
        {
           cout<<A[i]<<" ";
        }
	return 0;
}
