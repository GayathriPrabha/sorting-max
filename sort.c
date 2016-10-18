#include <stdio.h>

int main(void) {
    int arr[6]={8,4,1,9,6,2};
    int sort[6];
    int ctr, count, min;
    for(ctr=0;ctr<sizeof(arr)/sizeof(arr[0]);ctr++)
    {
        sort[ctr] = arr[ctr];
    }
    for(ctr=0;ctr<sizeof(arr)/sizeof(arr[0]);ctr++)
    {
        for(count=ctr+1;count<sizeof(arr)/sizeof(arr[0]);count++)
        {
            if(sort[count]<sort[ctr])
            {
               min=sort[count];
               sort[count]=sort[ctr];
               sort[ctr]=min;
            }
        }
    }
    for(ctr=0;ctr<sizeof(arr)/sizeof(arr[0]);ctr++)
    {
        for(count=0;count<sizeof(arr)/sizeof(arr[0]);count++)
        {
        if(arr[ctr]==sort[count])
        {
            printf("%d --> %d\n",arr[ctr],sort[count+1]);
        }
        }
    }
	return 0;
}

