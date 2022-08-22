#include<iostream>
using namespace std;
    /*   Bitonic Search Implementation In Bitonic Array   */
int Ascending_BinarySearch(int A[],int data,int low,int high)
{
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
int Descending_BinarySearch(int A[],int data,int low,int high)
{
        while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(A[mid]==data)
		{
			return mid;
		}
		else if(A[mid]<data)
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
int BitonicPoint(int A[],int N)
{
	int low=0,high=N-1;
	while(low<=high)
	{
	    int mid=low+(high-low)/2;
	    if(A[mid-1]<A[mid] && A[mid]>A[mid+1])
	    {
		    return mid;
	    }
	    else if(A[mid-1]<A[mid] && A[mid]<A[mid+1])
	    {
		    low=mid+1;
	    }
	    else if(A[mid-1]>A[mid]  && A[mid]>A[mid+1])
	    {
		    high=mid-1;
	    } 
    }
    return -1;
}
int BitonicSearch(int A[],int N,int data)
{
	int Index=BitonicPoint(A,N);
	if(data==A[Index])
	{
		return Index;
	}
	else if(data>A[Index])
	{
		return -1;
	}
	else
	{
		int temp=Ascending_BinarySearch(A,data,0,Index-1);
		if(temp != -1)
		{
			return temp;
		}
		else
		{
			return Descending_BinarySearch(A,data,Index+1,N-1);
		}
	}
}
int main()
{
	int A[] = { -8, 1, 2, 3, 4, 5, -2, -3, -1 };
        int key = -3;
        int N = sizeof(A)/sizeof(A[0]);
        cout<<"Array Elements Are:"<<endl;
        for(int i=0; i<N; i++)
        {
    	    cout<<A[i]<<" ";
	}
        int index = BitonicSearch(A,N,key);
        if (index == -1)
            cout<<"\n"<<key<<" Not Found"<<endl;
        else
            cout<<"\n"<<key<<" Found At Index "<<index<<endl;
	return 0;
}
