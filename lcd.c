#include "lcd.h"


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>



int fd = -1;
int *fd_addr;

void lcd_init(void)
{
    fd = open("/dev/fb0", O_RDWR);
    if( fd == -1){
        perror("open led faild\n");
    }

    fd_addr = mmap(NULL,800*480*4,);
}