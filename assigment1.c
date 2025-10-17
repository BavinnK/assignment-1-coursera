
#include <stdio.h>
unsigned char arr_num []={23,90,2,46,4,77,89,34,1,102,111,11};
//fining max in the array
char find_maximum(unsigned char *ptr,int size){
    unsigned char max=0;
    for (int i = 0; i < size; i++)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
        ptr++;   
    }
    return max;
}//end max func


//finding min number in the array
char find_minimum(unsigned char *ptr,int size){
    unsigned char min=*ptr;
    for (int i = 0; i < size; i++)
    {
        if (*ptr < min)
        {
            min = *ptr;
        }
        ptr++;   
    }
    return min;
}// end min func
//signed char find_median() {}
//for sort array func i used bubble sort algorithm
void sort_array(unsigned char *ptr,int size){

    for (int i = 0; i < size-1; i++)
    {
        for (int  j = 0; j < size-1-i ; j++)
        {
            if (ptr[j] > ptr[j+1])
            {
                unsigned char temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
            
        }
        
        
    }
    
}
void print_array(unsigned char *ptr,int size){
    
    for (int i = 0; i < size; i++)
    {
        printf(" %d ",*ptr++);
    }
    printf("\n");
    
}


int main(void){
    int size = (sizeof(arr_num)/sizeof(arr_num[0]));
    printf("Before sorting: ");
    print_array(arr_num,size);

    sort_array(arr_num,size);
    printf("after sorting:  ");
    print_array(arr_num,size);
    unsigned char max_num = find_maximum(arr_num,size);
    unsigned char min_num = find_minimum(arr_num,size);
    printf("\nmax:%d\nmin:%d\n",max_num,min_num);
    return 0;
}