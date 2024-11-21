#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

int main()
{
    char k1,k2,k3,k4;
    char c1,c2,c3,c4;
    char sel;
    int sec = 0;

    while (true){
    FILE*fp;
    fp=fopen(".\\pass.dat","r");
    printf("選擇您的動作: (a.修改系統內建密碼) (b.測試輸入密碼)(c.離開),不分大小寫: ");
    scanf("%c",&sel);
    if(sel=='a'||sel=='A'){
        
        printf("請輸入新密碼\n");
        c1=getch();
        printf("x");
        c2=getch();
        printf("x");
        c3=getch();
        printf("x");
        c4=getch();
        printf("x\n");
        fp=fopen(".\\pass.dat","w");
        fprintf(fp,"%c%c%c%c",c1,c2,c3,c4);
        fclose(fp);
        printf("密碼修改完成\n");
        
    }else if(sel=='b'||sel=='B'){

        printf("請輸入密碼\n");
        c1=getch();
        printf("x");
        c2=getch();
        printf("x");
        c3=getch();
        printf("x");
        c4=getch();
        printf("x\n");
        fp=fopen(".\\pass.dat","r");
        fscanf(fp,"%c%c%c%c",&k1,&k2,&k3,&k4);
        if(c1==k1&c2==k2&c3==k3&c4==k4){
            printf("恭喜你，輸入正確\n");
        }else{
            printf("輸入錯誤，請重新輸入!\n");
        }
        fclose(fp);
        

    }else if(sel == 'c'|| sel=='C'){
        system("cls");
        for(int i = 3; i >= 1; i--){
            sec = i;
            printf("See you next time,it will close after %ds.",sec);
            Sleep(1000);
            system("cls");
        }
        exit(0);
        return 0;
    }
    }
   
}
