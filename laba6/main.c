#include <stdio.h>
#include <math.h>

int main()
{
    FILE *fp1, *fp2;
    
    fp1 = fopen("input.txt", "w");
    char s[10] = "abcdefghij";
    char s2[10] = "0123456789";
    
    for(int i = 0; i<20; i++){
        fprintf(fp1, "%c%c %c%c %c%c 19%c%c\n", s[rand()%10],s[rand()%10],s[rand()%10],s[rand()%10],s[rand()%10],s[rand()%10],s2[rand()%10],s2[rand()%10]);
    }
    
    
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");
    char s1[100];
    
    while(fgets(s1, 50, fp1)){
        char s2[100];
        strncpy(s2, s1+strlen(s1)-5, strlen(s1));
        if(atoi(s2) > 1980)
            fprintf(fp2, "%s", s1);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}
