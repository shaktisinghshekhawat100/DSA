// Brute force approach to count the number of digits in a number
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countDigits(int n)
{
    int count = 0;
    while(n != 0)
    {
        count++;
        n = n / 10;
        
    }
    return count;
}
int main()
{
    int n;
    cout << "enter a number:";
    cin>>n;
    int result = countDigits(n);
    cout << "The number of digits in the number is: " << result << endl;
    return 0;   
}

//Optimized approach to count the number of digits in a number
/* #include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n)
{
    int cnt =(int)log10(n) + 1;
    return cnt; 
}
int main()
{
    int n;
    cout << "enter a number:";
    cin>>n;
    int result = countDigits(n);
    cout << "The number of digits in the number is: " << result << endl;
    return 0;   
} */