#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 11) {
        cerr << "�G���[: 10�̐�������͂��Ă��������B" << endl;
        return 1;
    }

    ofstream file("data.txt");
    if (!file) {
        cerr << "�G���[: �t�@�C�����J���܂���ł����B" << endl;
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        file << argv[i] << endl;
    }
    file.close();
    cout << "���͂������e��data.txt�ɕۑ�����܂����B" << endl;
    return 0;
}
