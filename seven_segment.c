#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int mat[20][10];

void reset(){
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 10; j++){
            mat[i][j] = 0;
        }
    }
}

void display()
{
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 10; j++){
            if(mat[i][j] == 1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void setA(){
    for(int i = 0; i < 10; i++){
        mat[0][i] = 1;
    }
}

void setB(){
    for(int i = 0; i < 10; i++){
        mat[i][9] = 1;
    }
}

void setC(){
    for(int i = 10; i < 20; i++){
        mat[i][9] = 1;
    }
}

void setD(){
    for(int i = 0; i < 10; i++){
        mat[19][i] = 1;
    }
}

void setE(){
    for(int i = 10; i < 20; i++){
        mat[i][0] = 1;
    }
}

void setF(){
    for(int i = 0; i < 10; i++){
        mat[i][0] = 1;
    }
}


void setG(){
    for(int i = 0; i < 10; i++){
        mat[9][i] = 1;
    }
}

void digit(int x){
    switch(x){
    case 0:
        setA();
        setB();
        setC();
        setD();
        setE();
        setF();
        break;

    case 1:
        setB();
        setC();
        break;

    case 2:
        setA();
        setB();
        setD();
        setE();
        setG();
        break;

    case 3:
        setA();
        setB();
        setC();
        setD();
        setG();
        break;

    case 4:
        setB();
        setC();
        setF();
        setG();
        break;

    case 5:
        setA();
        setC();
        setD();
        setF();
        setG();
        break;

    case 6:
        setA();
        setC();
        setD();
        setE();
        setF();
        setG();
        break;

    case 7:
        setA();
        setB();
        setC();
        break;

    case 8:
        setA();
        setB();
        setC();
        setD();
        setE();
        setF();
        setG();
        break;

    case 9:
       setA();
        setB();
        setC();
        setF();
        setG();
        break;


    }
}

int main()
{
    system("clear");
    reset();

    while(1){
        for(int i = 0; i < 10; i++){
            digit(i);
            display();
            sleep(1);
            system("clear");
            reset();
            sleep(1);

        }
    }

    return 0;
}

