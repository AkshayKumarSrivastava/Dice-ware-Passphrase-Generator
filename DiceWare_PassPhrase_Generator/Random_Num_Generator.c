#include<stdio.h>
#include<windows.h>
#include<string.h>
generate(int range)
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    if(stime.wMilliseconds%17==0)
        {
            stime.wMilliseconds=546;
        }
    delay(stime.wMilliseconds%17);
    return(stime.wMilliseconds%range);
}
