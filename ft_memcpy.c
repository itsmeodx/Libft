#include <unistd.h>
#include <stdio.h>
void *ft_memcpy(void *dest, void *src, size_t n){
    size_t i;
    i = 0;
    char *destino = (char*)dest;
    char *sourcino = (char*)src; 
        while(i < n)
        {
            destino[i] = sourcino[i];
            i++;
        }
        return dest;
}

// int main(void){
//     char dx[] = "ivebeenthroughi9";
//     char dxdst[] = "heheheffffffffffffff";
//     ft_memcpy(dxdst + 3,dx,7);
//     printf("%s",dxdst);
// }