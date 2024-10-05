#include<stdio.h>
#include<stdlib.h>
void main()
{
        arr1 = (int*)malloc(1000*sizeof(int));
        int i = 0;
        int find_arr1(){
        scanf("%d", arr1[i]);
        i++;
        find_arr1();
        return 0;
        }
        find_arr1();
}