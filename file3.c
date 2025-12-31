#include <stdio.h>
int user(){
    char ch[100];
    FILE*fp;
    fp = fopen("Newworld.txt","w");
    printf("ENTER THE MESSAGE\n");
    fgets(ch,100,stdin);
    fputs(ch,fp);
    fclose(fp);return 0;

}
int read(){
    char c;
    FILE*fp;
    fp = fopen("Newworld.txt","r");
    while ((c=fgetc(fp))!=EOF){
        printf("%c",c);
    }return 0;
}
int main(){
    
}