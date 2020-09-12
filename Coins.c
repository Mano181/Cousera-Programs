#include<stdio.h>
int main()
{
    int tot_coins,temp,amount;
    int coins_value[5],coin_types;
    int itr,ind;
    int swap_temp;
    tot_coins=0;
    scanf("%d",&coin_types);
    for(itr=0;itr<coin_types;scanf("%d",&coins_value[itr++]));
    for(ind=0;ind<coin_types;ind++)
    {
        for(itr=ind+1;itr<coin_types;itr++)
            if(coins_value[ind]<coins_value[itr])
            {
                swap_temp=coins_value[ind];
                coins_value[ind]=coins_value[itr];
                coins_value[itr]=swap_temp;
            }
    }
    scanf("%d",&amount);
    temp=amount;
    for(ind=0;ind<coin_types;ind++)
    {
        while(temp>=coins_value[ind])
        {
            temp=temp%coins_value[ind];
            tot_coins+=amount/coins_value[ind];
        }
    amount=temp;
    }
    printf("%d",tot_coins);
}
