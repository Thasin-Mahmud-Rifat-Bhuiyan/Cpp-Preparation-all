#include<iostream>
using namespace std;
int main() { int first = 0;
    int second = 1;
    int count = 0;
    int fibo;
    int n;
    cout << "Enter the number of n:";
    cin >> n;
    if (n==first || n== second)
    {
        cout << "The number is Fibonnacci!";
    }
    else
    {
        fibo = first + second;
        while (fibo<n)
        {
            first = second;
            second = fibo;
            fibo = first + second;

        }
        if (fibo==n)
        {
            cout << "Fibonacci" << endl << n << endl;
            while (count<n)
            {
                if (count<=1)
                {
                    fibo = count;
                }
                else{
                    fibo = first + second;
                    first = second;
                    second = fibo;
                    
                }
                cout << fibo;
                count++;
            }
            
        }
        else{
            cout << "NOT Fibonacci";
        }

        
        
    }

    return 0;
}