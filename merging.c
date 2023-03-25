#include <stdio.h>
int main(int argc, char* argv[])
{
	char tmp[] = "file1.txt";
	char tp[] = "file2.txt";
	FILE* S1 = fopen(tmp, "r");
	FILE* S2 = fopen(tp, "r");
	FILE* S3 = fopen("file3.txt", "a+");
	char ch;
	while (!feof(S1))
	{
		ch = getc(S1);
		if (ch != EOF)fprintf(S3, "%c", ch);
	}
	while (!feof(S2))
	{
		ch = getc(S2);
		if (ch != EOF)fprintf(S3, "%c", ch);
	}
	fclose(S1);
	fclose(S2);
	fclose(S3);
	return 0;
}
