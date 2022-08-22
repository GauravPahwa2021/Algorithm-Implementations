#include<iostream>
using namespace std;
    /*   Naive Implementation   */
void Naive(char* T,char* P)
{
	int N=0,M=0;
	for(int i=0; T[i]!='\0'; i++)
	{
		N++;
	}
	for(int i=0; P[i]!='\0'; i++)
	{
		M++;
	}
	for(int i=0; i<=N-M; i++)
	{
		int j=0;
		for(j=0; j<M; j++)
		{
			if(T[i+j]==P[j])
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if(j==M)
		{
			cout<<"pattern match at index "<<i<<endl;
		}
	}
}
int main()
{
	char txt[]="AABAACAADAABAAABAA";
    char pat[]="AABA";
    Naive(txt,pat);
	return 0;
}