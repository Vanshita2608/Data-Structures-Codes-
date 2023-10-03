#include<iostream>
using namespace std;

void push(int TOP, int MAX)
{
    int item, i, S[MAX];

            cout<<"Enter element to push onto the Stack :--> ";
            cin>>item;

            if(TOP==MAX)
            {
                cout<<"OVERFLOW!!!"<<endl;
            }
            else
            {
                TOP++;
                S[TOP] = item;
                cout<<"STACK after insertion : ";
                for(i=0;i<=TOP;i++)
                {
                    cout<<"|"<<S[i]<<"|";
                }
            }
}

void pop(int TOP, int MAX)
{
    int item, S[MAX], i;
            if(TOP==-1)
            {
                cout<<"UNDERFLOW!!!"<<endl;
            }
            else
            {
                item = S[TOP];
                TOP--;

                cout<<"STACK after popping : \n";
                for(i=0;i<TOP;i++)
                {
                    cout<<"| "<<S[i]<<" |"<<endl;
                }
            }
}
main()
{
    int TOP=-1, MAX, i, choice;
    cout<<"Enter maximum limit of STACK : ";
    cin>>MAX;

    char decide;

    /*cout<<"Enter no. of elements you wish to enter : ";
    cin>>TOP;

    cout<<"Enter Stack Elements : \n";
    for(i=0; i<MAX; i++)
    {
        cout<<":> ";
        cin>>S[i];
        TOP++;
    }
    //MAX++;*/
    while(choice != 3)
    {
        cout<<"**MENU** \n1. PUSH \n2. POP \n3. EXIT"<<endl;
        cout<<"What do you want to do : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                //MAX++;
                push(TOP, MAX);
                cout<<endl;
                break;
            }
            case 2:
            {
                pop(TOP, MAX);
                cout<<endl;
                break;
            }
            case 3:
                {
                    break;
                }
            default:
                {
                    cout<<"INVALID CHOICE !!!!"<<endl;
                }
        }
    }
}
