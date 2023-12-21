// // BINARY SEARCH
// #include<bits/stdc++.h>
// using namespace std;
// int binarysearch(int arr[],int size,int key)
// {
//     int start  =0;
//     int end = size -1;
//     int mid = (start+ end)/2;
//     while(start<=end)
//     {
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         else if(arr[mid]>key)
//         {
//             end = mid -1;
//         }
//         else if(arr[mid]<key)
//         {
//             start = mid +1;
//         }
//         mid = (start + end)/2;
//     }
//     return -1;
// }
// int main()
// {
//      int arr[5] = {2,34,54,1,3};
//      int size = 5;
//      int key = 340;
//      int result =  binarysearch(arr,size,key);
//      cout<<"The element is present at "<< result<<"\n";
//      return 0;
// }

// QUICK SORT
// #include <bits/stdc++.h>
// using namespace std;
// int partition(int arr[], int s, int e)
// {
//     int pivot = arr[s]; // pehla element ne j pivot le ok
//     int count = 0;
//     // have pivot karta ketla nana che ae jo ok
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (pivot >= arr[i])
//         {
//             count++;
//         }
//     }
//     int pivotIndex = s + count; // atle pivot potani correct position ma aai gayu che ok
//     swap(arr[s], arr[pivotIndex]); // ahiya pivot ane arr[s] to same j che
//     int i = s;
//     int j = e;
//     while (i < pivotIndex && j > pivotIndex)
//     {
//         while (arr[i] < arr[pivotIndex])
//         {
//             i++;
//         }
//         while (arr[j] > arr[pivotIndex])
//         {
//             j--;
//         }
//         if (i < pivotIndex && j > pivotIndex) // aa condition khabar nathi padti kem che
//         {
//             swap(arr[i++], arr[j--]);
//         }
//         return pivotIndex;
//     }
// }
// void quicksort(int arr[], int s, int e)

// {
//     // base case
//     if (s >= e)
//     {
//         return;
//     }
//     int p = partition(arr, s, e);
//     quicksort(arr, s, p - 1); // tare pivot element sudhi j karvanu che ok
//     quicksort(arr, p + 1, e);// ahiya tare partition ealu shu return kare che ae to tare pivot index return kare che n to tare pivotindex tare p ma store thay che atle aena thi ek nanu ane ek motu mate nu recursion call kar ok
// }
// int main()
// {
//     int arr[5] = {12, 49, 13, 2, 46};
//     int size = 5;
//     quicksort(arr, 0, size - 1); // te ahiya pehla specific lakhyu hatu ok have generalized kar ok
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// MERGE SORT
// pehla tu algo vichar aapde patavanu nathi ok mare samjhine karvanu che ok
// ek mare array aapyu che ok mare aene todvanu che ane pachi merge karvanu che
#include <iostream>
using namespace std;
int merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;      // first array ni size che aa
    int len2 = e - mid;          // first array ni size che aa
    int *first = new int[len1];  // navo array banayo che length 1 ni
    int *second = new int[len2]; // navo array banayo che length 2 ni
    int k = s;                   /* Copying the data for the first array*/
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1; /*copying the data for the second array*/
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    /*Merging the 2 sorted arrays*/
    int i1 = 0; // array 1 mate che
    int i2 = 0; // array 2 mate che
    k = s;
    while (i1 < len1 && i2 < len2)
    {
        if (first[i1] < second[i2]) // array to first ane second che n
        {
            arr[k++] = first[i1++];
        }
        else
        {
            arr[k++] = second[i2++];
        }
        while (i1 < len1)
        {
            arr[k++] = first[i1++];
        }
        while (i2 < len2)

        {
            arr[k++] = second[i2++];
        }
    }
}

void mergesort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergesort(arr, 0, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e);
}
// MERGE 2 trees array linked list badha ma logic to same j che ok
int main()
{
    int arr[5] = {21, 43, 2, 35, 432};
    int size = 5;
    mergesort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}

