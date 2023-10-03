#include<iostream>
using namespace std;

class CQUEUE
{
    private:
        int F = -1, R = -1, I, N;
        int *Q = new int[N];
    public:

        void set_limit()
        {
            cout<<"Enter max limit of queue : ";
            cin>>N;
        }

        void Insert(int I)
        {
            if((F==0 && R==N))
            {
                cout<<"\nQUEUE OVERFLOW \n"<<endl;
                cout<<"\n FRONT : "<<F<<" \n REAR : "<<R<<endl;
            }
            if(F==-1)
            {
                F = 0;
                R = 1;
                cout<<"\n FRONT : "<<F<<" \n REAR : "<<R<<endl;
            }
            else if(R == N)
            {
                R = 1;
                cout<<"\n FRONT : "<<F<<" \n REAR : "<<R<<endl;
            }
            else
            {
                R++;
                Q[R] = I;
                cout<<"\n FRONT : "<<F<<" \n REAR : "<<R<<endl;
            }

        }

        void Delete(int I)
        {
            if((F==R)/* || (F = R+1)*/)
            {
                cout<<"\nQUEUE UNDERFLOW \n"<<endl;
            }
            else
            {
                I = Q[F];
                F++;
                cout<<"\n FRONT : "<<F<<" \n REAR : "<<R<<endl;
            }
            /*if(F==-1)
            {
                F = 0;
                R = 1;
            }*/
        }

        void display()
        {
            /*for(int i=F;i<N;i++)
            {
                cout<<":> "<<Q[i]<<endl;
            }*/
            if(F==R)
            {
                cout<<"QUEUE EMPTIED!!"<<endl;
            }
            cout<<"\n FRONT : "<<F<<" \n REAR : "<<R<<endl;
        }
};

main()
{
    CQUEUE q;
    int choice, ITEM;

    q.set_limit();

    while(choice != 5)
    {
        cout<<"MENU"<<endl;
        cout<<"1. INSERT \n2. DELETE \n3. DISPLAY\n5. EXIT"<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"Enter item to be pushed : ";
                cin>>ITEM;
                q.Insert(ITEM);
                break;
            }
            case 2:
            {
                q.Delete(ITEM);
                break;
            }

            case 3:
            {
                q.display();
                break;
            }
            /*
            case 4:
            {
                st.peek();
                break;
            }*/
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
