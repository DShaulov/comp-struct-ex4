//
// Created by Shira Goren on 30/11/2020.
//

//**************************************************************************************************************
#include "ass4.h"
//#include "ass4.c"
//**************************************************************************************************************

#include <stdio.h>
#include <math.h>
#include <string.h>
#define SIZE 3
#include <assert.h>
#define SPACE ' '


void func1(char board[][SIZE * SIZE], char testBoard[][SIZE * SIZE]) {
    for (int r = 0; r < (SIZE * SIZE); r++) {
        for (int c = 0; c < (SIZE * SIZE); c++) {
            assert((board[r][c] == testBoard[r][c]) && "failed test\n");
        }
    }
}


int main() {
    //****************************************************************************************************************
    //****************************************************************************************************************

        // tests for SIZE = 3
        //first change in define at top of your file

    //****************************************************************************************************************
    //****************************************************************************************************************

        //Tests for createBoard
    printf("\033[1;34m");
    printf("###Tests for createBoard###\n");
    printf("\n");

    char board1[SIZE * SIZE][SIZE * SIZE];
    char str1[] = "i/123456789/12a456789/123b6789/1234c89/12345d/12345678*//A23456789";
    char tBoard1[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','3','4','5', '6', '7','8','9'
            ,'1','2',' ','4','5','6', '7','8','9','1','2','3',' ',' ', '6', '7','8','9','1','2','3',
            '4',' ', ' ', ' ','8','9','1','2','3','4','5', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7','8','9' };

    char board2[SIZE * SIZE][SIZE * SIZE];
    char str2[] = "i/123456789/12a456789/123b6789/1234c89/12345d/12345678*//A23456789/";


    char board3[SIZE * SIZE][SIZE * SIZE];
    char str3[] = "i/12345e79/12a456789/123b6789/1234c89/12345d/12345678*//A23456789";


    char board4[SIZE * SIZE][SIZE * SIZE];
    char str4[] = "i/12345q89/12a456789/123b6789/1234c89/12345d/12345678*//A23456789";
    char tBoard4[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','3','4','5', 'q','8','9',' '
            ,'1','2',' ','4','5', '6', '7','8','9','1','2','3',' ',' ', '6', '7','8','9','1','2','3',
            '4',' ', ' ', ' ','8','9','1','2','3','4','5', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7','8','9' };

    char board5[SIZE * SIZE][SIZE * SIZE];
    char str5[] = "i/1234589/12a456789/123b6789/1234c89/12345d/12345678*//A23456789";
    char tBoard5[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','3','4','5','8','9', ' ', ' '
            ,'1','2',' ','4','5', '6', '7','8','9','1','2','3',' ',' ', '6', '7','8','9','1','2','3',
            '4',' ', ' ', ' ','8','9','1','2','3','4','5', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7','8','9' };

    char boardS3[SIZE * SIZE][SIZE * SIZE];
    char strS3[] = "i/12345q89/12a456789/123b6789/1234c89/12345d/12345678*//A23456789";
    char tBoardS3[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','3','4','5', 'q','8','9',' '
            ,'1','2',' ','4','5', '6', '7','8','9','1','2','3',' ',' ', '6', '7','8','9','1','2','3',
            '4',' ', ' ', ' ','8','9','1','2','3','4','5', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7','8','9' };

    char board6[SIZE * SIZE][SIZE * SIZE];
    char str6[] = "i/1234589/12a456789/";


    char board7[SIZE * SIZE][SIZE * SIZE];
    char str7[] = "";


    char board8[SIZE * SIZE][SIZE * SIZE];
    char str8[] = "////////";
    char tBoard8[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ',' ',' ',' '
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ',' ',' ',' ',' ',' ',
            ' ',' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ',' ',' '
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ',' ',' ' };

    char board9[SIZE * SIZE][SIZE * SIZE];
    char str9[] = "i/1/2/3/4/5/12345678*//A23456789";
    char tBoard9[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','1',' ',' ',' ',' ', ' ', ' ',' ',' '
            ,'2',' ',' ',' ',' ', ' ', ' ',' ',' ','3',' ',' ',' ',' ', ' ', ' ',' ',' ','4',' ',' ',
            ' ',' ', ' ', ' ',' ',' ','5',' ',' ',' ',' ', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7','8','9' };

    char board10[SIZE * SIZE][SIZE * SIZE];
    char str10[] = "798154623/216938457/453267891/689721534/132485976/547396182/961873245/874512369/325649718";
    char tBoard10[SIZE * SIZE][SIZE * SIZE] = { '7','9','8','1','5','4','6','2','3','2','1','6','9','3','8','4',
                                          '5','7','4','5','3','2','6','7','8','9','1','6','8','9','7','2','1',
                                          '5','3','4','1','3','2','4','8','5','9','7','6','5','4','7','3','9',
                                          '6','1','8','2','9','6','1','8','7','3','2','4','5','8','7','4','5',
                                          '1','2','3','6','9','3','2','5','6','4','9','7','1','8' };

    char board11[SIZE * SIZE][SIZE * SIZE];
    char str11[] = "@98154623/216938457/453267891/689721534/132485976/547396182/961873245/874512369/325649718";
    char tBoard11[SIZE * SIZE][SIZE * SIZE] = { '@','9','8','1','5','4','6','2','3','2','1','6','9','3','8','4',
                                           '5','7','4','5','3','2','6','7','8','9','1','6','8','9','7','2','1',
                                           '5','3','4','1','3','2','4','8','5','9','7','6','5','4','7','3','9',
                                           '6','1','8','2','9','6','1','8','7','3','2','4','5','8','7','4','5',
                                           '1','2','3','6','9','3','2','5','6','4','9','7','1','8' };

    char board12[SIZE * SIZE][SIZE * SIZE];
    char str12[] = "a98154623/216a38457/45326789a/68972a534/1324859a6/54a396182/961873a45/8745a2369/3a5649718";
    char tBoard12[SIZE * SIZE][SIZE * SIZE] = { ' ','9','8','1','5','4','6','2','3','2','1','6',' ','3','8','4',
                                           '5','7','4','5','3','2','6','7','8','9',' ','6','8','9','7','2',' ',
                                           '5','3','4','1','3','2','4','8','5','9',' ','6','5','4',' ','3','9',
                                           '6','1','8','2','9','6','1','8','7','3',' ','4','5','8','7','4','5',
                                           ' ','2','3','6','9','3',' ','5','6','4','9','7','1','8' };


    char board13[SIZE * SIZE][SIZE * SIZE];
    char str13[] = "798154623/216a38457/45326789a/68972a534/1324859a6/54a396182/961873a45/8745a2369/3a5649718";
    char tBoard13[SIZE * SIZE][SIZE * SIZE] = { '7','9','8','1','5','4','6','2','3','2','1','6',' ','3','8','4',
                                           '5','7','4','5','3','2','6','7','8','9',' ','6','8','9','7','2',' ',
                                           '5','3','4','1','3','2','4','8','5','9',' ','6','5','4',' ','3','9',
                                           '6','1','8','2','9','6','1','8','7','3',' ','4','5','8','7','4','5',
                                           ' ','2','3','6','9','3',' ','5','6','4','9','7','1','8' };

    char board18[SIZE * SIZE][SIZE * SIZE];
    char str18[] = "i/123456789/12a456789/123b6789/1234c89/12345d/12345678*//A234567";
    char tBoard18[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','3','4','5', '6', '7','8','9'
            ,'1','2',' ','4','5','6', '7','8','9','1','2','3',' ',' ', '6', '7','8','9','1','2','3',
            '4',' ', ' ', ' ','8','9','1','2','3','4','5', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7',' ',' ' };




    createBoard(board1, str1);
    func1(board1, tBoard1);
    printf("\033[0;31m");
    printf("passed test for board1\n");
    printf("\n");


    printf("\033[0;31m");
    printf("Expected for board2:\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    createBoard(board2, str2);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for board3:\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    createBoard(board3, str3);
    printf("\n");

    createBoard(board4, str4);
    func1(board4, tBoard4);
    printf("\033[0;31m");
    printf("passed test for board4\n");
    printf("\n");

    createBoard(board5, str5);
    func1(board5, tBoard5);
    printf("\033[0;31m");
    printf("passed test for board5\n");
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for board6:\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    createBoard(board6, str6);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for board7:\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    createBoard(board7, str7);
    printf("\n");

    createBoard(board8, str8);
    func1(board8, tBoard8);
    printf("\033[0;31m");
    printf("passed test for board8\n");
    printf("\n");

    createBoard(board9, str9);
    func1(board9, tBoard9);
    printf("\033[0;31m");
    printf("passed test for board9\n");
    printf("\n");

    createBoard(board10, str10);
    func1(board10, tBoard10);
    printf("\033[0;31m");
    printf("passed test for board10\n");
    printf("\n");

    createBoard(board11, str11);
    func1(board11, tBoard11);
    printf("\033[0;31m");
    printf("passed test for board11\n");
    printf("\n");

    createBoard(board12, str12);
    func1(board12, tBoard12);
    printf("\033[0;31m");
    printf("passed test for board12\n");
    printf("\n");

    createBoard(board13, str13);
    func1(board13, tBoard13);
    printf("\033[0;31m");
    printf("passed test for board13\n");
    printf("\n");

    createBoard(board18, str18);
    func1(board18, tBoard18);
    printf("\033[0;31m");
    printf("passed test for board18\n");
    printf("\n");

    createBoard(boardS3, strS3);
    func1(boardS3, tBoardS3);
    printf("\033[0;31m");
    printf("passed test for boardS3\n");
    printf("\n");

    printf("passed all tests for createBoard\n");
    printf("\n");

    //*********************************************************************************************************************
        //Tests for makeMove
    printf("\033[1;34m");
    printf("###Tests for makeMove###\n");
    printf("\n");

    //**************************************************************************************************************8
    // using board1 here
    // tests for replaceAll:
    char move1[] = "replaceAll,@,1";
    char move2[] = "replaceAll,1,@";
    char cBoard1[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','@','2','3','4','5', '6', '7','8','9'
            ,'@','2',' ','4','5', '6', '7','8','9','@','2','3',' ',' ', '6', '7','8','9','@','2','3',
            '4',' ', ' ', ' ','8','9','@','2','3','4','5', ' ', ' ',' ',' ','@','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7','8','9' };
    char move3[] = "replaceAll,3,1";
    char cBoard2[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','@','2','1','4','5', '6', '7','8','9'
            ,'@','2',' ','4','5', '6', '7','8','9','@','2','1',' ',' ', '6', '7','8','9','@','2','1',
            '4',' ', ' ', ' ','8','9','@','2','1','4','5', ' ', ' ',' ',' ','@','2','1','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','1','4','5', '6', '7','8','9' };
    char move4[] = "replaceAll,2,17";
    char move5[] = "replaceAll,11,*";
    char move6[] = "replaceAll,9,a"; //**************************************************************************
    char lcBoard3[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','3','4','5', 'q','8','a',' '
            ,'1','2',' ','4','5', '6', '7','8','a','1','2','3',' ',' ', '6', '7','8','a','1','2','3',
            '4',' ', ' ', ' ','8','a','1','2','3','4','5', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7','8','a' };
    char move7[] = "replaceAll,/,9";
    char move8[] = "repaceAll,9,#";
    char move9[] = "replaceAll,6,2,#";
    char move10[] = "replaceAll,6";
    char move11[] = "replaceAll,6,";
    char mv1[] = "replaceAll,4,/"; //**************************************************************************
    char mv2[] = "replaceAll,4, "; //**************************************************************************
    char mv3[] = "replaceAll, ,1";

    char move55[] = "ReplaceAll,4,7";
    char move56[] = "replaceall,4,7";
    char move57[] = "replaceAll,,";
    char move58[] = "replaceAll,3,1,";
    char move59[] = "replaceAll,3,1,6";


    char lcBoard4[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','3','/','5', 'q','8','a',' '
            ,'1','2',' ','/','5', '6', '7','8','a','1','2','3',' ',' ', '6', '7','8','a','1','2','3',
            '/',' ', ' ', ' ','8','a','1','2','3','/','5', ' ', ' ',' ',' ','1','2','3','/','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','/','5', '6', '7','8','a' };

    printf("\033[0;31m");
    printf("Expected for %s:\n", move1);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move1);
    printf("\n");

    makeMove(board1, move2);
    func1(board1, cBoard1);
    printf("\033[0;31m");
    printf("passed test for replaceAll,11,*\n");
    printf("\n");

    makeMove(board1, move3);
    func1(board1, cBoard2);
    printf("\033[0;31m");
    printf("passed test for replaceAll,1,@\n");
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move4);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move4);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move5);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move5);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move6);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move6);
    printf("\n");

    //on board 4
//    makeMove(board4, move6);
//    func1(board4, lcBoard3);
//    printf("\033[0;31m");
//    printf("passed test for replaceAll,9,a\n");
//    printf("\n");


    printf("\033[0;31m");
    printf("Expected for %s:\n", mv1);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, mv1);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", mv2);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, mv2);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", mv3);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, mv3);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move7);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move7);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move8);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move8);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move9);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move9);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move10);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move10);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move11);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move11);
    printf("\n");
    //*************************************************************************************************************
        // using board1 here
        // tests for change:
    char move12[] = "change,0,0,!";
    char move13[] = "change,10,0,!";
    char move14[] = "change,0,10,!";
    char move15[] = "change,0,01,!";
    char move16[] = "change,1,2,!";
    char cBoard3[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','@','2','!','4','5', '6', '7','8','9'
           ,'@','2',' ','4','5', '6', '7','8','9','@','2','1',' ',' ', '6', '7','8','9','@','2','1',
           '4',' ', ' ', ' ','8','9','@','2','1','4','5', ' ', ' ',' ',' ','@','2','1','4','5', '6', '7','8','*'
           ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','1','4','5', '6', '7','8','9' };
    char move17[] = "change,1,1,1";
    char cBoard4[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','@','1','!','4','5', '6', '7','8','9'
           ,'@','2',' ','4','5', '6', '7','8','9','@','2','1',' ',' ', '6', '7','8','9','@','2','1',
           '4',' ', ' ', ' ','8','9','@','2','1','4','5', ' ', ' ',' ',' ','@','2','1','4','5', '6', '7','8','*'
           ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','1','4','5', '6', '7','8','9' };
    char move18[] = "chnge,1,2,1";
    char move19[] = "change,1,2,";
    char move20[] = "change,1,2";
    char move21[] = "change,1,2,34";
    char move22[] = "change,1,2,a";//*********************************************************************************
    char move23[] = "change,1,2,b";//*********************************************************************************

    char move47[] = "change,8,8,&,";
    char move48[] = "change,8,8,&,4";
    char move49[] = "change,8,8,&,,";
    char move50[] = "change";
    char move51[] = "change,";
    char move52[] = "Change,6,7,#";
    char move63[] = "change,,,";

    char mv4[] = "change,1,2,/";
    char mv5[] = "change,1,2, ";
    char mv6[] = "change,1,#,8";



    printf("\033[0;31m");
    printf("Expected for %s:\n", move12);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move12);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move13);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move13);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move14);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move14);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move15);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move15);
    printf("\n");

    makeMove(board1, move16);
    func1(board1, cBoard3);
    printf("\033[0;31m");
    printf("passed test for change,1,2,!\n");
    printf("\n");

    makeMove(board1, move17);
    func1(board1, cBoard4);
    printf("\033[0;31m");
    printf("passed test for change,1,1,1\n");
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move18);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move18);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move19);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move19);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move20);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move20);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move21);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move21);
    printf("\n");


    printf("\033[0;31m");
    printf("Expected for %s:\n", mv4);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, mv4);
    printf("\n");


    printf("\033[0;31m");
    printf("Expected for %s:\n", mv5);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, mv5);
    printf("\n");



    printf("\033[0;31m");
    printf("Expected for %s:\n", mv6);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, mv6);
    printf("\n");
    //******************************************************************************************
    printf("\033[0;31m");
    printf("Expected for %s:\n", move22);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move22);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move23);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move23);
    printf("\n");

    //    char c1Board18[SIZE*SIZE][SIZE*SIZE] = {' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','a','4','5', '6', '7','8','9'
    //            ,'1','2',' ','4','5','6', '7','8','9','1','2','3',' ',' ', '6', '7','8','9','1','2','3',
    //            '4',' ', ' ', ' ','8','9','1','2','3','4','5', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
    //            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7',' ',' '};
    //
    //    char c2Board18[SIZE*SIZE][SIZE*SIZE] = {' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','b','4','5', '6', '7','8','9'
    //            ,'1','2',' ','4','5','6', '7','8','9','1','2','3',' ',' ', '6', '7','8','9','1','2','3',
    //            '4',' ', ' ', ' ','8','9','1','2','3','4','5', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
    //            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7',' ',' '};


    //tests changed based on answers from piazza
    //*********on board18**********************
    //    makeMove(board18, move22);
    //    func1(board18, c1Board18);
    //    printf("\033[0;31m");
    //    printf("passed test for change,1,2,a\n");
    //    printf("\n");
    //
    //    makeMove(board18, move23);
    //    func1(board18, c2Board18);
    //    printf("\033[0;31m");
    //    printf("passed test for change,1,2,b\n");
    //    printf("\n");


    //**********************************************************************************************************
        // using board1 here
        // tests for add:

    char move24[] = "add,0,0,!";
    char cBoard5[SIZE * SIZE][SIZE * SIZE] = { '!',' ',' ',' ',' ',' ',' ',' ',' ','@','1','!','4','5', '6', '7','8','9'
            ,'@','2',' ','4','5', '6', '7','8','9','@','2','1',' ',' ', '6', '7','8','9','@','2','1',
            '4',' ', ' ', ' ','8','9','@','2','1','4','5', ' ', ' ',' ',' ','@','2','1','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','1','4','5', '6', '7','8','9' };
    char move25[] = "add,10,0,!";
    char move26[] = "add,0,10,!";
    char move27[] = "add,0,01,!";
    char move28[] = "add,*,1,!";
    char move29[] = "add,0,^,!";
    char move30[] = "add,8,8,#";
    char move31[] = "add,0,5,5";
    char cBoard6[SIZE * SIZE][SIZE * SIZE] = { '!',' ',' ',' ',' ','5',' ',' ',' ','@','1','!','4','5', '6', '7','8','9'
            ,'@','2',' ','4','5', '6', '7','8','9','@','2','1',' ',' ', '6', '7','8','9','@','2','1',
            '4',' ', ' ', ' ','8','9','@','2','1','4','5', ' ', ' ',' ',' ','@','2','1','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','1','4','5', '6', '7','8','9' };
    char move32[] = "ad,0,5,5";
    char move33[] = "add,0,5,";
    char move34[] = "add,0,5";
    char move35[] = "add,0,5,a";

    char move64[] = "add,,,";
    char move65[] = "add,0,3,";
    char move53[] = "Add,0,1,@";

    char mv7[] = "add,0,3,45";
    char mv8[] = "add,0,3, ";
    char mv9[] = "add,0,3,/";



    makeMove(board1, move24);
    func1(board1, cBoard5);
    printf("\033[0;31m");
    printf("passed test for add,0,0,!\n");
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move25);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move25);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move26);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move26);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move27);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move27);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move28);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move28);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move29);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move29);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move30);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move30);
    printf("\n");

    makeMove(board1, move31);
    func1(board1, cBoard6);
    printf("\033[0;31m");
    printf("passed test for add,0,5,5\n");
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move32);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move32);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move33);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move33);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move34);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move34);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move35);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move35);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", mv7);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, mv7);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", mv8);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, mv8);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", mv9);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, mv9);
    printf("\n");

    //***************************************************************************************************************
        // using board1 here
        // tests for add:

    char move36[] = "delete,0,0";
    char cBoard7[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ','5',' ',' ',' ','@','1','!','4','5', '6', '7','8','9'
            ,'@','2',' ','4','5', '6', '7','8','9','@','2','1',' ',' ', '6', '7','8','9','@','2','1',
            '4',' ', ' ', ' ','8','9','@','2','1','4','5', ' ', ' ',' ',' ','@','2','1','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','1','4','5', '6', '7','8','9' };
    char move37[] = "delete,0,0";
    char move38[] = "dlete,0,0";
    char move39[] = "delete,0,";
    char move40[] = "delete,0";
    char move41[] = "delete,0,*";
    char move42[] = "delete,&,0";
    char move43[] = "delete,10,0";
    char move44[] = "delete,0,10";
    char move45[] = "delete,0,10,7";

    char move54[] = "Delete,8,7";
    char move60[] = "delete,0,3,6";
    char move61[] = "delete,3,3,";
    char move62[] = "delete,,";

    makeMove(board1, move36);
    func1(board1, cBoard7);
    printf("\033[0;31m");
    printf("passed test for delete,0,0\n");
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move37);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move37);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move38);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move38);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move39);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move39);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move40);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move40);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move41);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move41);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move42);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move42);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move43);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move43);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move44);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move44);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move45);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move45);
    printf("\n");
    //******************************************************************************************************************
        // using board1 here
        // tests in general:

    char move46[] = "gangsta,0,10";


    printf("\033[0;31m");
    printf("Expected for %s:\n", move46);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move46);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move47);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move47);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move48);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move48);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move49);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move49);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move50);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move50);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move51);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move51);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move52);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move52);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move53);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move53);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move54);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move54);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move55);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move55);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move56);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move56);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move57);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move57);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move58);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move58);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move59);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move59);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move60);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move60);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move61);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move61);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move62);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move62);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move63);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move63);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move64);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move64);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for %s:\n", move65);
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board1, move65);
    printf("\n");

    printf("\033[0;31m");
    printf("passed all tests for makeMove\n");
    printf("\n");

    //********************************************************************************************************************
        //Tests for printBoard
    printf("\033[1;34m");
    printf("###Tests for printBoard###\n");
    printf("\n");

    // we will print board1, with all changes
//    char cBoard7[SIZE*SIZE][SIZE*SIZE] = {' ',' ',' ',' ',' ','5',' ',' ',' ','@','1','!','4','5', '6', '7','8','9'
//            ,'@','2',' ','4','5', '6', '7','8','9','@','2','1',' ',' ', '6', '7','8','9','@','2','1',
//            '4',' ', ' ', ' ','8','9','@','2','1','4','5', ' ', ' ',' ',' ','@','2','1','4','5', '6', '7','8','*'
//            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','1','4','5', '6', '7','8','9'};
    printf("\033[0;31m");
    printf("Expected for:\n");
    printf("    |   5 |    \n@1! | 456 | 789\n@2  | 456 | 789\n\n@21 |   6 | 789\n@21 | 4   |  89\n@21 | 45  |    \n\n@21 | 456 | 78*\n"
        "    |     |    \nA21 | 456 | 789\n");
    printf("\n");
    printf("make sure there is a blank line between board and this message\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    printBoard(board1);
    printf("make sure there is a blank line between board and this message\n");

    printf("\033[0;31m");
    printf("passed all tests for printBoard\n");
    printf("\n");

    //****************************************************************************************************************
        //Tests for testBoard
    printf("\033[1;34m");
    printf("###Tests for testBoard###\n");
    printf("\n");


    assert(!testBoard(board1));
    printf("\033[0;31m");
    printf("passed test for bord1\n");
    printf("\n");

    assert(!testBoard(board4));
    printf("\033[0;31m");
    printf("passed test for bord4\n");
    printf("\n");

    assert(!testBoard(board5));
    printf("\033[0;31m");
    printf("passed test for bord5\n");
    printf("\n");

    assert(testBoard(board8));
    printf("\033[0;31m");
    printf("passed test for bord8\n");
    printf("\n");

    assert(!testBoard(board9));
    printf("\033[0;31m");
    printf("passed test for bord9\n");
    printf("\n");

    assert(testBoard(board10));
    printf("\033[0;31m");
    printf("passed test for bord10\n");
    printf("\n");

    printf("\033[0;31m");
    printf("passed all tests for testBoard\n");
    printf("\n");

    //**************************************************************************************************************
        //Tests for isSameBoard
    printf("\033[1;34m");
    printf("###Tests for isSameBoard###\n");
    printf("\n");

    assert(isSameBoard(board1, board1));
    printf("\033[0;31m");
    printf("passed test for bord1 and board1\n");
    printf("\n");


    printf("\033[0;31m");
    printf("Expected for board5 and boardS3:\n");
    printf("Found inequality on row 1 col 5.\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    assert(!isSameBoard(board5, boardS3));
    printf("\n");


    printf("\033[0;31m");
    printf("Expected for board4 and board8:\n");
    printf("Found inequality on row 1 col 0.\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    assert(!isSameBoard(board4, board8));
    printf("\n");

    assert(isSameBoard(board8, board8));
    printf("\033[0;31m");
    printf("passed test for bord8 and board8\n");
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for board10 and board11:\n");
    printf("Found inequality on row 0 col 0.\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    assert(!isSameBoard(board10, board11));
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for board10 and board12:\n");
    printf("Found inequality on row 0 col 0.\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    assert(!isSameBoard(board10, board12));
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for board10 and board13:\n");
    printf("Found inequality on row 1 col 3.\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    assert(!isSameBoard(board10, board13));
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for board12 and board3:\n");
    printf("Found inequality on row 0 col 0.\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    assert(!isSameBoard(board12, board13));
    printf("\n");

    printf("\033[0;31m");
    printf("passed all tests for isSameBoard\n");
    printf("\n");

    //**********************************************************************************************************
        //Tests for completeBoard
    printf("\033[1;34m");
    printf("###Tests for completeBoard###\n");
    printf("\n");

    completeBoard(board12);
    printf("\033[0;31m");
    printf("Expected for board12:\n");
    printf("\033[0;31m");
    printBoard(board10);
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    printBoard(board12);
    printf("\n");

    completeBoard(board13);
    assert(isSameBoard(board10, board13));
    printf("\033[0;31m");
    printf("passed test for completing board13\n");
    printf("\n");

    //checking if is ok with already complete board
    completeBoard(board10);
    printf("\033[0;31m");
    printf("passed test for completing board10\n");
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for completeBoard(board11):\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    completeBoard(board11);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for completeBoard(board9):\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    completeBoard(board9);
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for completeBoard(board8):\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    completeBoard(board8);
    printf("\n");

    printf("\033[0;31m");
    printf("passed all tests for completeBoard\n");
    printf("\n");
    //******************************************************************************************************************
        //extra tests
    printf("\033[1;34m");
    printf("###Extra Tests###\n");
    printf("\n");

    char board14[SIZE * SIZE][SIZE * SIZE];
    char board15[SIZE * SIZE][SIZE * SIZE];
    char str14[] = "i/123456789/12a456789/123b6789/1234c89/12345d/12345678*//A23456789/";

    printf("\033[0;31m");
    printf("Expected for board14:\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    createBoard(board14, str14);
    printf("\n");


    assert(board14[1][2] != '3');
    printf("\033[0;31m");
    printf("passed test - nothing in board14 was changed\n");
    printf("\n");

    //*********************************************************************************************************************
    char board16[SIZE * SIZE][SIZE * SIZE];
    char str16[] = "i/123456789/12a456789/123b6789/1234c89/12345d/12345678*//A23456789";
    char tBoard16[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','1','2','3','4','5', '6', '7','8','9'
            ,'1','2',' ','4','5','6', '7','8','9','1','2','3',' ',' ', '6', '7','8','9','1','2','3',
            '4',' ', ' ', ' ','8','9','1','2','3','4','5', ' ', ' ',' ',' ','1','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7','8','9' };

    char tBoard17[SIZE * SIZE][SIZE * SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ','@','2','3','4','5', '6', '7','8','9'
            ,'@','2',' ','4','5','6', '7','8','9','@','2','3',' ',' ', '6', '7','8','9','@','2','3',
            '4',' ', ' ', ' ','8','9','@','2','3','4','5', ' ', ' ',' ',' ','@','2','3','4','5', '6', '7','8','*'
            ,' ',' ',' ',' ',' ', ' ', ' ',' ',' ','A','2','3','4','5', '6', '7','8','9' };
    createBoard(board16, str16);
    func1(board16, tBoard16);
    printf("\033[0;31m");
    printf("created  board16 successfully:\n");
    printf("\n");


    char s1[] = "replaceAll,1,@";
    makeMove(board16, s1);
    func1(board16, tBoard17);
    printf("replaced 1 by @ successfully\n");
    printf("\n");

    printf("\033[0;31m");
    printf("Expected for replaceAll,1,@:\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board16, s1);
    printf("\n");

    printf("\033[0;31m");
    assert(isSameBoard(board16, tBoard17));
    printf("passed test- board16 was not changed\n");
    printf("\n");

    char s2[] = "change,0,0,1";

    printf("\033[0;31m");
    printf("Expected for change,0,0,1:\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board16, s2);
    printf("\n");

    printf("\033[0;31m");
    assert(isSameBoard(board16, tBoard17));
    printf("passed test- board16 was not changed\n");
    printf("\n");

    char s3[] = "add,1,2,@";

    printf("\033[0;31m");
    printf("Expected for add,1,2,@:\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board16, s3);
    printf("\n");

    printf("\033[0;31m");
    assert(isSameBoard(board16, tBoard17));
    printf("passed test- board16 was not changed\n");
    printf("\n");
    char s4[] = "delete,0,0";

    printf("\033[0;31m");
    printf("Expected for delete,0,0:\n");
    printf("\033[0;31m");
    printf("Error\n");
    printf("\n");
    printf("\033[1;32m");
    printf("Got:\n");
    printf("\033[0m");
    makeMove(board16, s4);
    printf("\n");

    printf("\033[0;31m");
    assert(isSameBoard(board16, tBoard17));
    printf("passed test- board16 was not changed\n");
    printf("\n");

    //****************************************************************************************************************

    char boardS2[SIZE * SIZE][SIZE * SIZE];
    char strS2[] = "098154623/216938450/453260891/689021534/132485906/540396182/961803245/804512369/325649018";
    char tBoardS2[SIZE * SIZE][SIZE * SIZE] = { '0','9','8','1','5','4','6','2','3','2','1','6','9','3','8','4',
                                           '5','0','4','5','3','2','6','0','8','9','1','6','8','9','0','2','1',
                                           '5','3','4','1','3','2','4','8','5','9','0','6','5','4','0','3','9',
                                           '6','1','8','2','9','6','1','8','0','3','2','4','5','8','0','4','5',
                                           '1','2','3','6','9','3','2','5','6','4','9','0','1','8' };

    createBoard(boardS2, strS2);
    func1(boardS2, tBoardS2);
    printf("\033[0;31m");
    printf("passed test for boardS2\n");
    printf("\n");

    assert(!testBoard(boardS2));
    printf("\033[0;31m");
    printf("passed test - boardS2 is not valid for solving\n");
    printf("\n");

    func1(boardS2, tBoardS2);
    printf("\033[0;31m");
    printf("passed test - nothing in boardS2 was changed\n");
    printf("\n");

    //****************************************************************************************************************
    printf("\n");
    printf("\033[0;31m");
    printf("passed all tests for SIZE = 3\nyou can now change SIZE and run next set of tests\n");
    printf("\n");



    //****************************************************************************************************************
    //****************************************************************************************************************
    printf("\033[1;34m");
    printf("\n");
    printf("####End of tests####\n");

}