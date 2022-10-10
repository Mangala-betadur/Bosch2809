#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    struct Employee_st *pNext ;
    short sEmpID ;
};

int main()
{   int position,i;
    struct Employee_st emp1_ot, emp2_ot, emp3_ot,emp4_ot,emp5_ot, *pEmp_ot,*pEmpHead_ot;

    emp1_ot.sEmpID= 1 ;
    emp1_ot.pNext = &emp2_ot ;
    emp2_ot.sEmpID= 2 ;
    emp2_ot.pNext = &emp3_ot ;
    emp3_ot.sEmpID= 3 ;
    emp3_ot.pNext = &emp4_ot;
    emp4_ot.sEmpID= 4 ;
    emp4_ot.pNext = NULL;
    emp5_ot.sEmpID= 5 ;

    printf("Enter the position to enter : ");
    scanf("%d",&position) ;

    pEmpHead_ot=&emp1_ot ;
    pEmp_ot =&emp1_ot ;
    if(position==0)
    {
      emp5_ot.pNext = pEmp_ot ;
      pEmpHead_ot = &emp5_ot ;
    }
    else
    {

        for(i=1; ( ( i<position) && (pEmp_ot->pNext !=NULL) );i++)
    {
        pEmp_ot = pEmp_ot->pNext ;
    }
     emp5_ot.pNext = pEmp_ot->pNext ;
     pEmp_ot->pNext = &emp5_ot ;
}
 for(pEmp_ot = pEmpHead_ot; pEmp_ot!=NULL; pEmp_ot= pEmp_ot->pNext )
    {
         printf("pEmp_ot : empid=%d, Pnext=%p\n",pEmp_ot->sEmpID, pEmp_ot->pNext );
    }
 //printf("pEmp_ot : empid=%d, Pnext=%p, pPrev=%p \n",pEmp_ot->sEmpID, pEmp_ot->pNext,pEmp_ot->pPrev );


       return 0;
}
