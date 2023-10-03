#include<iostream>
using namespace std;

class Postfix
{
    public :
        int limit =100,TOP=0, i, operand_1, operand_2;
        int *S = new int[limit];

        void POLISH(string P)
        {
            for(i=0; P[i] != ')'; i++)
            {
                if(P[i]>= '0' && P[i]<= '9' )
                {
                    S[TOP] = P[i]-48;
                    TOP++;
                }
                else
                {
                    TOP--;
                    operand_2 = S[TOP];
                    TOP--;
                    operand_1 = S[TOP];

                    switch(P[i])
                    {
                        case '+':
                        {
                            S[TOP] = operand_1 + operand_2;
                            TOP++;
                            break;
                        }
                        case '-':
                        {
                            S[TOP] = operand_1 - operand_2;
                            TOP++;
                            break;
                        }
                        case '*':
                        {
                            S[TOP] = operand_1 * operand_2;
                            TOP++;
                            break;
                        }
                        case '/':
                        {
                            S[TOP] = operand_1 / operand_2;
                            TOP++;
                            break;
                        }
                        case '%':
                        {
                            S[TOP] = operand_1 % operand_2;
                            TOP++;
                            break;
                        }
                        default:
                        {
                            cout<<"Invalid Operator Encountered"<<endl;
                            break;
                        }
                    }
                }
            }

            cout<<"Evaluated Postfix Expression : "<<S[TOP-1]<<endl;
        }
};

main()
{
    Postfix p;
    string P;

    cout<<"Enter the equation with brackets : ";
    cin>>P;

    p.POLISH(P);
}
