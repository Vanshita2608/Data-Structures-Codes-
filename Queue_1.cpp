#include<iostream>
using namespace std;

INSERT(char Q[], int N, int FRONT, int REAR, char ITEM)
{
    if((FRONT == 0 && REAR == N) || (FRONT = REAR+1))
    {
        cout<<"OVERFLOW"<<endl;
        return -1;
    }
    if(FRONT == NULL)
    {
        FRONT = 0;
        REAR = 0;
    }
    else if(REAR == N)
    {
        REAR = 1;
    }
    else
    {
        FRONT++;
    }
    Q[REAR] = ITEM;
    return Q[N];
}

main()
{
    int N, FRONT = 0, REAR = 0;

    cout<<"Enter length of QUEUE : ";
    cin>>N;

    char Q[N], ITEM;

    cout<<"Enter item to be inserted : ";
    cin>>ITEM;

    INSERT(Q[N], N, FRONT, REAR, ITEM);

    for(int i=0; i<N ;i++)
    {
        cout<<":> "<<Q[i]<<endl;
    }
}
