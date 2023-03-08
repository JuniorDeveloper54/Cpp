#include <iostream>

using namespace std;

class MaxHeap
{
public:
    int arr[100];
    int size;

    MaxHeap()
    {
        size = 0;
    }

    void insert(int x)
    {
        arr[size++] = x;
        int i = size - 1;
        while (i > 0 && arr[(i - 1) / 2] < arr[i])
        {
            swap(arr[(i - 1) / 2], arr[i]);
            i = (i - 1) / 2;
        }
    }

    void Delete(int idx)
    {
        if (size == 0) return;
        if (size == 1)
        {
            size--;
            return;
        }
        arr[idx] = arr[size - 1];
        size--;
        heapify(idx);
    }

    int getMax()
    {
        return arr[0];
    }

    void heapify(int i)
    {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest = i;
        if (l < size && arr[l] > arr[largest])
        {
            largest = l;
        }
        if (r < size && arr[r] > arr[largest])
        {
            largest = r;
        }
        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            heapify(largest);
        }
    }
};

class MinHeap
{
public:
    MaxHeap mx;
    void insert(int x)
    {
        mx.insert(-x);
    }
    void Delete(int idx)
    {
        mx.Delete(idx);
    }
    int getMin()
    {
        return -mx.getMax();
    }
};

int main()
{
    MinHeap mh;

    mh.insert(3);
    mh.insert(2);
    mh.insert(1);
    mh.insert(5);
    mh.insert(4);

    cout << mh.getMin() << endl;
    mh.Delete(0);

    cout << mh.getMin() << endl;
    mh.insert(0);

    cout << mh.getMin() << endl;
    return 0;
}

