#include<iostream>
using namespace std;

class Stack
{
    private:
        int TOP=0,limit,i;
        int *S = new int[limit];

    public:
            void set_limit()
            {
                cout<<"Enter STACK limit : ";
                cin>>limit;
            }

            void push(int ITEM)
            {
                if(TOP == limit)
                {
                    cout<<"OVERFLOW!!!"<<endl;
                }
                else
                {
                    S[TOP] = ITEM;
                    TOP++;
                }
            }

            void pop()
            {
                int ITEM;
                if(TOP == -1)
                {
                    cout<<"UNDERFLOW!!!"<<endl;
                }
                else
                {
                    ITEM = S[TOP];
                    TOP--;
                }
            }

            void display()
            {
                cout<<"STACK ELEMENTS"<<endl;
                for(i=0;i<TOP;i++)
                {
                    cout<<"|"<<S[i]<<"|"<<endl;
                }
            }

            void peek()
            {
                cout<<"TOPMOST ELEMENT : "<<S[TOP]<<endl;
            }
};
main()
{
    Stack st;
    int choice, ITEM;

    st.set_limit();

    while(choice != 5)
    {
        cout<<"MENU"<<endl;
        cout<<"1. PUSH \n2. POP \n3. DISPLAY \n4. PEEK \n5. EXIT"<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"Enter item to be pushed : ";
                cin>>ITEM;
                st.push(ITEM);
                break;
            }
            case 2:
            {
                st.pop();
                break;
            }
            case 3:
            {
                st.display();
                break;
            }
            case 4:
            {
                st.peek();
                break;
            }
            case 5:
            {
                break;
            }
            default:
            {
                cout<<"INVALID REQUEST!!!"<<endl;
                break;
            }
        }
    }
}
