/*
  10�i����2�i���ɕϊ�
*/

#include <stdio.h>

int main(void)
{
    char retry; //������x��邩�̊m�F//
    char n = 'n';

    do
    {          //������x��邽�߂̌J��Ԃ�//
        int j; //10�i��������//
        int z; //keke//
        int i[32];
        ;

        printf("10�i��(0�`9999)����͂��Ă�������:");
        scanf_s("%d", &j);
        if (j >= 0 && j <= 9999)
        {
            for (z = 0; j > 0; z++)
            {
                i[z] = j % 2;
                j = j / 2;
            }
            while (z > 0)
                printf("%1d", i[--z]);
            printf("\n");
        }
        else
        {
            puts("�������l����͂��Ă�������");
        }
        printf("�I�����܂����H y/n");
        scanf_s(" %c", &retry);
    } while (retry == n);

    return 0;
}