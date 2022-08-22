#include<iostream>
using namespace std;
    /*   Shell Sort Implementation   */
void ShellSort(int A[],int N)
{
	for(int gap=N/2; gap>=1; gap/2)
	{
	    for(int j=gap; j<N; j++)
	    {
	    	for(int i=j-gap; i>=0; i=i-gap)
	    	{
	    		if(A[i+gap]>A[i])
	    		{
	    		        break;
			}
			else
			{
				int temp=A[i+gap];
				A[i+gap]=A[i];
				A[i]=temp;
			}
		}
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
       ShellSort(A,N);
       cout<<"\nAfter sorting"<<endl;
       for(int i=0; i<N; i++)
       {
            cout<<A[i]<<" ";
       }
        return 0;
}
