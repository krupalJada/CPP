#include<iostream>
#define n 5
using namespace std;
int running_total(int arr[])
{
    int new[n];
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
        if (i != 0)
        {
            new[i] = arr[i] + arr[i - 1];
            cout<<new[i]);
        }
    }
}
int arr()
{
    int i, arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element a[%d] :", i);
        scanf("%d", &arr[i]);
    }
    running_total(arr);
}
int main()
{
    arr();
    return 0;
}