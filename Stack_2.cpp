#include<iostream>
using namespace std;

main()
{
    int limit = 100, TOP, i, TOP2=0, S[limit], ans=0;

    /* limit=limit of eq, TOP = how many elements have been entered, i=iteration, TOP2 = top of stack on which the equation is being pushed,
        S = STACK, ans = ans of equation*/

    char P[limit], operate;

    /* P = char array jisme pehle values store hogi, operate = to store operator*/

    cout<<"How many elements do you wish to enter : ";
    cin>>TOP; // set top of stack


    cout<<"Enter equation : \n";
    for(i=0;i<TOP;i++)
    {
        cout<<":> ";
        cin>>P[i];
    }

    for(i=0; P[i] != ')'; i++)
    {
        if(P[i] == '+' || P[i] == '-' || P[i] == '/' || P[i] == '*' || P[i] == '%')
        {
            operate = P[i];
        }
        else
        {
            S[TOP2] = P[i]-48;
            TOP2++;
        }
    }

    switch(operate)
    {
        case '+':
        {
            for(i=1;i<=TOP2;i++)
            {
                ans = S[i-1] + S[i]; //ans variable me value store ho rahi hai
                TOP2--; // decrement to stop the loop
            }
            TOP2--; // decrement so that TOP2 = 0
            S[TOP2] = ans; // stack me push
            TOP2++; // increment top of stack for future agar nayi value add karni ho to
            for(i=0;i<TOP2;i++)
            {
                cout<<"Answer : "<<S[i]<<endl;
            }
            break;
        }
        case '-':
        {
            for(i=1;i<=TOP2;i++)
            {
                ans = S[i-1] - S[i];
                TOP2--;
            }
            TOP2--;
            S[TOP2] = ans;
            TOP2++;
            for(i=0;i<TOP2;i++)
            {
                cout<<"Answer : "<<S[i]<<endl;
            }
            break;
        }
        case '*':
        {
            for(i=1;i<=TOP2;i++)
            {
                ans = S[i-1] * S[i];
                TOP2--;
            }
            TOP2--;
            S[TOP2] = ans;
            TOP2++;
            for(i=0;i<TOP2;i++)
            {
                cout<<"Answer : "<<S[i]<<endl;
            }
            break;
        }
        case '/':
        {
            for(i=1;i<=TOP2;i++)
            {
                ans = S[i-1] / S[i];
                TOP2--;
            }
            TOP2--;
            S[TOP2] = ans;
            TOP2++;
            for(i=0;i<TOP2;i++)
            {
                cout<<"Answer : "<<S[i]<<endl;
            }
            break;
        }
        case '%':
        {
            for(i=1;i<=TOP2;i++)
            {
                ans = S[i-1] % S[i];
                TOP2--;
            }
            TOP2--;
            S[TOP2] = ans;
            TOP2++;
            for(i=0;i<TOP2;i++)
            {
                cout<<"Answer : "<<S[i]<<endl;
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

