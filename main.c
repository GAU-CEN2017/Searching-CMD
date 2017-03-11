#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void menu();
char intcheck(char a[100]){
    if (a[0]=='1' ||a[0]=='2')
        return a[0];
    else
        return 'f';
}
void ara(){
    system("cls");
     char s[10],a[100],code[10],c=0;
    printf("Please Enter a Serching tags :");
    scanf("%s",s);

 FILE *p;
   p=fopen("a.txt","r");
   while(fscanf(p,"%s",a)!=EOF)
   {
       if (a[strlen(a)-1]=='.')
       {
           fscanf(p,"%s",code);
           if(strcmp(code,s)==0){
                c++;
          break;
}

       }


   }
   if (c==0)
       {
        printf("Upps !!\n");
       }
else{
    printf("%s : ",code);
   while(fscanf(p,"%s",a)!=EOF  ){
    printf("%s ",a);
    if(a[strlen(a)-1]=='.'){
            printf("\n");
        break;
    }}}
fclose(p);


system("pause");
menu();
}
void menu(){
    system("cls");
    char s[100];
printf("Search a CMD Command \n 1-Search a CMD tag\n 2-Exit\n--------------------\nSelected : ");
scanf("%s",&s);
if(intcheck(s)=='f')
{
    printf("Wrong input\n");
    system("pause");

}
else{
    s[0]-=48;
}
switch(s[0])
{
    case 1:ara();
    break;
    case 2:break;
    default:menu();
    break;
}

}
int main()
{
    system("color 3F");
    menu();

    return 0;
}
