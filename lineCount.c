#include <stdio.h>


void countCharV1();
void countCharV2();
void countLine();

 main(){

    char c;
    int choice;
    printf( "[1] Count Char V1 \n[2] Count Char V2\n[3] Count line\n\n");

    c = getchar();
    choice = c - '0';
    printf("%d", choice);
    if(choice == 1){
        printf( "Launching countCharV1");
        countCharV1();
    }
    else if(choice == 2){
        printf( "Launching countCharV2");
        countCharV2();
    }
    else if(choice == 3){
        printf( "Launching countWords");
        countLine();
    }
    else {
        puts("Failed");
    }
}



void countCharV1(){
    long nc;

    nc = 0;

    while (getchar() != EOF){
        ++nc;
        printf( "V1\n");
        printf("%ld\n", nc);
    }
}

/*Counting Lines; Second version*/

void countCharV2(){

    double nc;

    for(nc = 0; getchar() != EOF; ++nc){
        printf( "V1\n");
        printf("%.0f\n", nc);

    }
}

void countLine(){
    long nl;
    char c;

    while(c = getchar() != EOF){
        if(c == '\n'){
            ++nl;
        }

    }
    printf("Number of lines: %ld", nl);

}


