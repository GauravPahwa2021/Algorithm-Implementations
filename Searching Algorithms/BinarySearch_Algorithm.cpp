#include<iostream>
using namespace std;
    /*   Binary Search Implementation   */
int BinarySearch(int A[],int N,int data)
{
	int low=0,high=N-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(A[mid]==data)
		{
			return mid;
		}
		else if(A[mid]>data)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}
int main()
{
     int A[]={11,22,33,44,55,66,77,88,99};
     int N=sizeof(A)/sizeof(A[0]);
     cout<<"Array Elements"<<endl;
     for(int i=0; i<N; i++)
     {
        cout<<A[i]<<" ";
     }
     int x=BinarySearch(A,N,33);
     cout<<"\nIndex value of 33 is "<<x;
     int y=BinarySearch(A,N,77);
     cout<<"\nindex value of 77 is "<<y;
     return 0;
}
