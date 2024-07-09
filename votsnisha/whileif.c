do
{
printf("Enter an operator to calculate (+,-,*,/)\tor\t,if you want to exit press :- x\t \t:- ");
scanf("%c", &operator);

if(operator =='x'){
printf("Exiting the program \n");
break;

}
printf("Enter two number: ");
scanf("%d %d", &num1,&num2);
}
while (getchar() != 'x');

// here will be the switch case
//then
while(operator != 'x');