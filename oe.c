#include <stdio.h>
int main()
{
    int a[10],k,n,even=0,odd=0,total;
   
    printf("Enter size array : ");
    scanf("%d",&n);
 
    printf("Enter array : ");
    scanf("%d",&a);
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
 
     for(k=0;k<n;k++)
    {
          if(a[k]%2==0)
          even++;
          else
          odd++;
		           
    }
     printf("total even num array: %d",even);
     printf("\n total odd num array: %d",odd);
     total=even+odd;
     printf("\ntotal :%d",total);
}