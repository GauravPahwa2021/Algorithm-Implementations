#include<iostream>
using namespace std;
    /*   Linear Search Algorithm   */
int unordered_LinearSearch(int A[],int N,int data)
{
	for(int i=0; i<N; i++)
	{
		if(A[i]==data)
		{
			return i;
		}
	}
	return -1;
}
int ordered_LinearSearch(int A[],int N,int data)
{
	for(int i=0; i<N; i++)
	{
		if(A[i]==data)
		{
			return i;
		}
		else if(A[i]>data)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	return -1;
}
int main()
{
	int A[]={26,71,56,91,37,49,81,61,15};
        int B[]={5,10,15,20,25,30,35,40,45,50};
        int N1=sizeof(A)/sizeof(A[0]);
        int N2=sizeof(B)/sizeof(B[0]);
        cout<<"Array A Elements"<<endl;
        for(int i=0; i<N1; i++)
        {
            cout<<A[i]<<" ";
	}
        cout<<"\nArray B Elements"<<endl;
        for(int i=0; i<N2; i++)
        {
            cout<<B[i]<<" ";
        }
        int x=unordered_LinearSearch(A,N1,91);
        if(x!=-1)
        {
    	        cout<<"\n91 found in the Array A  at index "<<x;
	}
	else
	{
		cout<<"\n91 did not found in the Array A";
	}
        int y=ordered_LinearSearch(B,N2,28);
        if(y!=-1)
        {
    	        cout<<"\n28 found in the Array B at index "<<y;
	}
	else
	{
		cout<<"\n28 did not found in the Array B";
	}
	return 0;
}
