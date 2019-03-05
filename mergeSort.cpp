void merge_sort(int array[],int helper[],int left,int right)
{
    if(left>=right)
        return;

    //divide & conquer:array will be devided into left part and right part
    //both parts will be sorted by the calling merge_sort
    int mid = right -(right-left)/2;
    merge_sort(array,helper,left,mid);
    merge_sort(array,helper,mid+1,right);

    //merge two part into one
    int helperLeft = left;
    int helperRight = mid + 1;
    int curr = left;
    for(int i = left; i <= right; i++)
        helper[i] = array[i];//copy

    while( helperLeft <= mid && helperRight <= right ){
        if(helper[helperLeft] <= helper[helperRight])
            array[curr++] = helper[helperLeft++];
        else
            array[curr++] = helper[helperRight++]; 
    }//compare each element in two parts,then put the right one into array sortly

    //there are some elements remaining in left part.
    //put them into the right side    
    while( helperLeft <= mid){
        array[curr++] = helper[helperLeft++];
    }
}

//T:O(nlogn)
//S:O(n)