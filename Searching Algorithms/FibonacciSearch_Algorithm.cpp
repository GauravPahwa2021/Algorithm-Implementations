#include<iostream>
using namespace std;
    /*   Fibonacci Search Implementation   */
int FibonacciSearch(int A[],int N,int data)
{
	int fib_2th=0;                     // (n-2)th number
	int fib_1th=1;                     // (n-1)th number
	int fib_nth=fib_1th+fib_2th;     // (n)th number
	while(fib_nth<N)
	{
		fib_2th=fib_1th;
		fib_1th=fib_nth;
		fib_nth=fib_1th+fib_2th;
	}
	int offset=-1;
	while(fib_nth>1)
	{
	        int i=min(offset+fib_2th,N-1);
	        if(A[i]<data)
	        {
	    	       fib_nth=fib_1th;
	    	       fib_1th=fib_2th;
	    	       fib_2th=fib_nth - fib_1th;
	    	       offset=i;
		}
		else if(A[i]>data)
		{
			fib_nth=fib_2th;
			fib_1th=fib_1th - fib_2th;
			fib_2th=fib_nth - fib_1th;
		}
		else
		{
			return i;
		}
	}
	if(fib_1th  &&  A[offset+1]==data)
	{
		return offset+1;
	}
	return -1;
}
int main()
{
	int A[]={10,22,35,40,45,50,80,82,85,90,100,235};
        int N = sizeof(A) / sizeof(A[0]);
        int x = 85;
        int index = FibonacciSearch(A,N,x);
        cout<<"array Elements Are"<<endl;
        for(int i=0; i<N; i++)
        {
    	    cout<<A[i]<<" ";
	}
       if(index>=0)
            cout<<"\nFound at index "<<index;
       else
            cout<<"\n"<<x<<" is not present in the array";
       return 0;
}
