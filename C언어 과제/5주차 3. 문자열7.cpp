#include <stdio.h>
#include <string.h>

int main()
{
	char input[200] = "";
	int count[26] = { 0 };
	int ch;
	int i = 0;

	while((ch = getchar()) != EOF){
		input[i++] = ch;
	}
	i = 0;
	while (input[i] != '\0') {
		if (input[i] >= 'a' && input[i] <= 'z') {
			count[input[i] - 'a']++;
		}
		i++;
	}
	printf("ÀÔ·Â¹®ÀÚ¿­ : %s", input);
	for (int i = 0; i < 26; i++)  printf("%c Ãâ¿¬È½¼ö : %d\n", 'a' + i, count[i]);
	return 0;
}
