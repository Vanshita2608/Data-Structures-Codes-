#include<iostream>
using namespace std;

main()
{
    int choice, N,sch;
    cout<<"Enter no. of elements : ";
    cin>>N;
    char A[N];
    cout<<"Enter a string : ";
    cin>>A;

    cout<<"***MENU***"<<endl;
    cout<<"1. Display \n2. Delete \n3. Insert \n4. Search"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            cout<<"Display : "<<A<<endl;

            break;
        }

        case 2:
        {
            int K;
            char ITEM;
            cout<<"Enter index position you want to remove : ";
            cin>>K;
            ITEM = A[K];

            for(int j=K ; j<=N-1; j++)
            {
                A[j] = A[j+1];
            }
            N = N-1;
            cout<<"String After Deletion : "<<A<<endl;
            break;
        }
        case 3:
        {
            int K;
            char ITEM;
            cout<<"Enter index position you want to insert : ";
            cin>>K;
            cout<<"Enter character to insert : ";
            cin>>ITEM;

            for(int j=N ; j>=K; j--)
            {
                A[j+1] = A[j];
            }
            N = N+1;
            A[K] = ITEM;
            cout<<"String After Insertion : "<<A<<endl;
            break;
        }
        case 4:
        {
            int count = 0;
            char sch;
            cout<<"Enter character to search : ";
            cin>>sch;
            for(int i=0;i<N;i++)
            {
                if(A[i] == sch)
                {
                    count+=1;
                    break;
                }
            }
            if(count>0)
            {
                cout<<"Character Found !!!"<<endl;
            }
            else
            {
                cout<<"Character Not Found !!!"<<endl;
            }

            cout<<"Method 2"<<endl;
            int K = 0, LOC = 0;
            cout<<"Enter character to search : ";
            cin>>sch;
            while((LOC == 0)&& (K<=N))
            {
                if(sch == A[K])
                {
                    LOC = K;
                }
                else
                {
                    K += 1;
                }
            }
            if(LOC==0)
            {
                cout<<"Character is not in string"<<endl;
            }
            else
            {
                cout<<"Character was found at location : "<<LOC<<" in string : "<<A<<endl;
            }
            break;
        }
    }
}
