#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    struct Employee_st *pNext ;
    struct Employee_st *pPrev ;
    short sEmpID ;
};

int main()
{
    struct Employee_st emp1_ot, emp2_ot, emp3_ot,emp4_ot,emp5_ot, *pEmp_ot;
    emp1_ot.sEmpID= 1 ;
    emp1_ot.pNext = &emp2_ot ;
    emp1_ot.pPrev = NULL ;
    emp2_ot.sEmpID= 2 ;
    emp2_ot.pNext = &emp3_ot ;
    emp2_ot.pPrev = &emp1_ot ;
    emp3_ot.sEmpID= 3 ;
    emp3_ot.pNext = &emp4_ot;
    emp3_ot.pPrev = &emp2_ot ;
    emp4_ot.sEmpID= 4 ;
    emp4_ot.pNext = NULL;
    emp4_ot.pPrev = &emp3_ot ;

    for(pEmp_ot = &emp1_ot ; pEmp_ot->pNext !=NULL; pEmp_ot= pEmp_ot->pNext )
    {
         printf("pEmp_ot : empid=%d, Pnext=%p, pPrev=%p \n",pEmp_ot->sEmpID, pEmp_ot->pNext,pEmp_ot->pPrev );
    }
 printf("pEmp_ot : empid=%d, Pnext=%p, pPrev=%p \n",pEmp_ot->sEmpID, pEmp_ot->pNext,pEmp_ot->pPrev );


       return 0;
}

