#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of numbers to sort : ";
    cin >> n;
    n++;
    int num[n];
    int k = 10;
    num[0] = INT_MIN;
    for(int i = 1 ; i < n ; i++)
        num[i] = k--;
    int cunt = 0;
    cout << "The Unsorted Numbers : ";
    for(int i = 1 ; i < n ; i++)
        cout << num[i] << " ";

    cout << endl;

    //Insertion Sort Algorithm Starts
    for(int j = 1 ; j < n ; j++)
    {
        cunt++;
        int i = j-1;
        int t = num[j];
        while(t < num[i])
        {
            cunt++;
            num[i+1] = num[i];
            i--;
        }
        num[i+1] = t;
    }
    //Insertion Sort Algorithm Ends

    cout << "The Sorted Numbers : ";
    for(int i = 1 ; i < n ; i++)
        cout << num[i] << " ";
    cout << endl;
    cout << "Complexicity is " << cunt << endl;

}