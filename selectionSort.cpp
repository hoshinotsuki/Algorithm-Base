template<class T>
void selectionSort(T a[],int n)
{
    //sort a[0:n-1]
    for(int size = n; size > 1; size--)
    {
        int j = indexOfMax(a,size);
        swap(a[j],a[size-1]);
    }        
} 

//T:O(n^2)
//S:O(1)