#include <stdio.h>
int main(){
    FILE *fp;char ch[100];FILE *fd;
    fp = fopen("NEWPLANET.txt","w");
    printf("Enter the message below\n");
    fgets(ch,100,stdin);
    fputs(ch,fp);
    printf("Done");
    fclose(fp);
    fd = fopen("NEWPLANET.txt","r");
    char c ;
    while((c=getc(fd))!=EOF){
        printf("%c",c);}
    fclose(fd);
    return 0;
}