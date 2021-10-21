    #include<stdio.h>
    int main()
    {
    int array[100],n,t;
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);//n=4
    printf("enter the elements:");
    for(int i=0;i<=n-1;i++)//input
    {
    scanf("%d",&array[i]);
    }
    /*bubble sort*/
    for(int i=0;i<=n-1;i++)
    {
    for(int j=0;j<n-i-1;j++)
    {
    if(array[j]>array[j+1])
    {
    t=array[j];
    array[j]=array[j+1];
    array[j+1]=t;
    }
    }
    }
    printf("sorted array is:\n");
    for(int i=0;i<=n-1;i++)
    {
    printf("%d",array[i]);
    }
    }
