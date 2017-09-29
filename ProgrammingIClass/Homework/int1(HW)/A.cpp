#include <stdio.h>

int main()
{
	char name[110][15];
	int limit, loop, ans=-1;
	scanf("%d %d", &loop, &limit);
	for(int i = 0; i < loop; i++)
	{
		scanf("%s", &name[i]);
		if(name[i][0] == 'S' && name[i][1] == 'e' && name[i][2] == 'j' && name[i][3] == 'o' && name[i][4] == 'n' && name[i][5] == 'g') ans = i+1;
	}
	printf("%d %c", ans, (((ans <= limit) && (ans != 0 && ans != -1) ? 'O' : 'X')));
}
