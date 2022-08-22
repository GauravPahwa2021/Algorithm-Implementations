#include<iostream>
using namespace std;
    /*   Exponential Search Implementation   */
int ExponentialSearch(int A[],int N,int data)
{
	if(data==A[0])
	{
		return 0;
	}
	int i=1;
	while(i<N && A[i]<=data)
	{
		i=i*2;
	}
	int low=i/2;
	int high=min(i,N-1);
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(data==A[mid])
		{
			return mid;
		}
		else if(data>A[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
      int A[] = {10,20,30,40,50,60,70,80,90,100};
      int N = sizeof(A)/ sizeof(A[0]);
      cout<<"Array Elements Are"<<endl;
      for(int i=0; i<N; i++)
      {
   	    cout<<A[i]<<" ";
      }
      int x = 90;
      int result=ExponentialSearch(A,N,x);
      (result==-1)?cout<<"\nElement is not present in array":cout<<"\nElement is present at index "<<result;
      return 0;
}
