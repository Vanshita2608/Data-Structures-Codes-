#include<iostream>
using namespace std;

main()
{
    int TOP , TOP2 = 0, TOP3 = 0, n;

    cout<<"Enter length of equation : ";
    cin>>n;
    char Q[n], P[n], S[n];

    cout<<"Enter the equation : ";
    cin>>Q;

    for(int j=n ; j>=0; j--)
    {
        Q[j+1] = Q[j];
    }
    n++;
    Q[0] = '(';
    cout<<Q<<endl;
    TOP = n;

    for(int i=0; i<TOP ;i++)
    {
        if((Q[i] >= '0' && Q[i] <= '9') || (Q[i] >= 'A' && Q[i] <= 'Z'))
        {
            cout<<"IF EXECUTED"<<endl;
            P[TOP2] = Q[i];
            TOP2++;
            cout<<P[TOP2]<<endl;
            cout<<Q[i]<<endl;
            cout<<TOP2<<endl;
        }
        else if(Q[i] == '(')
        {
            cout<<"ELSE IF 1 executed "<<endl;
            S[TOP3] = Q[i];
            TOP3++;
            cout<<S[TOP3]<<endl;
            cout<<Q[i]<<endl;
            cout<<TOP3<<endl;
        }
        else if(Q[i] == ')')
        {
            cout<<"ELSE IF 2 executed "<<endl;
            cout<<Q[i]<<endl;
            while(S[TOP3] != '(' && TOP3 != -1)
            {
                cout<<"WHILE EXECUTED ELSE IF"<<endl;
                P[TOP2] = S[TOP3];
                TOP2++;
                TOP3--;
                cout<<P[TOP2]<<endl;
                cout<<S[TOP3]<<endl;
                cout<<TOP2<<endl;
                cout<<TOP3<<endl;
            }
            if(TOP3 != -1)
            {
                cout<<"WHILE KE BAAD WALA IF"<<endl;
                TOP3--;
                cout<<"---"<<TOP3<<endl;
            }
        }
        else
        {
            cout<<"ELSE EXECUTED"<<endl;
            while(S[TOP3] >= Q[i] && TOP3 != -1)
            {
                cout<<"WHILE EXECUTED ELSE"<<endl;
                P[TOP2] = S[TOP3];
                TOP2++;
                TOP3--;
                cout<<P[TOP2]<<endl;
                cout<<S[TOP3]<<endl;
                cout<<TOP2<<endl;
                cout<<TOP3<<endl;
            }
            S[TOP3] = Q[i];
            TOP3++;
            cout<<S[TOP3]<<endl;
            cout<<Q[i]<<endl;
            cout<<TOP3<<endl;
        }
    }
    cout<<"-------------"<<endl;
    cout<<TOP<<endl;
    cout<<TOP3<<endl;
    cout<<S<<endl;
    cout<<TOP2<<endl;
    cout<<P<<endl;
}
