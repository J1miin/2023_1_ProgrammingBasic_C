#include <stdio.h>
#define COLS 2
#define ROWS 3
int iAccountInfo[ROWS][COLS]={0};
int checkAccount;
checkAccount=0;
void accountOpening (int inputAccount, int inputMoney);
void deposit (int inputAccount, int inputMoney);
void withDraw (int inputAccount, int inputMoney);
void printAccount();
int main(){
    int iSelectMenu, inputAccount, inputMoney;
    int i,j;
    // int checkAccount;
    // checkAccount=0;

    while (1){
        printf("---menu---\n");
        printf("1.계좌개설 \n");
        printf("2.입금 \n");
        printf("3.출금 \n");
        printf("4.계좌 정보 전체 출력 \n");
        printf("5.프로그램 종료 \n");
        printf("선택:");
        scanf("%d",&iSelectMenu);

        if (iSelectMenu==1){
            printf("[계좌개설]\n");
            printf("계좌ID:");
            scanf("%d",&inputAccount);
            printf("입금액:");
            scanf("%d",&inputMoney);

            accountOpening(inputAccount, inputMoney);
            
        }else if (iSelectMenu==2){
            printf("[입 금]\n");
            printf("계좌ID:");
            scanf("%d",&inputAccount);
            printf("입금액:");
            scanf("%d",&inputMoney);
            
            deposit (inputAccount, inputMoney);
            
        }else if (iSelectMenu==3){
            printf("[출 금]\n");
            printf("계좌ID:");
            scanf("%d",&inputAccount);
            printf("출금액:");
            scanf("%d",&inputMoney);

            withDraw(inputAccount,inputMoney);

        }else if (iSelectMenu==4){
            printAccount();
        }else if (iSelectMenu==5){
            printf("프로그램을 종료합니다.\n");
            break;
        }else{
            printf("잘못된 입력입니다\n");
        }
    }
    
    return 0;
}

void accountOpening (int inputAccount, int inputMoney){
    int i,j;
    
   
    for (i=0;i<ROWS;++i){
        if (iAccountInfo[i][0]==0 ){
            if (inputMoney<0){
                printf("**계좌 개설 실패**\n");
                printf("입금액이 음수일 수 없습니다.\n");
                break;
            }else {
                iAccountInfo[i][0]=inputAccount;
                iAccountInfo[i][1]=inputMoney;
                printf("**계좌 개설 성공!**\n");                
                printf("계좌ID: %d ,잔액: %d \n",iAccountInfo[i][0],iAccountInfo[i][1]);
                checkAccount+=1;
                break;
            }
        }
        if (iAccountInfo[i][0]==inputAccount){
            printf("**계좌 개설 실패**\n");
            printf("이미 개설된 계좌입니다.\n");
            break;
        }
        if (checkAccount==ROWS){
            printf("**계좌 개설 실패**\n");
            printf("%d개 계좌가 이미 존재합니다.\n",ROWS);
            break;
        }
    }
}

void deposit (int inputAccount, int inputMoney){
    int i,j;
    if (inputMoney<0){
        printf("**입금 실패**\n");
        printf("입금액이 음수일 수 없습니다.\n");
        //continue;
    }else{
        for(i=0;i<ROWS;++i){
            if(iAccountInfo[i][0]==inputAccount){
                iAccountInfo[i][1]=iAccountInfo[i][1]+inputMoney;
                printf("**입금 성공!**\n");                
                printf("계좌ID: %d ,잔액: %d \n",iAccountInfo[i][0],iAccountInfo[i][1]);
                break;
            }else{
                printf("**입금 실패**\n");
                printf("계좌 id가 존재하지 않습니다.\n");
                break;
            }
        }
    }


}

void withDraw (int inputAccount, int inputMoney){
    int i,j;
    for(i=0;i<ROWS;++i){
        if(iAccountInfo[i][0]==inputAccount){
            iAccountInfo[i][1]=iAccountInfo[i][1]-inputMoney;
            if (iAccountInfo[i][1]<0){
                printf("**출금 실패!**\n");                
                printf("잔액이 부족합니다.\n");
                iAccountInfo[i][1]=iAccountInfo[i][1]+inputMoney;
                break;
            }else {
                printf("**출금 성공!**\n");                
                printf("계좌ID: %d ,잔액: %d \n",iAccountInfo[i][0],iAccountInfo[i][1]);
                break;
            }
        }
        
        if(inputAccount!=iAccountInfo[i][0]){
            printf("**출금 실패**\n");
            printf("계좌 id가 존재하지 않습니다.\n");
            break;
        }
    } 
    

}

void printAccount(){
    int i,j;
    for (i=0;i<ROWS;++i){
                if(iAccountInfo[i][0]==0){
                    break;
                }
                printf("계좌 : %d, 잔액 : %d\n",iAccountInfo[i][0],iAccountInfo[i][1]);            
            }
}