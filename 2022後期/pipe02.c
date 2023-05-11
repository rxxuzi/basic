#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
int fd[2]; //pipe用の引数

/*親プロセス側の文字列strの情報が
pipe関数を使って子プロセス側で表示するプログラム*/
int main(void){ //mian関数
    char str[] = "Hello C Language!!";//子プロセスに送る予定の文字列
    char read_str[100];//子プロセス側で使う読み取り用の配列

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
    close(fd[1]);
    /*書き込み用エンドポイントをクローズする。
    (読み取り専用にする)*/
    read(fd[0] , read_str , sizeof(read_str));
    /*read関数
    読み取り用のエンドポイントの変数名,
    読み取り用の配列(もしくはポインタ),
    読み取る際の変数(配列)のバイト数
    */
    printf("Get String is : %s\n",read_str);//取得した文字列を表示する
    close(fd[0]);/*読み込み用エンドポイントをクローズする。*/
    break;
    default://親プロセス
    close(fd[0]);
    /*読み込み用エンドポイントをクローズする。
    (書き込み専用にする)*/
    write(fd[1] , str , sizeof(str));
    /*read関数
    書き込み用のエンドポイントの変数名,
    書き込み用の配列(もしくはポインタ),
    書き込む際の変数(配列)のバイト数
    */
    close(fd[1]);/*書き込み用エンドポイントをクローズする。*/
    break;
    }
    return 0;
}