#include <stdio.h>
int main() {
    FILE *fp;
    char str[100];
    fp = fopen("Hello.txt","w");
    fprintf(fp,"Hello File");
    fclose(fp);

    fp = fopen("test.txt","r");
    fgets(str,100,fp);
    printf("%s",str);
    fclose(fp);
    return 0;
}

