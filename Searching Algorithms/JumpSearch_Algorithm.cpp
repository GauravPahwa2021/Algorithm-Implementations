#include<bits/stdc++.h>
using namespace std;
    /*   Jump Search Algorithm   */ 
int JumpSearch(int A[],int N,int data)
{
	int step=sqrt(N);
	int low=0;
	while(A[min(step,N)-1]<data)
	{
		low=step;
		step=step+sqrt(N);
		if(low>=N)
		{
			return -1;
		}
	}
	while(A[low]<data)
	{
		low++;
		if(low==min(step,N))
		{
			return -1;
		}
	}
	if(A[low]==data)
	{
		return low;
	}
	return -1;
}
int main()
{
	int A[]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610};
        int N = sizeof(A)/sizeof(A[0]);
        int x=55;
        cout<<"Array Elements Are"<<endl;
        for(int i=0; i<N; i++)
        {
    	   cout<<A[i]<<" ";
	}
        int index=JumpSearch(A,N,x);
        cout<<"\nNumber "<<x<<" is at index "<<index;
	return 0;
}
