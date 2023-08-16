/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>

int main (){

    int fst , sec , thd ;

    printf( "Input[1] :" ) ;
    scanf( "%d",&fst );
    printf( "Input[2] :" ) ;
    scanf( "%d",&sec );
    printf( "Input[3] :" ) ;
    scanf( "%d",&thd );

    if (fst >= sec && fst >= thd ) {
        if (sec >= thd ) {
            printf( "%d %d %d" ,fst ,sec ,thd );
        } else {
            printf( "%d %d %d" ,fst ,thd ,sec );
        }
    } else if (sec >= fst && sec >=thd) {
        if (fst >= thd) {
            printf( "%d %d %d" ,sec ,fst ,thd);
        } else {
            printf( "%d %d %d" ,sec ,thd ,fst);
        }
    } else {
        if (fst >= sec) {
            printf( "%d %d %d" ,thd ,fst ,sec);
        } else {
            printf( "%d %d %d" ,thd ,sec ,fst);
        }
    }
    return 0;
}