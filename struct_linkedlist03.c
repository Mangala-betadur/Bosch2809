#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    struct Employee_st *pNext ;
    short sEmpID ;
};

int main()
{
    struct Employee_st emp1_ot, emp2_ot, emp3_ot,emp4_ot, *pEmp_ot;
    emp1_ot.sEmpID= 1 ;
    emp1_ot.pNext = &emp2_ot ;
    emp2_ot.sEmpID= 2 ;
    emp2_ot.pNext = &emp3_ot ;
    emp3_ot.sEmpID= 3 ;
    emp3_ot.pNext = &emp4_ot;
     emp3_ot.sEmpID= 4 ;
    emp3_ot.pNext = NULL;
    printf("emp1 addr=%p: EmpID %d pNext=%p \n",emp1_ot,emp1_ot.sEmpID, emp1_ot.pNext);
    printf("emp2 addr=%p: EmpID %d pNext=%p \n",emp2_ot,emp2_ot.sEmpID, emp2_ot.pNext);
    printf("emp3 addr=%p: EmpID %d pNext=%p \n",emp3_ot,emp3_ot.sEmpID, emp3_ot.pNext);
    printf("emp4 addr=%p: EmpID %d pNext=%p \n",emp4_ot,emp4_ot.sEmpID, emp4_ot.pNext);
    for(pEmp_ot = &emp1_ot ; pEmp_ot->pNext !=NULL; pEmp_ot= pEmp_ot->pNext )
    {
         printf("pEmp_ot : empid=%d, Pnext=%p \n",pEmp_ot->sEmpID, pEmp_ot->pNext );
    }
    return 0;
}
