#include  <stdio.h>

void QSort(int x[ ], int left, int right);
void Swap(int x[ ], int i, int j);
void ShowData(int x[ ], int n);
void main(void);

  /* �N�C�b�N�\�[�g���s�� */
void QSort(int x[ ], int left, int right)
{
    int i, j;
    int pivot;

    i = left;                      /* �\�[�g����z��̈�ԏ������v�f�̓Y�� */
    j = right;                     /* �\�[�g����z��̈�ԑ傫���v�f�̓Y�� */

    pivot = x[(left + right) / 2]; /* ��l��z��̒����t�߂ɂƂ� */

    while (1) {                    /* �������[�v */

        while (x[i] < pivot)       /* pivot ���傫���l�� */
            i++;                   /* �o��܂� i �𑝉������� */

        while (pivot < x[j])       /* pivot ��菬�����l�� */
            j--;                   /*  �o��܂� j ������������ */
        if (i >= j)                /* i >= j �Ȃ� */
            break;                 /* �������[�v���甲���� */

        Swap(x, i, j);             /* x[i] �� x[j]������ */
        i++;                       /* ���̃f�[�^ */
        j--;
    }
    ShowData(x, 10);               /* �r���o�߂�\�� */

    if (left < i - 1)              /* ��l�̍��� 2 �ȏ�v�f������� */
        QSort(x, left, i - 1);     /* ���̔z��� Q �\�[�g���� */
    if (j + 1 <  right)            /* ��l�̉E�� 2 �ȏ�v�f������� */
        QSort(x, j + 1, right);    /* �E�̔z��� Q �\�[�g���� */
}

  /* �z��̗v�f���������� */
void Swap(int x[ ], int i, int j)
{
    int temp;

    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
}


  /* n �̃f�[�^��\������ */
void ShowData(int x[ ], int n)
{
    int i;

    for (i = 0; i < n ; i++)
        printf("%d  ", x[i]);
    printf("\n");
}

void main(void)
{      /* �\�[�g����z�� */
    int x[  ] = {6, 3, 1, 7, 0, 4, 8, 5, 2, 9};
    int n = 10;

    printf("�\�[�g�O:\n");
    ShowData(x, n);

    printf("�\�[�g��:\n");
    QSort(x, 0, n - 1);

    printf("�\�[�g��:\n");
    ShowData(x, n);
}