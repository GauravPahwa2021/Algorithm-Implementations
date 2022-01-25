#include<iostream>
using namespace std;
    /*   Bubble Sort Implementation   */
void BubbleSort(int A[],int N)
{
	bool swapped;
	for(int round=0; round<N-1; round++)
	{
		swapped=false;
		for(int step=0; step<N-1-round; step++)
		{
			if(A[step]>A[step+1])
			{
				int temp=A[step];
				A[step]=A[step+1];
				A[step+1]=temp;
				swapped=true;
			}
		}
		if(swapped==false)
    	{
		    break;
	    }
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
    BubbleSort(A,N);
    cout<<"\nAfter sorting"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<A[i]<<" ";
    }
	return 0;	
} 