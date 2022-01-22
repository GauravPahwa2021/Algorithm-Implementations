#include<iostream>
using namespace std;
    /*   Ternary Search Implementation   */
int TernarySearch(int A[],int N,int data)
{
	int low=0,high=N-1;
	while(low<=high)
	{
		int mid1=low+(high-low)/3;
		int mid2=high-(high-low)/3;
		if(A[mid1]==data)
		{
			return mid1;
		}
		else if(A[mid2]==data)
		{
			return mid2;
		}
		else if(data<A[mid1])
		{
			high=mid1-1;
		}
		else if(data>A[mid2])
		{
			low=mid2+1;
		}
		else
		{
			low=mid1+1;
			high=mid2-1;
		}
	}
	return -1;
}
int main()
{
    int A[]={1,2,3,4,5,6,7,8,9, 10 };
    int N=sizeof(A)/sizeof(A[0]);
    cout<<"Array Elements Are"<<endl;
    for(int i=0; i<N; i++)
    {
    	cout<<A[i]<<" ";
	}
    int key1 = 5;
    int index1 = TernarySearch(A,N,key1);
    cout<<"\nIndex of "<<key1<<" is "<<index1<<endl;
    int key2 = 50;
    int index2 = TernarySearch(A,N,key2);
    cout<<"Index of "<<key2<<" is "<<index2<<endl;
	return 0;
}