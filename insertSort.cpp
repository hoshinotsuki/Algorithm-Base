template<class T>
void insertionSort(T a[],int n)
{
    for(size_t i = 1; i < n; i++)
    {
        //insert a[i] into a[0:i-1]
        T t = a[i];
        int j;
        for(size_t j = i-1; j >= 0; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = t;         
    }     
}

//T : Ω(n) Θ(n^2) O(n^2)
//S : O(1)