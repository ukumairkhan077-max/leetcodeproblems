#include <iostream>
using namespace std;

void printWays(int n, string path)
{
    
    if (n == 0)
    {
        cout << path << endl;
        return;
    }

    
    if (n < 0)
    {
        return;
    }

   
    printWays(n - 1, path + "1 ");

    
    printWays(n - 2, path + "2 ");
}

int climbStairs(int n)
{
    if (n <= 2)
        return n;

    int first = 1;
    int second = 2;
    int current;

    for (int i = 3; i <= n; i++)
    {
        current = first + second;
        first = second;
        second = current;
    }

    return second;
}

int main()
{
    int n;

    cout << "Enter number of stairs: ";
    cin >> n;

    cout << "\nPossible ways:\n";
    printWays(n, "");

    cout << "\nTotal ways = " << climbStairs(n);

    return 0;
}