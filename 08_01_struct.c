#include <stdio.h>
typedef struct student 
{
  char name[40],studentid[20],section[20],contact[20]; 
}
student; 
typedef struct account
{
  char holdername[40],accountno[20],ifsc[50],type[15];
}
account;
int main()
{
   printf("vishal ansari section-N std id- 200111238\n");
  student s; 
  account a; 
  printf("\nEnter Students details\n");
  printf("enter the name of the student :- ");
  fgets(s.name,40,stdin);
  printf("enter the student id :- ");
  fgets(s.studentid,20,stdin);
  printf("enter the section :- ");
  fgets(s.section,20,stdin);
  printf("enter the contact no :- ");
  fgets(s.contact,20,stdin);
  
  printf("\n Enter the Bank Account details :\n");
  printf("enter account holdename:-  ");
  fgets(a.holdername,40,stdin);
  printf("enter account no:-  ");
  fgets(a.accountno,20,stdin);
  printf("enter the IFSC code :- ");
  fgets(a.ifsc,15,stdin);
  printf("enter the account type :- ");
  fgets(a.type,15,stdin);

  printf("\nStudents Data\n");
  printf("Name:%s",s.name);
  printf("Student ID:%s",s.studentid);
  printf("Section: %s",s.section);
  printf("Contact:%s",s.contact);
  printf("\n\n");

  printf("Account Holder Data\n");
  printf("Account Holder Name :%s",a.holdername);
  printf("Account no:%s",a.accountno);
  printf("IFSC Code:%s",a.ifsc);
  printf("Account Type :%s",a.type); 
  return 0;
}