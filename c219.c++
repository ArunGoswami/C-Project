#include <iostream>
#include<queue>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[100] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
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
    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            if (leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if (rightindex < size && arr[i] < arr[rightindex])
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return;
            }
        }
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    else if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapsort(int arr[], int n){
    int size = n;
    while(arr[size]>1){
        swap(arr[size], arr[1]);
        size--;
        heapify(arr,size,1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(51);
    h.insert(52);
    h.insert(53);
    h.insert(54);
    h.print();

  int arr[6]={-1,54,55,56,56,55};
  int n=5;
for(int i=n/2; i>0; i--){
    heapify(arr,n,i);
}
cout<<"printing "<<endl;
for(int i=1; i<=n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

 h.deletefromheap();
    h.print();
    heapsort(arr, n);
    cout<<"printing the sorted array "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
  priority_queue<int>pq;
  pq.push(1);
  pq.push(2);
  pq.push(3);
  pq.push(4);

  cout<<"element at top"<<pq.top();
  pq.pop();

  cout<<"element at top"<<pq.top();
  
  cout<<"element size"<<pq.size();
  if(pq.empty()){
    cout<<"pq is empty"<<endl;
  }
  else{
     cout<<"pq is not empty"<<endl;
  }
   priority_queue<int,vector<int>,greater<int>>minheap;
   minheap.push(1);
    minheap.push(12);
    minheap.push(3);
    minheap.push(4);
    cout<<endl;
     cout<<"element at top"<<minheap.top();
     cout<<endl;
  minheap.pop();

  cout<<"element at top"<<minheap.top();
  cout<<endl;
  cout<<"element size"<<minheap.size();
    return 0;
}
