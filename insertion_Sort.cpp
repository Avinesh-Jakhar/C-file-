#include <bits/stdc++.h>
void Insertion_sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    clock_t t = clock();
    int arr[] = {100, 23687, 386, 347, 3434, 4534, 4534, 3423, 343, 4563, 38976, 4645, 35, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    Insertion_sort(arr, size);
    printf("\n \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    t = t - clock();
    printf("\n %d time taken", t / CLOCKS_PER_SEC);
    //hello i am prateek
    int i=100;
    printf("%d",i);
    //comment
}
