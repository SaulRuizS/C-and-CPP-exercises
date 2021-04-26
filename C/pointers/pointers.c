#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    char *race[20];
    char sex[8];

}PET;

typedef struct
{
    PET pet;
    int height;
}DOG;

typedef struct
{
    PET pet;
    int height;
}CAT;

void dog_print ()
{
    char doggie[4][4] = {{'D',' ','D','\n'},{'N','-','N','\n'},{'(',' ',')','\n'},{'(','Y',')','\n'}};
    int i, j, range;
    range = 4;
    for (i = 0; i < range; i++){
        for (j = 0; j < range; j++)
        {
            printf("%c", doggie[i][j]);   
        }
        
    }    
}

int main(int argc, char const *argv[])
{
    CAT cat = {{.name = "Mishis", .age = 5, .sex = "Male"}, 45};
    DOG dog = {{"Firulais", 7, "Pitbull", "Female"}, 60};

    //printf("Introduce the race: ");
    //scanf("%s", &cat.pet.race);

    //printf("%s", cat.pet.race);

    dog_print();
    
    return 0;
}
