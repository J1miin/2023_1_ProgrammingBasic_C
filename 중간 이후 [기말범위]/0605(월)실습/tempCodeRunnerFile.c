#include <stdio.h>
#include <ctype.h>
//system("Pause") 메인함수 하단에
int main(){
    char c ;
    int len =0;
    int _isupper =0, _islower=0, _isdigit=0;

    c=getchar();
    while (!isspace(c)){
        len ++;
        if(_islower ==0 & islower(c)){
            _islower=1;
        }
        else if (_isupper ==0 && isupper(c)){
            _isupper =1;
        }else if (_isdigit ==0 && isdigit(c)){
            _isdigit=1;
        }
        c = getchar();
    }

    if (len >=7 && _isupper && _islower && _isdigit){
        printf("유효한 암호입니다. \n");
    }else {
        printf("유효하지 않은 암호입니다. \n");

    }


    return 0;

}