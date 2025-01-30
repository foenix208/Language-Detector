#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fichier;
    char buffer[500];
    char alpha[27];


    fichier = fopen("./data/text1.txt","r");
    if (fichier == NULL)
    {
        printf("Le fichier n'a pas pue etre ouvert");
        return 1;
    }
    if (fgets(buffer, 500, fichier) != NULL)    
        printf("%s\n", buffer);

    fclose(fichier);
    return 0;
}
