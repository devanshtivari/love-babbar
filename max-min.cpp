#include<iostream>
#include<alogrithm>
using namespace std;

int main()
{
  int N;
  cin>>N;
  int A[N];
  for(int i=0 ; i<N ; i++){
    cin>>A[i];
  }
  sort(A , A+N);
  cout<<A[0]+A[N-1];
}
