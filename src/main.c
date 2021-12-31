/*
  * 下边是编译命令
  * gcc x11.c -o output -I/usr/X11R6/include -L/usr/X11R6/lib -lX11
  */

#include "event.h"

#include "xcursor_remap.h"

int main(void)
{
    xc_left_ptr_to_watch(0);
    return 0;
 }