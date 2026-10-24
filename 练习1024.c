#include<stdio.h>
#include<string.h>
int main(){
    char s[200];
    printf("请输入一行：");
    fgets(s, sizeof(s), stdin);
    int i;
    int j,k,l;
    j=0;
    k=0;    
    l=0;
    for (i=0;s[i]!='\0';i++){
        

       if(s[i]>='0'&&s[i]<='9'){
         j++;
       }
       else if((s[i]>='a'&&s[i]<='z')|| (s[i]>='A'&&s[i]<='Z')){
            k++;
       }
       else {
            l++;  
       }
    }
      
    
    printf("数字个数：%d\n",j);
    printf("字母个数：%d\n",k);
    printf("其他字符个数：%d\n",l);

    return 0;
}