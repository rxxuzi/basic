#include <stdio.h>
#include <stdlib.h>

int pipe_fd[2];

void do_parent(){
    int status;
    //pに文字列を入力する
    char *p = "Hello, my kid.";
    printf("this is my parent\n");
    //最初にクローズする
    close(pipe_fd[0]);
    //文字列が終わるまでループ
    while (*p){
        //閉じてない方に1バイトずつデータを入れる
        //0じゃない限り
        if( write(pipe_fd[1],p,1) < 0){
            perror("write");
            exit(1);
        }
        //char型一個分インクリメント
        p++;
    }
    //closeは通信の終了を子プロセスに通知
    close(pipe_fd[1]);
    //子プロセスが終了するまで待つ
    if(wait(&status) < 0){
        perror("wait");
        exit(1);
    }
    
}
void do_child(){
    int i,c;

    printf("this is child\n");
    //1を閉じて0から読み込む
    close(pipe_fd[1]);
    //parentから受信
    //パイプに対して変数cに1バイトずつ打ち込む
    while ((i = read(pipe_fd[0],&c,1)> 0)){
        //1バイトより大きかったら出力
        putchar(c);
    }
    //改行してクローズ
    putchar('\n');
    close(pipe_fd[0]);
    
}
int main(){
    int child;
    if(pipe(pipe_fd) < 0){
        perror("pipe");
        exit(1);
    }
    //childに代入
    if((child = fork()) < 0){
        perror("fork");
        exit(1);
    }

    if(child){
        do_parent();
    }else{
        do_child();
    }

    return 0;

}
/*
wait(&abc)
abcに子プロセスのアドレスを入れる
*/