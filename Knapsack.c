#include<stdio.h>
int main()
{
    int items,capacity,best_value;
    int ind,itr,max_ind;
    int max;
    int i_weight[100],i_value[100];
    float unit_value[100];
    scanf("%d",&items);
    scanf("%d",&capacity);
    for(ind=0;ind<items;ind++)
    {
        scanf("%d",&i_value[ind]);
        scanf("%d",&i_weight[ind]);

    }

    for(itr=0;itr<items;itr++)
    {
        unit_value[itr]=(float)i_value[itr]/(float)i_weight[itr];
        printf("%f",unit_value[itr]);
    }
    while(capacity>0)
    {
      //3 50 100 50 120 30 60 20//1 10 500 30
        max=0;
        for(itr=0;itr<items;itr++)
            if(unit_value[itr]>max)
            {
                max=unit_value[itr];
                max_ind=itr;
            }


        if(capacity>=i_weight[max_ind])
        {
            best_value+=unit_value[max_ind]*i_weight[max_ind];
            capacity=capacity-i_weight[max_ind];
            unit_value[max_ind]=0;

        }
        else
        {
            best_value+=capacity*unit_value[max_ind];
            capacity=0;

        }
    }

   printf("\n%d",best_value);
}
