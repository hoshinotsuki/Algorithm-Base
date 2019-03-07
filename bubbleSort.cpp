template<class T> 
void bubble(T a[],int n)
{
    //a[0:n-1] move the max element to the right side
    for( int i =0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
    }
}

void bubbleSort(T a[],int n)
{
    //a[0:n-1] using bubble
    for(int i = n;i>1;i--)
    {
        bubble(a,i);
    }
}

//T: Ω(n) Θ(n^2) O(n^2)
//S: O(1)