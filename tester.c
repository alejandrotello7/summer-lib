#include <unistd.h>
#include <stdio.h>
#include <sys/ioctl.h>

int main(void){


 int arg1 = 41;
 int arg2 = 1;
int result = 0;
result = summer_module(arg1, arg2);
printf("value: %d\n", result);

return 0;
}

