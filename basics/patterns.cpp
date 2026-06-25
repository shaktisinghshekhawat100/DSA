#include<iostream>
using namespace std;
void print1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void print5(int n)
{
    for(int i=n;i>=0;i--)
    {
        for(int j=i;j>0;j--)
        {
        
            cout << "*";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for(int i=n;i>=0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout << j;
        }
        
        cout << endl;
    }
}
void print7(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i=0;i<t;i++)
    {
        int n;
        cout << "Enter the number of rows: ";
        cin >> n;
        print7(n);
    }
    return 0;
   
}

