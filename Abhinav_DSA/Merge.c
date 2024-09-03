#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    free(L);
    free(R);
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {5, 2, 9, 1, 5, 6};
    int arr2[] = {3, 7, 8, 4, 2, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int totalSize = size1 + size2;
    int *mergedArr = (int*)malloc(totalSize * sizeof(int));
    for (int i = 0; i < size1; i++) mergedArr[i] = arr1[i];
    for (int i = 0; i < size2; i++) mergedArr[size1 + i] = arr2[i];
    mergeSort(mergedArr, 0, totalSize - 1);
    printf("Sorted merged array: ");
    printArray(mergedArr, totalSize);
    free(mergedArr);
    return 0;
}

