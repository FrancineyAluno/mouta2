#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,num,adi,sub,mult,div;
    char sel;

    printf("Escolha o valor da tabuada de 1 a 10\n");
    scanf("%d",&num);
    while(num != 0){
    if(num==1){
        printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
        scanf("%s",&sel);

        switch(sel){
            case '+':
            for(i=1;i<=10;i++){
                adi = i+1;
                printf("%d + 1 = %d\n",i,adi);
            }
            break;
            case '-':
            for(i=1;i<=10;i++){
                sub = i+1;
                printf("%d - 1 = %d\n",sub,i);
            }
            break;
            case 'x':
            for(i=1;i<=10;i++){
                mult = i*1;
                printf("%d x 1 = %d\n",i,mult);
            }
            break;
            case '/':
            for(i=1;i<=10;i++){
                mult = i*1;
                printf("%d / 1 = %d\n",mult,i);
            }
            break;
        }
    }
    if(num==2){
    printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
    scanf("%s",&sel);

        switch(sel){
            case '+':
            for(i=1;i<=10;i++){
                adi = i+2;
                printf("%d + 2 = %d\n",i,adi);
            }
            break;
            case '-':
            for(i=1;i<=10;i++){
                sub = i+2;
                printf("%d - 2 = %d\n",sub,i);
            }
            break;
            case 'x':
            for(i=1;i<=10;i++){
                mult = i*2;
                printf("%d x 2 = %d\n",i,mult);
            }
            break;
            case '/':
            for(i=1;i<=10;i++){
                mult = i*2;
                printf("%d / 2 = %d\n",mult,i);
            }
            break;
        }
    }
    if(num==3){
    printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
    scanf("%s",&sel);

        switch(sel){
            case '+':
            for(i=1;i<=10;i++){
                adi = i+3;
                printf("%d + 3 = %d\n",i,adi);
            }
            break;
            case '-':
            for(i=1;i<=10;i++){
                sub = i+3;
                printf("%d - 3 = %d\n",sub,i);
            }
            break;
            case 'x':
            for(i=1;i<=10;i++){
                mult = i*3;
                printf("%d x 3 = %d\n",i,mult);
            }
            break;
            case '/':
            for(i=1;i<=10;i++){
                mult = i*3;
                printf("%d / 3 = %d\n",mult,i);
            }
            break;
        }
    }
    if(num==4){
    printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
    scanf("%s",&sel);

        switch(sel){
            case '+':
            for(i=1;i<=10;i++){
                adi = i+4;
                printf("%d + 4 = %d\n",i,adi);
            }
            break;
            case '-':
            for(i=1;i<=10;i++){
                sub = i+4;
                printf("%d - 4 = %d\n",sub,i);
            }
            break;
            case 'x':
            for(i=1;i<=10;i++){
                mult = i*4;
                printf("%d x 4 = %d\n",i,mult);
            }
            break;
            case '/':
            for(i=1;i<=10;i++){
                mult = i*4;
                printf("%d / 4 = %d\n",mult,i);
            }
            break;
        }
    }
    if(num==5){
    printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
    scanf("%s",&sel);

        switch(sel){
            case '+':
            for(i=1;i<=10;i++){
                adi = i+5;
                printf("%d + 5 = %d\n",i,adi);
            }
            break;
            case '-':
            for(i=1;i<=10;i++){
                sub = i+5;
                printf("%d - 5 = %d\n",sub,i);
            }
            break;
            case 'x':
            for(i=1;i<=10;i++){
                mult = i*5;
                printf("%d x 5 = %d\n",i,mult);
            }
            break;
            case '/':
            for(i=1;i<=10;i++){
                mult = i*5;
                printf("%d / 5 = %d\n",mult,i);
            }
            break;
            }
        }
        if(num==6){
            printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
            scanf("%s",&sel);

        switch(sel){
            case '+':
            for(i=1;i<=10;i++){
                adi = i+6;
                printf("%d + 6 = %d\n",i,adi);
            }
            break;
            case '-':
            for(i=1;i<=10;i++){
                sub = i+6;
                printf("%d - 6 = %d\n",sub,i);
            }
            break;
            case 'x':
            for(i=1;i<=10;i++){
                mult = i*6;
                printf("%d x 6 = %d\n",i,mult);
            }
            break;
            case '/':
            for(i=1;i<=10;i++){
                mult = i*6;
                printf("%d / 6 = %d\n",mult,i);
                }
                break;
            }
        }
        if(num==7){
            printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
            scanf("%s",&sel);

        switch(sel){
            case '+':
            for(i=1;i<=10;i++){
                adi = i+7;
                printf("%d + 7 = %d\n",i,adi);
            }
            break;
            case '-':
            for(i=1;i<=10;i++){
                sub = i+7;
                printf("%d - 7 = %d\n",sub,i);
            }
            break;
            case 'x':
            for(i=1;i<=10;i++){
                mult = i*7;
                printf("%d x 7 = %d\n",i,mult);
                }
                break;
                case '/':
                for(i=1;i<=10;i++){
                    mult = i*7;
                    printf("%d / 7 = %d\n",mult,i);
                }
                break;
            }
        }
        if(num==8){
            printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
            scanf("%s",&sel);

            switch(sel){
                case '+':
                for(i=1;i<=10;i++){
                    adi = i+8;
                    printf("%d + 8 = %d\n",i,adi);
                }
                break;
                case '-':
                for(i=1;i<=10;i++){
                    sub = i+8;
                    printf("%d - 8 = %d\n",sub,i);
                }
                break;
                case 'x':
                for(i=1;i<=10;i++){
                    mult = i*8;
                    printf("%d x 8 = %d\n",i,mult);
                }
                break;
                case '/':
                for(i=1;i<=10;i++){
                    mult = i*8;
                    printf("%d / 8 = %d\n",mult,i);
                }
                break;
            }
        }
        if(num==9){
        printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
        scanf("%s",&sel);

            switch(sel){
                case '+':
                for(i=1;i<=10;i++){
                    adi = i+9;
                    printf("%d + 9 = %d\n",i,adi);
                }
                break;
                case '-':
                for(i=1;i<=10;i++){
                    sub = i+9;
                    printf("%d - 9 = %d\n",sub,i);
                }
                break;
                case 'x':
                for(i=1;i<=10;i++){
                    mult = i*9;
                    printf("%d x 9 = %d\n",i,mult);
                }
                break;
                case '/':
                for(i=1;i<=10;i++){
                    mult = i*9;
                    printf("%d / 9 = %d\n",mult,i);
                }
                break;
            }
        }
        if(num==10){
        printf("Qual a opecao de tabuada\n+ para adicao\n- para a subtracao\nx para a multiplicao\n/ para a divisao\n");
        scanf("%s",&sel);

            switch(sel){
                case '+':
                for(i=1;i<=10;i++){
                    adi = i+10;
                    printf("%d + 10 = %d\n",i,adi);
                }
                break;
                case '-':
                for(i=1;i<=10;i++){
                    sub = i+10;
                    printf("%d - 10 = %d\n",sub,i);
                }
                break;
                case 'x':
                for(i=1;i<=10;i++){
                    mult = i*10;
                    printf("%d x 10 = %d\n",i,mult);
                }
                break;
                case '/':
                for(i=1;i<=10;i++){
                    mult = i*10;
                    printf("%d / 10 = %d\n",mult,i);
                }
                break;
            }
        }
        printf("Escolha o valor da tabuada de 1 a 10\n0 para sair\n");
        scanf("%d",&num);
        system("cls");
    }
}

