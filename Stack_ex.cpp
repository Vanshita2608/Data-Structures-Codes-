#include<iostream>
#include<string.h>
using namespace std;

main()
{
    int choice, limit, TOP, i;
    char decide;
    cout<<"Enter STACK limit : ";
    cin>>limit;

    string A[limit], ITEM;
    cout<<"How many elements do you wish to enter : ";
    cin>>TOP;
    cout<<"Enter elements of STACK : \n";
    for(int i=0;i<TOP;i++)
    {
        cout<<":> ";
        cin>>A[i];
    }

    cout<<"MENU"<<endl;
    cout<<"1. PUSH \n2. POP"<<endl<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            if(TOP == limit)
            {
                cout<<"OVERFLOW!!!"<<endl;
            }
            else
            {
                cout<<"Do you want to fill the whole stack (Y/N) : ";
                cin>>decide;
                if(decide == 'Y')
                {
                    int ITEM[limit];
                    cout<<"Enter item to be pushed : \n";
                    for(i=0;i<(limit - TOP);i++)
                    {
                        cout<<":> ";
                        cin>>ITEM[i];
                    }
                    i=0;
                    while(TOP<limit)
                    {
                        A[TOP] = ITEM[i];
                        i++;
                        TOP++;
                    }
                    cout<<"STACK after filling completely : "<<endl;
                    for(i=0;i<TOP;i++)
                    {
                        cout<<A[i]<<endl;
                    }
                }
                else
                {
                    cout<<"Enter item to be pushed : ";
                    cin>>ITEM;
                    A[TOP] = ITEM;
                    TOP++;
                    cout<<"STACK after pushing : "<<endl;
                    for(i=0;i<TOP;i++)
                    {
                        cout<<A[i]<<endl;
                    }
                }
            }
            break;
        }
        case 2:
        {
            if(TOP == -1)
            {
                cout<<"UNDERFLOW!!!"<<endl;
            }
            else
            {
                cout<<"Do you want to empty the stack(Y/N) : ";
                cin>>decide;
                if(decide == 'Y')
                {
                    while(TOP != -1)
                    {
                        TOP--;
                    }
                    cout<<"STACK emptied"<<endl;
                }
                else
                {
                    ITEM = A[TOP];
                    TOP--;
                    cout<<"STACK after popping : "<<endl;
                    for(i=0;i<TOP;i++)
                    {
                        cout<<A[i]<<endl;
                    }
                }
            }
            break;
        }
        default:
        {
            cout<<"INVALID REQUEST!!!"<<endl;
            break;
        }
    }
}
