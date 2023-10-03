//binary search

#include <iostream>
using namespace std;

void sorting(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] <= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int BINARY(int arr[], int lb, int ub, int item, int loc)
{
    sorting(arr, ub);
    int beg = lb, end = ub, mid = (int)(beg+end)/2;

    while(beg<=end && arr[mid] != item)
    {
        if(item<arr[mid])
        {
            end = mid-1;
        }
        else
        {
            beg = mid+1;
        }
        mid = (int)(beg+end)/2;
    }
    if(arr[mid] == item)
    {
        loc = mid;
    }
    else
    {
        loc = -1;
    }
    return loc;
}

int RBINARY(int arr[], int lb, int ub, int item, int loc)
{
    sorting(arr, ub);
    int beg = lb, end = ub, mid = (int)(beg+end)/2;

    while(beg<=end && arr[mid] != item)
    {
        if(item<arr[mid])
        {
            return RBINARY(arr, lb, mid-1, item, loc);
        }
        else
        {
            return RBINARY(arr, mid+1, ub, item, loc);
        }
        mid = (int)(beg+end)/2;
    }
    if(arr[mid] == item)
    {
        loc = mid;
    }
    else
    {
        loc = 0;
    }
    return loc;
}

int main()
{
    int choice;

    /*cout<<"Enter no. of elements : ";
    cin>>n;
    int num[n];
    cout<<"Enter the numbers : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Num "<<i+1<<" : ";
        cin>>num[i];
    }*/

    cout<<"Enter your choice of search : \n1. Linear Search \n2. Binary Search \n:>";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            int arr[10], i, num, index;
            cout<<"Enter 10 Numbers: ";
            for(i=0; i<10; i++)
                cin>>arr[i];
            cout<<"\nEnter a Number to Search: ";
            cin>>num;
            for(i=0; i<10; i++)
            {
                if(arr[i]==num)
                {
                    index = i;
                    break;
                }
            }
            cout<<"\nFound at Index No."<<index;
            cout<<endl;
            return 0;
            break;
        }
        case 2:
        {
            int n;
            cout<<"Enter no. of elements : ";
            cin>>n;
            int num[n];
            cout<<"Enter the numbers : "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"Num "<<i+1<<" : ";
                cin>>num[i];
            }
            int c;
            int item,loc;
            cout<<"Enter item to be searched : ";
            cin>>item;
            cout<<"Enter approach : \n1. Iterative \n2. Recursive \n:> ";
            cin>>c;
            switch(c)
            {
                case 1:
                {
                    int res = BINARY(num, 0, n, item, loc);
                    if(res != -1)
                    {
                        cout<<"Item found in array"<<endl;
                    }
                    else
                    {
                        cout<<"Item is not present in array"<<endl;
                    }
                    break;
                }
                case 2:
                {
                    int res = RBINARY(num, 0, n, item, loc);
                    if(res != -1)
                    {
                        cout<<"Item found in array"<<endl;
                    }
                    else
                    {
                        cout<<"Item is not present in array"<<endl;
                    }
                    break;
                }
            }
            break;
        }
        default:
        {
            cout<<"Enter appropriate choice !"<<endl;
            break;
        }
    }
    return 0;
}
