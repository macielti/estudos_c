/* Program 3.7 Confused recruiting policy */
#include <stdio.h>

int main(void)
{
    int age = 0;
    int college = 0;
    int subject = 0;
    _Bool interview = 0;
    
    printf("\nWhat college? 1 for Harvard, 2 for Yale, 3 for other: ");
    scanf("%d", &college);
    
    printf("\nWhat subject? 1 for Chemistry, 2 for economics, 3 for other: ");
    scanf("%d", &subject);
    
    printf("\nHow old is the aplicant? ");
    scanf("%d", &age);
    
    if(((age > 25) && (subject = 1)) && (college==3 || college==1))
    {
        interview = 1;
    }
    
    if((college==2)&&(subject==1))
    {
        interview = 1;
    }
    
    if(((college==1)&&(subject == 2))&&(age<28))
    {
        interview = 1;
    }
    
    if(((college==2) && (age > 25))&&!(subject==1))
    {
        interview = 1;
    }
    
    if(interview)
    {
        printf("\n\nGive 'em an interview");
    }
    else
        printf("\n\nReject ' em");
    
    return 0;
    
}
