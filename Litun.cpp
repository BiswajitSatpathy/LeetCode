#include <iostream>
#include <vector>
using namespace std;



int firstOccur(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccur(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 7, 8};
    int firstoccur = firstOccur(arr, 8, 3);
    int lastocc = lastOccur(arr, 8, 3);
    cout << "First Occurence : "<<firstoccur<<endl;
    cout << "Last Occurence : "<<lastocc;
}

// int main(){
//     char ch=234234;
//     cout<<ch;
//     return 0;
// }

// int main(){
//     int n;
//     if(cin>>n){
//         cout<<"Biswajit";
//     }
//     else{
//         cout<<"Satpathy";
//     }
// }