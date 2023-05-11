#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int fd[2]; //pipe用の引数

/*親プロセス側の文字列strの情報が
pipe関数を使って子プロセス側で表示するプログラム*/
int main(void){ //mian関数

    //pipeの作成
    pipe(fd);
    /*pipe関数は、fd[0]に読み取り用のエンドポイント、
    fd[1]に書き込み用のエンドポイントが格納される*/

    //forkの実行
    pid_t pid = fork();

    switch (pid){
    case -1://-1がかえってきた時はエラーとなる
        perror("FORK FAILED");
        /*perror関数は、エラーが発生した際に、
        エラーメッセージを標準エラー出力に出力するための関数*/

        exit(1);//強制終了
        break;
    
    case 0: //子プロセス
    int c , i;//子プロセス側で使う読み取り用の変数
    close(fd[1]);
    /*書き込み用エンドポイントをクローズする。
    (読み取り専用にする)*/
    printf("Get String is : ");//取得した文字列を1文字ずつ表示する
    while(( i = read(fd[0] , &c , sizeof(char))) > 0){
        putchar(c);//文字の表示
    }
    putchar('\n');//改行 
    close(fd[0]);/*読み込み用エンドポイントをクローズする。*/
    break;

    default://親プロセス
    int status;
    char *str = "Hello C Language!!";//子プロセスに送る予定の文字列
    close(fd[0]);
    /*読み込み用エンドポイントをクローズする。
    (書き込み専用にする)*/

    while(*str){
        /*配列の要素を一個ずつwriteする*/
        if(write(fd[1] , str , 1) < 0){
            perror("WRITE IS ERROR");
            exit(1);//強制終了
        }
        str++; //インクリメント
    }    
    close(fd[1]);/*書き込み用エンドポイントをクローズする。*/
    if(wait(&status) < 0){
        perror("wait");
        exit(1);
    }
    break;
    }
    return 0;
}