#include<stdio.h>
void main()

{
    int a[]={1,2,3,4,5};
    int *ptr , i;
    ptr = a;
    for(i=0;i<5;i++)
    {
    printf("address = %u\n",&a[i]);
    printf("value is %d and address is %u\n",a[i],ptr);
    }
}
