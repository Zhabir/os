#include <stdio.h>
int main(int argc, char* argv[])
{
	FILE* S1 = fopen(argv[1], "r");             //Открыли файлы, которые надо слить
	FILE* S2 = fopen(argv[2], "r");
	FILE* S3 = fopen("file.txt", "a+");         //Открыли файл в котором сольются два других файла, если файл не существует, то создаем его
	char ch;
	if(S1 != NULL && S2 != NULL)    //проверка на существование файлов
	{
		while (!feof(S1))
		{
			ch = getc(S1);                    //считываем символ и записываем в выходной файл
			if (ch != EOF)fprintf(S3, "%c", ch);
		}
		while (!feof(S2))
		{
			ch = getc(S2);
			if (ch != EOF)fprintf(S3, "%c", ch);
		}
	}
	fclose(S1);      //закрываем все открытые файлы
	fclose(S2);
	fclose(S3);
	return 0;
}
