#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpID ;
    char cAge ;
    short sEmpID2 ;
};
struct Department_st
{
   struct Employee_st emp1_ot ;
    long lVar1 ;
};
union union_ut
{
    struct Employee_st emp1_ot ;
    long lVar1 ;
};

int main()
{
    printf("struct emp size is %d !\n",sizeof(struct Employee_st));
    printf("struct dept size is %d !\n",sizeof(struct Department_st));
    printf("union size is %d !\n",sizeof(union union_ut));
    return 0;
}
