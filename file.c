#include<stdio.h>
int main(){FILE*fp;
    fp=fopen("helllo.txt","w");
    fprintf(fp,"hello world");
    fprintf(fp,"\nHow are you all");
    fclose(fp);return 0;

}