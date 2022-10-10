#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
    short sEmpID ;
    char cAge;
};
struct Department_st
{
    short sDeptId ;
    struct Employee_st emp1_ot,emp2_ot,emp3_ot ;
};
int main()
{
    struct Department_st dep1_ot,dep2_ot,dep3_ot;
    dep1_ot.sDeptId=420;
    dep1_ot.emp1_ot.sEmpID=1111;
    dep1_ot.emp1_ot.cAge=11;
    dep1_ot.emp2_ot.sEmpID=2222;
    dep1_ot.emp2_ot.cAge=22;

    dep2_ot.sDeptId=840;
    dep2_ot.emp1_ot.sEmpID=3333;
    dep2_ot.emp1_ot.cAge=33;
    dep2_ot.emp2_ot.sEmpID=4444;
    dep2_ot.emp2_ot.cAge=44;

    dep3_ot.sDeptId=900;
    dep3_ot.emp1_ot.sEmpID=5555;
    dep3_ot.emp1_ot.cAge=55;
    dep3_ot.emp2_ot.sEmpID=6666;
    dep2_ot.emp2_ot.cAge=66;

    printf("size is %d!\n",sizeof(struct Department_st));
    printf("size is %d!\n",sizeof(struct Employee_st);
    return 0;
}
