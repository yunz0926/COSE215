#include <stdio.h>
#include <regex>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
	int numofsecuritynum = 0, numofemail = 0;

	regex securitynum("\\s((98|99|00|01)((0(1|3|5|7|8)|1(0|2))([0-2]\\d|30|31)|(0(4|6|9)|11)([0-2]\\d|30)|02([0-1]\\d|2[0-8]))|000229)-([1-4])[\\d]{6}\\s");
	regex email("\\s([A-Za-z0-9]+)@([a-zA-Z]+)\\.ac\\.kr\\s");

	FILE * fp1 = fopen(argv[1], "r");
	char s[1001];

	while (fgets(s, 1001, fp1) != NULL)
	{
		string str = string(s);
		sregex_iterator iter1(str.begin(), str.end(), securitynum);
		sregex_iterator end;

		while (iter1 != end)
		{
			numofsecuritynum++;
			iter1++;
		}

		sregex_iterator iter2(str.begin(), str.end(), email);

		while (iter2 != end)
		{
			numofemail++;
			iter2++;
		}
	}
	printf("%d\n%d\n", numofsecuritynum, numofemail);
}