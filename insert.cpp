#include<iostream>
using namespace std;

main()
{
    int choice, N;
    cout<<"Enter no. of elements : ";
    cin>>N;
    int A[N];
    cout<<"Enter elements : \n";
    for(int i=0;i<N;i++)
    {
        cout<<":> ";
        cin>>A[i];
    }

    int K, ITEM;
    cout<<"Enter index position you want to insert : ";
    cin>>K;
    cout<<"Enter number to insert : ";
    cin>>ITEM;

    for(int j=N ; j>=K; j--)
    {
        A[j+1] = A[j];
    }
    N = N+1;
    A[K] = ITEM;
    cout<<"Array After Insertion : "<<endl;

    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<endl;
    }
}
