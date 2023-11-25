#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[10];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size++;
        int idx = size;
        arr[idx] = val;
        while (idx > 1)
        {
            int parent = idx / 2;
            if (arr[parent] < arr[idx])
            {
                swap(arr[parent], arr[idx]);
            }
            else
            {
                return;
            }
        }
    }
    void deleter()
    {
        if (!size)
        {
            cout << "Nothing to delete bitch!" << endl;
        }
        arr[1] = arr[size];
        size--;
        int idx = 1;
        while (idx < size)
        {
            int leftidx = 2 * idx;
            int rightidx = 2 * idx + 1;
            if (leftidx < size && arr[leftidx] > arr[idx])
            {
                swap(arr[leftidx], arr[idx]);
                idx = leftidx;
            }
            else if (rightidx < size && arr[rightidx] > arr[idx])
            {
                swap(arr[rightidx], arr[idx]);
                idx = rightidx;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size)
{
    if (size < 1)
        return;
    swap(arr[1], arr[size - 1]);
    size--;
    heapify(arr, size, 0);
    heapSort(arr, size);
}

int main()
{
    // Heap h;
    // h.insert(73);
    // h.insert(78);
    // h.insert(88);
    // h.insert(39);
    // h.insert(64);
    // h.insert(59);
    // h.print();
    int arr[6] = {73, 78, 59, 88, 64, 39};
    int n = 6;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    heapSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}