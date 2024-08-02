#include <stdio.h>
int book_id;
int due_date;
int return_date;
int fine;
int days_overdue;
int main() {
    //prompts user to enter required data
printf("Enter Book ID:");
scanf("%d",&book_id);
printf("Enter the return date:");
scanf("%d", &return_date);
printf("Enter the due_date:");
scanf("%d",&due_date);
//gives the conditions to be met
days_overdue=return_date-due_date;
if( days_overdue >=1&& days_overdue<=7){
    fine=days_overdue*20;}
    
    else if( days_overdue >=8 && days_overdue<=14){
    fine=days_overdue*50;}
    
else if( days_overdue >=15){
    fine=days_overdue*100;}
    printf("the days overdue is/are %d\n", days_overdue);
    printf("the fine is %d",fine);


    return 0;
}