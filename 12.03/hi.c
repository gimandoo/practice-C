#include <stdio.h>

int main(){
    int choice;
    
    makeChoice;

    printf("새 게임 : 1\n");
    printf("불러오기 : 1\n");
    printf("설정 : 1\n");
    printf("크레딧 : 4\n");

    scanf("%d" , &choice);

    switch (choice) {
        case 1:
        printf("새 게임.\n");
        break;

        case 2:
        printf("불러오기.\n");
        break;

        case 3:
        printf("설정.\n");
        break;

        case 4:
        printf("크레딧.\n");
        break;

        default:
        printf("잘못 입력하셨습니다.\n");
        goto makeChoice;
        break;
    }
}