#include <stdio.h>
int main(){
    int inputAccount, inputPrice;
    int account1, account2, account3;
    account1 = -1;
    account2 = -1;
    account3 = -1;
    int account1_price, account2_price, account3_price;
	int selectMenu,outputPrice;

    for (;;){ //계속 반복
        printf("---menu---\n");
        printf("1. 계좌개설\n");
        printf("2. 입금\n");
        printf("3. 출금\n");
        printf("4. 계좌정보 전체 출력\n");
        printf("5. 프로그램 종료\n");
        printf("선택 : ");
        scanf("%d", &selectMenu);
        
        //1번 메뉴 선택할 경우 
        // 잘못 만들어졌을 때 account1에 생성되면 안된다!!
        
        if (selectMenu == 1) {
            printf("[계좌개설]\n");
            printf("계좌 ID :");
            scanf("%d", &inputAccount);
            printf("입금액 :");
            scanf("%d", &inputPrice);
            
            if (account1 != inputAccount && account1 == -1){ //account1==-1 넣은 이유는 3개만 만들기 위해서 안그러면 계속 갱신되서 무한개 만드니까
                account1=inputAccount;
                if (inputPrice>=0){
                    account1_price = inputPrice;
                    printf("***계좌 개설 성공***\n");
                    printf("계좌 ID: %d\n", account1);
                    printf("잔액: %d \n\n", account1_price);
                }else {
                    account1=-1;
                    printf("0원 미만은 입금할 수 없습니다.\n");
                }

            }else if (account2 != inputAccount && account2==-1 ){
                if (inputAccount!=account1){
                    account2=inputAccount;
                    account2_price = inputPrice;
                    printf("***계좌 개설 성공***\n");
                    printf("계좌 ID: %d\n", account2);
                    printf("잔액: %d \n", account2_price);
                } else {
                    account2=-1;
                    printf("**계좌 개설 실패**\n");
                    printf("이미 존재하는 아이디입니다\n\n");
                }
            }else if (account3 !=inputAccount && account3==-1){
                if (inputAccount!=account1 && inputAccount!=account2){
                    account3=inputAccount;
                    account3_price = inputPrice;
                    printf("***계좌 개설 성공***\n");
                    printf("계좌 ID: %d\n", account3);
                    printf("잔액: %d \n", account3_price);
                } else {
                    account3=-1;
                    printf("**계좌 개설 실패**\n");
                    printf("이미 존재하는 아이디입니다\n");
                }
            }else {
                printf("\n**계좌 개설 실패**\n");
                printf("이미 3개의 계좌가 존재합니다.\n\n");
            }
        } //1번 선택 끝  
        //2번 선택 시작
        if (selectMenu == 2){
            printf("[입 금]\n");
            printf("계좌 ID :");
            scanf("%d", &inputAccount);
            printf("입금액 :");
            scanf("%d", &inputPrice);

            
            if (inputAccount==account1){
                if (inputPrice>0){
                    account1_price=account1_price+inputPrice;
                    printf("**입금 성공!**\n");
                    printf("계좌 ID: %d \n",inputAccount);
                    printf("잔액: %d\n",account1_price);
                }else {
                    printf("**입금 실패**\n");
                    printf("0이하의 금액은 임급할 수 없습니다.\n");
                }
            }else if (inputAccount==account2){
                if (inputPrice>0){
                    account2_price=account2_price+inputPrice;
                    printf("**입금 성공!**\n");
                    printf("계좌 ID: %d \n",inputAccount);
                    printf("잔액: %d\n",account2_price);
                }else {
                    printf("**입금 실패**\n");
                    printf("0이하의 금액은 임급할 수 없습니다.\n");
                }
            }else if(inputPrice==account3){
                if (inputPrice>0){
                    account3_price=account3_price+inputPrice;
                    printf("**입금 성공!**\n");
                    printf("계좌 ID: %d \n",inputAccount);
                    printf("잔액: %d\n",account3_price);
                }else {
                    printf("**입금 실패**\n");
                    printf("0이하의 금액은 임급할 수 없습니다.\n");
                }
            }else {
                printf("**입금 실패**\n");
                printf("계좌ID가 존재하지 않습니다.\n");
            }



        }
		//3번 선택 시작
        if (selectMenu == 3){
            printf("[출 금]\n");
            printf("계좌 ID :");
            scanf("%d", &inputAccount);
            printf("출금액 :");
            scanf("%d", &outputPrice);
            
            if(inputAccount==account1){
                account1_price=account1_price-outputPrice;
                if (account1_price<0){
                    printf("**출금 실패**\n");
                    printf("잔액이 부족합니다.\n");
                }else {
                    printf("**출금 성공!**\n");
                    printf("계좌 ID: %d \n",account1);
                    printf("잔액: %d \n",account1_price);
                }    
            }else if(inputAccount==account2){
                account2_price=account2_price-outputPrice;
                if (account2_price<0){
                    printf("**출금 실패**\n");
                    printf("잔액이 부족합니다.\n");
                }else {
                    printf("**출금 성공!**\n");
                    printf("계좌 ID: %d \n",account2);
                    printf("잔액: %d \n",account2_price);
                }    
            }else if (inputAccount==account3){
                account3_price=account3_price-outputPrice;
                if (account3_price<0){
                    printf("**출금 실패**\n");
                    printf("잔액이 부족합니다.\n");
                }else {
                    printf("**출금 성공!**\n");
                    printf("계좌 ID: %d \n",account3);
                    printf("잔액: %d \n",account3_price);
                }    
            }else {
                printf("**출금 실패**\n");
                printf("계좌아이디가 존재하지 않습니다.\n");
            }
	    }
        //4번 선택 시작
        if (selectMenu == 4){
            if(account1==-1){
                printf("개설된 계좌가 없습니다\n");
            }
            else{
                if (account1!=-1){
                    printf("계좌 ID: %d\n",account1);
                    printf("잔액: %d\n\n",account1_price);
                }if (account2!=-1){
                    printf("계좌 ID: %d\n",account2);
                    printf("잔액: %d\n\n",account2_price);

                } if (account3!=-1){
                    printf("계좌 ID: %d\n",account3);
                    printf("잔액: %d\n",account3_price);

                }
            }
        }
        //5번 선택 시작
        if (selectMenu == 5){
            printf("프로그램을 종료합니다.");
            break;
        }
    }//for문 괄호임


    
    return 0;
}

//입금액이 음수가 되지 않게 조건 추가할 것.
// 기존에 존재하는 계좌를 만들지 않고,
//처음에 계좌 3개까지 만들 수 있도록 설정해놓기
// while 써도 되고, for문으로 해도 됨 
// 에러 처리도 반복문을 사용할 것 
// 에러가 뜨면 다시 메뉴1로,(=다시 해당 기능으로 돌아갈 수 있도록)

/*
1. 항상 참이게 가장 바깥 반복문을 세팅해두기 
for (항상 참이게 ){
	      메뉴 선택

    if(메뉴==1){
        반복문 (항상 참인 조건으로){

            계좌 개설에 필요한 입력;
            에러 처리;
            continue일수도, 다시 위로 돌아가게 하든, 조건문을 쓰든 알아서..

            성공한 경우;
            break;
        }
    }	


}
// 보고서에서는 각 에러를 어떤 기능으로 처리를 했는가.
계좌가 존재하는지 아닌지 확인하고, 초기 납입금이 0보다 큰지 작으면 에러 이런거 검사하는 과정을 정리해서 작성
각 기능별 에러 처리를 어떻게 했는지 작성

*/