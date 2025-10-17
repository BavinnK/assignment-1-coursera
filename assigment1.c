
#include <stdio.h>
unsigned char arr_num []={23,90,2,46,4,77,89,34,102,111,11};
char max(unsigned char *ptr,int size){
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
}
char min(unsigned char *ptr,int size){
    unsigned char max=0;
    for (int i = 0; i < size; i++)
    {
        if (*ptr < max)
        {
            max = *ptr;
        }
        ptr++;   
    }
    return max;
}
int main(void){
    int size = (sizeof(arr_num)/sizeof(arr_num[0]));
    unsigned char max_num = max(arr_num,size);
    unsigned char min_num = min(arr_num,size);
    printf("max:%d/nmin:%d",max_num,min_num);
    return 0;
}