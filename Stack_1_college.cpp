#include<iostream>
using namespace std;

main()
{
    int TOP=0, MAX, i, j=0, item, choice;
    cout<<"Enter maximum limit of STACK : ";
    cin>>MAX;

    char decide, oth_op;
    int S[MAX];

    /*cout<<"Enter no. of elements you wish to enter : ";
    cin>>TOP;*/

    //MAX++;
    while(j != -1)
    {
        cout<<"**MENU** \n1. PUSH \n2. POP \n3. PEEK \n4. DISPLAY"<<endl;
        cout<<"What do you want to do : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                //MAX++;
                if(TOP==MAX)
                {
                    cout<<"OVERFLOW!!!"<<endl;
                }
                else
                {
                    cout<<"Do you wish to fill the stack completely? (Y/N) : ";
                    cin>>decide;

                    if(decide=='Y')
                    {
                        cout<<"Enter elements to push onto the Stack : \n";
                        for(i=0; i<MAX; i++)
                        {
                            cout<<":> ";
                            cin>>S[TOP];
                            TOP++;
                        }
                        cout<<"STACK after filling completely : "<<endl;
                        for(i=0;i<TOP;i++)
                        {
                            cout<<"| "<<S[i]<<endl;
                        }
                    }
                    else
                    {
                        cout<<"Enter element to push onto the Stack :--> ";
                        cin>>item;
                        S[TOP] = item;
                        TOP++;

                        cout<<"STACK after insertion : ";
                        for(i=0;i<TOP;i++)
                        {
                            cout<<S[i];
                        }
                    }
                }

                cout<<"\nDo you wish to perform other operation (Y/N) : ";
                cin>>oth_op;

                if(oth_op == 'N')
                {
                    j =-1;
                }
                break;
            }
            case 2:
            {
                /*cout<<"Enter elements : "<<endl;
                for(i=0;i<MAX;i++)
                {
                    TOP++;
                    cout<<":> ";
                    cin>>S[TOP];
                }*/
                if(TOP==-1)
                {
                    cout<<"UNDERFLOW!!!"<<endl;
                }
                else
                {
                    cout<<"Do you wish to empty the stack completely? (Y/N) : ";
                    cin>>decide;

                    if(decide=='Y')
                    {
                        while(TOP != -1)
                        {
                            TOP--;
                        }
                        cout<<"STACK emptied!!!"<<endl;
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
                cout<<"Do you wish to perform other operation (Y/N) : ";
                cin>>oth_op;

                if(oth_op == 'N')
                {
                    j =-1;
                }
                break;
            }
            case 3:
            {
                cout<<"DISPLAY : "<<endl;
                for(i=0;i<TOP;i++)
                {
                    cout<<":> "<<S[i]<<endl;
                }
                cout<<"PEEK : "<<S[TOP-1]<<endl;
                cout<<"Do you wish to perform other operation (Y/N) : ";
                cin>>oth_op;

                if(oth_op == 'N')
                {
                    j =-1;
                }
                break;
            }

            case 4:
            {
                cout<<"DISPLAY : "<<endl;
                for(i=0;i<TOP;i++)
                {
                    cout<<":> "<<S[i]<<endl;
                }
                cout<<"Do you wish to perform other operation (Y/N) : ";
                cin>>oth_op;

                if(oth_op == 'N')
                {
                    j =-1;
                }
                break;
            }
            default:
            {
                cout<<"INVALID CHOICE"<<endl;
                break;
            }
        }
    }
}
