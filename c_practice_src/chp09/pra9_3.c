#include <stdio.h>

#define NUMBER 10

int main(void)
{
    int i;
    int end_flg = 0;
    int cnt = 0;  
    char s[NUMBER][128];

    for(i = 0; i < NUMBER; i++){
        
        printf("s[%d]:", i);
        scanf("%s", s[i]);

        if(s[0] == "a"){
            printf("処理を中断する。\n");
            end_flg = 1;
            break;
        }

        if(i > 0){
            if(s[i] == "Paul"){
                break;
            }
            cnt++;
        }else{
            cnt++;
        }
        
    }

    if(end_flg == 0){
        for(i = 0; i < cnt; i++){
            printf("s[%d] = \"%s\"\n", i, s[i]);
        }       
    }
    
    return 0;
}