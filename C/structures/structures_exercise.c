#include <stdio.h>

typedef struct              //This is how you can define an structure
{
    char sex[7];           //Any type of varibles can be included
    char name[40];
    int age;
    int height;

}HUMAN;                     //In this case because the typedef prefix is used, 
                            //the name of the structure must be writen in the end 

//Typedef is a easist way to make a structure, this way the prefix "struct" is no longer needed
struct ENGINEER             //In this case the typedef prefix is not used, so the name must be writen at the begining
{
    int graduated;
    char grade[20];
    char speciality[40];
    int years_working;
};                          //Really important to put semicolon!!!

int main(int argc, char const *argv[])  //argc = Arguments Count, the number of arguments in a line including the file name
{                                       //argv = Argument Vector, where strings received are stored
    char graduatedAnswer;
    HUMAN human;
    struct ENGINEER engineer;

    /*
    int humanSize = sizeof(human);
    int engineerSize = sizeof(engineer);

    printf("%d\n%d\n", humanSize, engineerSize);
    */

    printf("\nSex: ");    
    scanf("%s", human.sex);
    printf("\nName: ");
    scanf("%s", human.name);
    printf("\nAge: ");
    scanf("%d", &human.age);
    printf("\nHeight: ");
    scanf("%d", &human.height);
    
    printf("\nAre you graduated from Engineering? Write 'y' for YES or 'n' for NO: ");
    scanf("%s", &graduatedAnswer);

    if (graduatedAnswer == 'y')
    {
        engineer.graduated = 1;  

        if (engineer.graduated == 1)
        {
            printf("\nWhat is your profesional grade? ");
            scanf("%s", &engineer.grade);
            printf("\nWhat is your speciality? ");
            scanf("%s", &engineer.speciality);
            printf("\nHow many years have you been working as an engineer? ");
            scanf("%d", &engineer.years_working);
        }
    }
    if (graduatedAnswer == 'y' || graduatedAnswer == 'n')
    {
        printf("Your resume is:\nSex: %s\nName: %s\nAge: %d\nHeight: %d\n", human.sex, human.name, human.age, human.height);

        if (engineer.graduated == 1)
        {
            printf("Grade: %s\nSpeciality: %s\nYears Working: %d years\n", engineer.grade, engineer.speciality, engineer.years_working);
        }
    }

    return 0;
}
