#include<iostream>
using namespace std;
int main()
{
 int N, C;
 int vaso[100000]={0};
	
 cin>>N>>C;
	
 for(int i=1; i<=C; i++)
 {
  int conteo=0;
  
  cin>>conteo;
  
  vaso[conteo]++;
 }
	
 for(int j=1;j<=N;j++)
 {
  cout<<vaso[j]<<endl;
 }
	
 return 0;
	
}
  
