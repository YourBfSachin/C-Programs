// Demonstrate a program in C to create a data file named score.dat to store students’ information with Reg_no, name, gender, and address. The program should ask the user to continue or not. When finished, the program should also display all the records in the proper format

#include <stdio.h>
int main() {
  
 char Reg_no[10],  choice ;
char name[15];
char gender[8];
char address[30];
  
  FILE *sr;
  sr=fopen("score.dat","a");
do{
  printf("Enter the registration no= ");
  scanf("%s",Reg_no);

  printf("Enter the name= ");
  scanf("%s",name);

  printf("Enter the gender= ");
  scanf("%s",gender);

  printf("Enter the address ");
  scanf("%s",address);

  printf("Do you want to continue (y/n) ? ");
  scanf(" %c",&choice);

  fprintf(sr,"  %s\t %s\t %s\t %s\n",Reg_no,name,gender,address);
  
}while(choice=='Y'||choice=='y');

  fclose(sr);

  FILE *sn;
  sn=fopen("score.dat","r");
  printf("\n Reg_no \t Name \tgender \taddress \n");
  while (fscanf(sn,"%s %s %s %s",Reg_no,name,gender,address)!=EOF)
  {
    printf(" %s\t %s\t %s\t %s\n",Reg_no,name,gender,address);
  }
  fclose(sn);
  
 
  return 0;
}