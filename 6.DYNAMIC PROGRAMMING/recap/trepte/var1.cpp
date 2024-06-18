#include <iostream>
using namespace std;

int N;
int scari(int N){
    if(N == 1) return 1;
    if(N == 2) return 2;
    
    return scari(N-1) + scari(N-2);
}

int main()
{
    cout<<"nr de trepte: ";cin>>N;

    cout<<scari(N);


    return 0;
}