/* 
LAB 2
Three individuals Sam, Sara, and Daniel work at a Company.

You are part of the payroll department. Each employee has a salary, number of dependents (including themselves). The employee’s deduction is a function of the number of dependents, 
the employee’s health insurance contribution and the federal tax will be functions of the salary. You are to write a program which will prompt the user to enter a salary for the 
employees and their dependents. From the inputs you should compute Sam’s deduction, health insurance contribution, federal tax and take home pay and output it in a formal manner 
as illustrated below. Next you should compute Sara’s deduction, health insurance contribution, federal tax and take home pay and output it in a formal manner as illustrated below. 
Next you should compute Daniel’s deduction, health insurance contribution, federal tax and take home pay and output it in a formal manner as illustrated below. Lastly you should output 
the totals of each category data should be aligned (left justified).

The deduction is equal to 250.00*no. of dependents
The health insurance contribution is 10*(per hundred dollars of salary, print two decimal places)
The fed tax is 30% of (salary –deduction –health ins contribution)
Take home pay = salary -- fed tax-- health ins contribution
Format all output in columns. Align columns (L) using width in the printf function DO NOT USE TAB
Note your calculation may have round-off error. For this lab you are not responsible for ensuring correctness concerning round-off error

Program plan/flow:

Always should do this before starting to program. But we also need to think about data. IN C we need to delcare data before-hand... 

PROPMT USER FOR EMPLYEE'S SALARIES ---> PROMPT USER FOR NO. OF DEPENDANTS ---> CALCULATE DEDUCTION, HEALTH INS., FEDERAL TAX, AND TAKE HOME PAY ---> CALCULATE TOTALS ---> REPORT DATA (PRINT DATA OUT) 
  printf("Enter for Sam: ")                 printf("Enter dependents: ")            for each employee .... calculate all these:                                                printf( with formatting )
    SAM_SALARY (double)                         SAM_DEPTS (int)                         DEDUCTION (double)
    SARA_SALARY (double)                        SARA_DEPTS (int)                        TAX (double)
    DANIEL_SALARY (double)                      DANIEL_DEPTS (int)                      PAY (double)
                                                                                        TOTAL_SALARY (double)
                                                                                        TOTAL_DEPTS (int)              
*/ 

#include <stdio.h>


int main(void) {
    
    /*
      Declare the variables and data needed for the program
    */

    // employee salaries
    double sam_salary;
    double sara_salary;
    double daniel_salary;
    double total_salary;

    // employee deductions
    double sam_deduction;
    double sara_deduction;
    double daniel_deduction;
    double total_deduction;
    
    // employee dependants
    int sam_depts;
    int sara_depts;
    int daniel_depts;
    int total_depts;

    // emplyee health insurance contribution
    double sam_health;
    double sara_health;
    double daniel_health;
    double total_health;
    
    // employee federal tax
    double sam_tax;
    double sara_tax;
    double daniel_tax;
    double total_tax;

    // employee take home pay
    double sam_homepay;
    double sara_homepay;
    double daniel_homepay;
    double total_homepay;

    // PROMP FOR EMPLOYEE SALARIES:
    printf("Enter the salary for Sam: ");
    scanf(" %lf", &sam_salary);
    //     ^ this white space is only needed in MAC -- not needed in UNIX systems... 
    
    printf("Enter the salary for sara: ");
    scanf(" %lf", &sara_salary);
    //     ^ this white space is only needed in MAC -- not needed in UNIX systems...

    printf("Enter the salary for daniel: ");
    scanf(" %lf", &daniel_salary);
    //     ^ this white space is only needed in MAC -- not needed in UNIX systems...

    // CALCULATE TOTAL SALARIES
    total_salary = sam_salary + sara_salary + daniel_salary;
    
    // PROMPT FOR EMPLOYEE DEPENDANTS
    printf("Enter the number of dependants for Sam: ");
    scanf(" %d", &sam_depts);
    //     ^ this white space is only needed in MAC -- not needed in UNIX systems...
    
    printf("Enter the number of dependants for Sara: ");
    scanf(" %d", &sara_depts);
    //     ^ this white space is only needed in MAC -- not needed in UNIX systems...
    
    printf("Enter the number of depandants for Daniel: ");
    scanf(" %d", &daniel_depts);
    //     ^ this white space is only needed in MAC -- not needed in UNIX systems...
    
    // calculate total depts
    total_depts = sam_depts + sara_depts + daniel_depts;
    

    // CALCULATE DEDUCTIONS, HEALTH INSURANCE, TAKE HOME PAY, and TAX FOR EMPLOYEES

    // The deduction is equal to 250.00*no. of dependents
    sam_deduction = 250.00 * sam_depts;
    sara_deduction = 250.00 * sara_depts;
    daniel_deduction = 250.00 * daniel_depts;
    total_deduction = sam_deduction + sara_deduction + daniel_deduction;

    // The health insurance contribution is 10% of salary
    sam_health = sam_salary * 0.1;
    sara_health = sara_salary * 0.1;
    daniel_health = daniel_salary * 0.1;
    total_health = sam_health+sara_health+daniel_health ;

    // The fed tax is 30% of (salary –deduction –health ins contribution)
    sam_tax = 0.3 * (sam_salary - sam_deduction - sam_health);
    sara_tax = 0.3 * (sara_salary - sara_deduction - sara_health );
    daniel_tax = 0.3*(daniel_salary-daniel_deduction-daniel_health);
    total_tax = sam_tax + sara_tax + daniel_tax;

    // Take home pay = salary -- fed tax-- health ins contribution
    sam_homepay = sam_salary - sam_tax - sam_health;
    sara_homepay = sara_salary - sara_salary - sara_health;
    daniel_homepay = daniel_salary - daniel_salary - daniel_salary;
    total_homepay = sam_homepay + sara_homepay + daniel_homepay;

    // REPORT DATA
    /* 
    Name <---  ---> no. depts <---  ---> salary <---  ---> deduction <---  ---> Health ins <---  ---> Federal Tax <---  ---> Pay
    Sam             XXXXXX               XXXXXX                
    Sara            XXXXXX               XXXXXX                      ... etc 
    Daniel          XXXXXX               XXXXXX
    Total           XXXXXX               XXXXXX
    */

   // round off numbers using string formatting (%-14.2f) and Add line for total
    printf("%-6s %-14s %-14s %-14s %-14s %-14s %-14s\n","Name", "No. Depts.", "Salary", "Deduction", "Health Ins.", "Federal Tax", "Take Home Pay");
    printf("%-6s %-14d %-14lf %-14lf %-14lf %-14lf %-14lf\n","Sam", sam_depts, sam_salary, sam_deduction, sam_health, sam_tax, sam_homepay);
    printf("%-6s %-14d %-14lf %-14lf %-14lf %-14lf %-14lf\n","Sara", sara_depts, sara_salary, sara_deduction, sara_health, sara_tax, sara_homepay);
    printf("%-6s %-14d %-14lf %-14lf %-14lf %-14lf %-14lf\n","Daniel", daniel_depts, daniel_salary, daniel_deduction, daniel_health, daniel_tax, daniel_homepay);


    return 0;
}
