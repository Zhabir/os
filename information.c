#include <stdio.h>

int main()//int main
{
        FILE* file = fopen("file.txt","r"); //открываем файл
        if(file != NULL) //проверка на открытие файла
        {
                printf("file.txt\n");
                int size = 0;
                while(!feof(file)) //считаем размер файла
                {
                        getc(file);
                        size++;
                }
                printf("Размер файла - %d байт\n", size);
                fclose(file); //закрываем открытый файл
        }
        else
        {
                printf("вы не создали последний файл");
        }
        return 0;
}
