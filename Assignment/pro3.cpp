#include <stdio.h>
#include <regex>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
	regex re("(\\s((98|99|00|01)((0(1|3|5|7|8)|1(0|2))([0-2]\\d|30|31)|(0(4|6|9)|11)([0-2]\\d|30)|02([0-1]\\d|2[0-8]))|000229)-([1-4])[\\d]{6}\\s)|(\\s([A-Za-z0-9]+)@([a-zA-Z]+)\\.ac\\.kr\\s)");
	regex securitynum("\\s((98|99|00|01)((0(1|3|5|7|8)|1(0|2))([0-2]\\d|30|31)|(0(4|6|9)|11)([0-2]\\d|30)|02([0-1]\\d|2[0-8]))|000229)-([1-4])[\\d]{6}\\s");
	regex email("\\s([A-Za-z0-9]+)@([a-zA-Z]+)\\.ac\\.kr\\s");

	FILE * fp1 = fopen(argv[1], "r");
	char s[1001];
	const char * c;
	smatch match;
	string match_str;
	while (fgets(s, 1001, fp1) != NULL)
	{
		string str = string(s);
		sregex_iterator iter(str.begin(), str.end(), re);
		sregex_iterator end;

		while (iter != end)
		{
			match = *iter;
			match_str = match.str();
			if (regex_match(match_str, securitynum))
				match_str = regex_replace(match_str, securitynum, "$1-$12XXXXXX");
			else if (regex_match(match_str, email))
				match_str = match.format("$15@XXXX.ac.kr");

			c = match_str.c_str();
			printf("%s\n", c);
			iter++;
		}
	}
}