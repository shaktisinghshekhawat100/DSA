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
    //pyramid pattern
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n){
    // inverted pyramid pattern
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
        for(int j=0;j<2*(n-i)-1;j++)
        {
            cout << "*";
        }
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print9(int n)
{
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout << " ";
        }
        cout << endl;
    }
         for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
        for(int j=0;j<2*(n-i)-1;j++)
        {
            cout << "*";
        }
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print10(int n)
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
void print11(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

}     
void print12(int n)
{
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout << j ;
        }
        for (int k=1;k<2*(n-i)+1;k++)
        {
            cout << " ";
        }
        for (int l=i;l>=1;l--)
        {
            cout << l;
        }
        cout << endl;
    }
}
void print13(int n)
{
    // 1
    // 2 3
    // 4 5 6
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << j + (i*(i-1))/2 << " ";
        }
        cout << endl;
    
    }     
}     
void print14(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(char ch = 'A';ch < 'A' + i;ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void print15(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(char ch = 'A';ch < 'A' + n-i+1;ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void print16(int n)
{
    // A
    // B B
    // C C C
    for(int i=1;i<=n;i++){
       char ch = 'A' + i - 1;
       for(int j=1;j<=i;j++){
           cout << ch;
       }
       cout << endl;
    }
}
void print17(int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            cout << " " ;
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++)
        {
            cout << ch;
            if(j<=breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        
        }
        cout << endl;
    }
}
void print18(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch = ('A'+n-1)-i;ch <= ('A'+n-1);ch++)
        {
         cout << ch << " ";
        }
        cout << endl;
    }
}
void print19(int n)
{
    int initial = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout << "*";
        }
        for(int j=0;j<initial;j++)
        {
            cout << " ";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout << "*";
        }
        initial += 2;
        cout << endl;
    }
    initial = 2*n-2 ;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            cout << "*";
        }
        for(int j=0;j<initial;j++)
        {
            cout << " ";
        }
        for(int j=1;j<=i+1;j++)
        {
            cout << "*";
        }
        initial -= 2;
        cout << endl;
    }
}
void print20(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout << "*";
        }
        for (int j=0;j<2*(n-i)-2;j++)
        {
            cout << " ";
        }
        for(int j=0;j<i;j++)
        {
            cout << "*";
        } 
        cout << endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout << "*";
        }
        for (int j=0;j<2*(i);j++)
        {
            cout << " ";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout << "*";
        } 
        cout << endl;
    }   
}
void print21(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
                cout << "*";
            else
            
                cout << " ";
        }
        cout << endl;
    }
}
void print22(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {       int top = i;
                // Calculate distance from left
                int left = j;
                // Calculate distance from bottom
                int bottom = (2 * n - 2) - i;
                // Calculate distance from right
                int right = (2 * n - 2) - j;

                // Take the minimum of all four distances
                int minDist = min(min(top, bottom), min(left, right));

                // Print number (starts with n at border, decreases inside)
                cout << (n - minDist) << " ";
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
        print22(n);
    }
    return 0;
   
}

