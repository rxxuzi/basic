#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 11) {
        cerr << "エラー: 10個の整数を入力してください。" << endl;
        return 1;
    }

    ofstream file("data.txt");
    if (!file) {
        cerr << "エラー: ファイルを開けませんでした。" << endl;
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        file << argv[i] << endl;
    }
    file.close();
    cout << "入力した内容がdata.txtに保存されました。" << endl;
    return 0;
}
