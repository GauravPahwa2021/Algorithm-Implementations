#include<iostream>
using namespace std;
    /*   Interpolation Search Implementation   */
int InterpolationSearch(int A[],int N,int data)
{
	int low=0,high=N-1;
	while(low<=high && data>=A[low] && data<=A[high])
	{
        if(low==high)
        {
            if(A[low]==data)
            {
            	return low;
			}
			else
			{
				return -1;
			}
        }
		int mid=low+((high-low)/(A[high]-A[low]))*(data-A[low]);
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
    int A[]={5,10,15,20,25,30,35,40,45,50};
    int N=sizeof(A)/sizeof(A[0]);
    cout<<"Array Elements"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<A[i]<<" ";
    }
    int x=InterpolationSearch(A,N,30);
    cout<<"\nIndex value of 30 is "<<x;
    int y=InterpolationSearch(A,N,20);
    cout<<"\nIndex value of 20 is "<<y;
	return 0;
}