#include <iostream>
using namespace std;

/*Even Odd*/
// int OddEven(int n){
//     if(n%2==0){
//         cout<<"Even number."<<endl;
//     }
//     else{
//         cout<<"Odd number." <<endl;
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     int ans=OddEven(n);
//     return ans;
// }

// AP = Arithmetic Progression
// AP=3*n+7

// Sum of array

// bool search(int num[], int size, int key){

//     for(int i=0;i<size;i++){
//         if(num[i] == key){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int key;
//     cin >> key;

//     int num[10] = {10,-3,4,2,6,7,1,8,9,-5};

//     bool found = search(num,10,key);

//     if(found){
//         cout << "Element Found" << endl;
//     }
//     else{
//         cout << "Element not found" << endl;
//     }
// }

// Swap Alternate

// bool printArray(int num[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << num[i] << " ";
//     }
// }

// bool reverse(int num[], int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         if (i + 1 < size)
//         {
//             int temp = num[i];
//             num[i] = num[i + 1];
//             num[i + 1] = temp;

//             // OR
//             // swap(num[i], num[i + 1]);
//         }
//     }
// }

// int firstOccu(int arr[], int size, int key)
// {
//     int s = 0, e = size - 1;
//     int mid = (s + e) / 2;
//     int ans = -1;

//     while (s <= e)
//     {

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = (s + e) / 2;
//     }
//     return ans;
// }

// int lastOccu(int arr[], int size, int key)
// {
//     int s = 0, e = size - 1;
//     int mid = (s + e) / 2;
//     int ans = -1;

//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = (s + e) / 2;
//     }
//     return ans;
// }

// int main()
// {
//     int even[11] = {2, 3, 7, 9, 10, 11, 11, 11, 11, 11, 18};

//     cout << "First 11 element is at index " << firstOccu(even, 11, 11) << endl;
//     cout << "Last 11 element is at index " << lastOccu(even, 11, 11) << endl;
//     return 0;
// }

int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] <= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int main()
{
    int myarr[6] = {2, 3, 5, 6, 4, 1};

    cout << "Pivot element is " << pivot(myarr, 6) << endl;
}