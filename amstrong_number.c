#include<stdio.h>
int main()
{
    int num;
    int check=0,sqr,rem,result=0;
    printf("Enter the number to be checked: ");
    scanf("%d",&num); /* The input number is stoed in here at the num variable.*/
    check=num; /* check is the variable where the input number is beign stored for the reff. */
    while(num>0)
    {
        rem=num%10; /* The reminder for finding the single single numbers*/
        sqr=(rem*rem*rem); /*The place for storing the square of the single sinngle numbers*/
        result=sqr+result;
        num=num/10;
    }
    if(check==result)
    {
        printf("The number %d is an Armstrong number !!",check);
    }
    else
    {
        printf("The number %d is not an Armstrong number !!",check);
    }
}
