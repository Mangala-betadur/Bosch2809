#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
    char cVar1;
    long l var1;
    short sEmpID1;
    char cVar2;
    short sEmpID2;
};

int main()
{
    struct Employee_st empl_ot;
    printf("size is %d!\n",sizeof(struct Employee_st));
    return 0;
}
