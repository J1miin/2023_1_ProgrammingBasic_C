//��ǻ�Ͱ��а� 2022111120 ������

#define TRUE 1
#include <stdio.h>
int main() {
    int inputAccount, inputPrice;
    int account1, account2, account3;
    account1 = -1;
    account2 = -1;
    account3 = -1;
    int account1_price, account2_price, account3_price;
    int selectMenu, outputPrice;

    while(TRUE) { //��� �ݺ�
        printf("---menu---\n");
        printf("1. ���°���\n");
        printf("2. �Ա�\n");
        printf("3. ���\n");
        printf("4. �������� ��ü ���\n");
        printf("5. ���α׷� ����\n");
        printf("���� : ");
        scanf_s("%d", &selectMenu);

        //1�� �޴� ������ ��� 
        // �߸� ��������� �� account1�� �����Ǹ� �ȵȴ�!!

        if (selectMenu == 1) {
            while (TRUE) {
                printf("[���°���]\n");
                printf("���� ID :");
                scanf_s("%d", &inputAccount);
                printf("�Աݾ� :");
                scanf_s("%d", &inputPrice);

                if (account1 != inputAccount && account1 == -1) { //account1==-1 ���� ������ 3���� ����� ���ؼ� �ȱ׷��� ��� ���ŵǼ� ���Ѱ� ����ϱ�
                    account1 = inputAccount;
               
                        if (inputPrice >= 0) {           
                            account1_price = inputPrice;
                            printf("***���� ���� ����***\n");
                            printf("���� ID: %d\n", account1);
                            printf("�ܾ�: %d \n\n", account1_price);
                            break;
                        }
                        else {               
                            account1 = -1;
                            printf("0�� �̸��� �Ա��� �� �����ϴ�.\n");
                        }            

                }
                else if (account2 != inputAccount && account2 == -1) {
                    if (inputAccount != account1) {
                        account2 = inputAccount;
                        account2_price = inputPrice;
                        if (inputPrice >= 0) {
                            account2_price = inputPrice;
                            printf("***���� ���� ����***\n");
                            printf("���� ID: %d\n", account2);
                            printf("�ܾ�: %d \n\n", account2_price);
                            break;
                        }
                        else {
                            account2 = -1;
                            printf("0�� �̸��� �Ա��� �� �����ϴ�.\n");
                        }
                    }
                    else {
                        account2 = -1;
                        printf("**���� ���� ����**\n");
                        printf("�̹� �����ϴ� ���̵��Դϴ�\n\n");
                    }
                }
                else if (account3 != inputAccount && account3 == -1) {
                    if (inputAccount != account1 && inputAccount != account2) {
                        account3 = inputAccount;
                        account3_price = inputPrice;
                        if (inputPrice >= 0) {
                            account3_price = inputPrice;
                            printf("***���� ���� ����***\n");
                            printf("���� ID: %d\n", account3);
                            printf("�ܾ�: %d \n\n", account3_price);
                            break;
                        }
                        else {
                            account3 = -1;
                            printf("0�� �̸��� �Ա��� �� �����ϴ�.\n");
                        }                      
                    }
                    else {
                        account3 = -1;
                        printf("**���� ���� ����**\n");
                        printf("�̹� �����ϴ� ���̵��Դϴ�\n");
                    }
                }
                else if (inputAccount==-1) {
                    printf("\n**���� ���� ����**\n");
                    printf("-1�� �Էµ� �� �����ϴ�.\n");
                    
                } else {
                    printf("\n**���� ���� ����**\n");
                    printf("�̹� 3���� ���°� �����մϴ�.\n\n");
                    break;
                    
                }
            }
            
        } //1�� ���� ��  
        //2�� ���� ����
        if (selectMenu == 2) {
            while (TRUE) {
                printf("[�� ��]\n");
                printf("���� ID :");
                scanf_s("%d", &inputAccount);
                printf("�Աݾ� :");
                scanf_s("%d", &inputPrice);


                if (inputAccount == account1) {
                    if (inputPrice > 0) {
                        account1_price = account1_price + inputPrice;
                        printf("**�Ա� ����!**\n");
                        printf("���� ID: %d \n", inputAccount);
                        printf("�ܾ�: %d\n", account1_price);
                        break;
                    }
                    else {
                        printf("**�Ա� ����**\n");
                        printf("0������ �ݾ��� �ӱ��� �� �����ϴ�.\n");
                    }
                }
                else if (inputAccount == account2) {
                    if (inputPrice > 0) {
                        account2_price = account2_price + inputPrice;
                        printf("**�Ա� ����!**\n");
                        printf("���� ID: %d \n", inputAccount);
                        printf("�ܾ�: %d\n", account2_price);
                        break;
                    }
                    else {
                        printf("**�Ա� ����**\n");
                        printf("0������ �ݾ��� �ӱ��� �� �����ϴ�.\n");
                    }
                }
                else if (inputPrice == account3) {
                    if (inputPrice > 0) {
                        account3_price = account3_price + inputPrice;
                        printf("**�Ա� ����!**\n");
                        printf("���� ID: %d \n", inputAccount);
                        printf("�ܾ�: %d\n", account3_price);
                        break;
                    }
                    else {
                        printf("**�Ա� ����**\n");
                        printf("0������ �ݾ��� �ӱ��� �� �����ϴ�.\n");
                    }
                }
                else {
                    printf("**�Ա� ����**\n");
                    printf("����ID�� �������� �ʽ��ϴ�.\n");
                    break;
                }
            }
        }
        //3�� ���� ����
        if (selectMenu == 3) {
            while (TRUE) {
                printf("[�� ��]\n");
                printf("���� ID :");
                scanf_s("%d", &inputAccount);
                printf("��ݾ� :");
                scanf_s("%d", &outputPrice);

                if (inputAccount == account1) {
                    account1_price = account1_price - outputPrice;
                    if (account1_price < 0) {
                        printf("**��� ����**\n");
                        printf("�ܾ��� �����մϴ�.\n");
                        account1_price = account1_price + outputPrice;
                    }
                    else {
                        printf("**��� ����!**\n");
                        printf("���� ID: %d \n", account1);
                        printf("�ܾ�: %d \n", account1_price);
                        break;
                    }
                }
                else if (inputAccount == account2) {
                    account2_price = account2_price - outputPrice;
                    if (account2_price < 0) {
                        printf("**��� ����**\n");
                        printf("�ܾ��� �����մϴ�.\n");

                        account2_price = account2_price + outputPrice;
                    }
                    else {
                        printf("**��� ����!**\n");
                        printf("���� ID: %d \n", account2);
                        printf("�ܾ�: %d \n", account2_price);
                        break;
                    }
                }
                else if (inputAccount == account3) {
                    account3_price = account3_price - outputPrice;
                    if (account3_price < 0) {
                        printf("**��� ����**\n");
                        printf("�ܾ��� �����մϴ�.\n");

                        account3_price = account3_price + outputPrice;
                    }
                    else {
                        printf("**��� ����!**\n");
                        printf("���� ID: %d \n", account3);
                        printf("�ܾ�: %d \n", account3_price);
                        break;
                    }
                }
                else {
                    printf("**��� ����**\n");
                    printf("���¾��̵� �������� �ʽ��ϴ�.\n");
                    break;
                }
            }
            
        }
        //4�� ���� ����
        if (selectMenu == 4) {
            if (account1 == -1) {
                printf("������ ���°� �����ϴ�\n");
            }
            else {
                if (account1 != -1) {
                    printf("���� ID: %d\n", account1);
                    printf("�ܾ�: %d\n\n", account1_price);
                }if (account2 != -1) {
                    printf("���� ID: %d\n", account2);
                    printf("�ܾ�: %d\n\n", account2_price);

                } if (account3 != -1) {
                    printf("���� ID: %d\n", account3);
                    printf("�ܾ�: %d\n", account3_price);

                }
            }
        }
        //5�� ���� ����
        if (selectMenu == 5) {
            printf("���α׷��� �����մϴ�.");
            break;
        }
    }



    return 0;
}
