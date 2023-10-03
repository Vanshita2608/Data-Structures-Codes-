#include<iostream>
using namespace std;

main()
{
    int limit = 100, TOP, i, TOP2=0, S[limit], operand_1, operand_2;
    /* limit=limit of eq, TOP = how many elements have been entered, i=iteration, TOP2 = top of stack on which the equation is being pushed,
        S = STACK, operand_1 = stores A, operand_2 = stores B*/

    string P; // stores the equation

    cout<<"How many elements do you wish to enter : ";

    cin>>TOP; // for future rference if needed

    cout<<"Enter equation as a string : ";

    cin>>P; //takes the whole equation as a string

    for(i=0;P[i] != ')' ;i++) // to check whether the equation is ended or not
    {
            if(P[i] >= '0' && P[i] <= '9') // this checks whether the specified string index is a number or not
            {
                S[TOP2] = P[i]-48; // PUSH operation
                TOP2++; // to increment the value of top of Stack
            }
            else // if any operator is encountered then this runs
            {
                TOP2--; // as in before occurence TOP2 == 2 so to pop the numbers stored in prior indexes

                operand_2 = S[TOP2]; // POP operation
                TOP2--; // DECREMENT

                operand_1 = S[TOP2]; //POP operation

                switch(P[i]) // checks for operator
                {
                    case '+':
                    {
                        S[TOP2] = (operand_1 + operand_2); // PUSH operation
                        TOP2++; // increment
                        break;
                    }
                    case '-':
                    {
                        S[TOP2] = operand_1 - operand_2;
                        TOP2++;
                        break;
                    }
                    case '*':
                    {
                        S[TOP2] = operand_1 * operand_2;
                        TOP2++;
                        break;
                    }
                    case '/':
                    {
                        S[TOP2] = operand_1 / operand_2;
                        TOP2++;
                        break;
                    }
                    case '%':
                    {
                        S[TOP2] = operand_1 % operand_2;
                        TOP2++;
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
    cout<<"Answer : "<<S[TOP2-1]<<endl;
}
