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

//T:Ω(n^2) Θ(n^2) O(n^2)
//S:O(1)

//及时终止的选择排序
void selectionSort2(T a[],int n)
{
    bool sorted = false;
    for(int size = n; !sorted&&(size>1); size--)
    {
        int indexMax = 0;
        sorted = true;

        for(int i =1;i<size;i++)
        {
            if(a[indexMax]<=a[i])
                indexMax = i;
            else 
                sorted = false; 

            swap(a[indexMax],a[size-1]);
        }
    }
}