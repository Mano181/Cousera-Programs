#include<stdio.h>
int main()
{
    int *arr,size,ind,max,secLargest,itr;
    max=0;
    secLargest=0;
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    for(ind=0;ind<size;scanf("%d",&arr[ind++]));
    for(itr=0;itr<size;itr++)
        if(arr[itr]>max)
        {
            secLargest=max;
            max=arr[itr];
        }
        else
        {
            if(arr[itr]>secLargest)
                secLargest=arr[itr];
        }
    printf("%lld",(long long int)secLargest*max);
}
