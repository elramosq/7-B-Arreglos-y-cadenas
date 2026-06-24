#include<iostream>
using namespace std;
int main()
{
 int N, A[1005], awx=0;
	
 cin>>N;
	
 for(int i=0;i<N;i++)
 {
  cin>>A[i];
 }
	
 for (int i=0;i< N/2;i++)
 {
  awx = A[i];
  A[i]=A[N-1-i];
  A[N-1-i]=awx;
 }
	
 for(int i=0;i<N;i++)
 {
  cout<<A[i]<<" ";
 }
	
 return 0;
}
