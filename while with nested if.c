#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/*HARVY JONES PONTILLAS DICT 1-2*/

int main()
{   int hrsw;
    float hrate, salary, tsalary;
    tsalary=0;

    while(hrsw!=-1)
    {
        p("ENTER HOURS WORKED(-1 TO END): ");
        s("%d",&hrsw);
        if(hrsw==-1)
        {
            break;
        }
        else if(hrsw>40)
        {
            p("ENTER HOURLY RATE OF THE WORKER($00.00): ");
            s("%f",&hrate);
            salary=(hrsw*hrate)+(hrate/2);
            p("THE SALARY IS: $%.2f", salary);
        }
        else if(hrsw<=40)
        {
            p("ENTER HOURLY RATE OF THE WORKER($00.00): ");
            s("%f",&hrate);
            salary=hrsw*hrate;
            p("THE SALARY IS: $%.2f", salary);
        }
        p("\n\n");
        tsalary=tsalary+salary;
    }
    p("\nTHE TOTAL SALARY OF ALL EMPLOYEES: $%.2f\n",tsalary);
    p("GOOD DAY! THANK YOU FOR USING THE SYSTEM!");
getch();
    return 0;
}
