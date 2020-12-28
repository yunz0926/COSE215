#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <regex>
#include <string>

using namespace std;

void morsematch(string str);
int main(int argc, char * argv[])
{
	string str;
	getline(cin, str);
	regex re("[-.]{1,7}");

	sregex_iterator it(str.begin(), str.end(), re);
	sregex_iterator end;

	while (it != end)
	{
		smatch match = *it;
		string match_str = match.str();

		morsematch(match_str);
		it++;
	}
}
void morsematch(string str)
{

	if (regex_match(str, regex("\\.-")))
		printf("a");
	else if (regex_match(str, regex("-\\.{3}")))
		printf("b");
	else if (regex_match(str, regex("(-\\.){2}")))
		printf("c");
	else if (regex_match(str, regex("-\\.{2}")))
		printf("d");
	else if (regex_match(str, regex("\\.")))
		printf("e");
	else if (regex_match(str, regex("\\.{2}-\\.")))
		printf("f");
	else if (regex_match(str, regex("-{2}\\.")))
		printf("g");
	else if (regex_match(str, regex("\\.{4}")))
		printf("h");
	else if (regex_match(str, regex("\\.{2}")))
		printf("i");
	else if (regex_match(str, regex("\\.-{3}")))
		printf("j");
	else if (regex_match(str, regex("-\\.-")))
		printf("k");
	else if (regex_match(str, regex("\\.-\\.{2}")))
		printf("l");
	else if (regex_match(str, regex("-{2}")))
		printf("m");
	else if (regex_match(str, regex("-\\.")))
		printf("n");
	else if (regex_match(str, regex("-{3}")))
		printf("o");
	else if (regex_match(str, regex("\\.-{2}\\.")))
		printf("p");
	else if (regex_match(str, regex("-{2}\\.-")))
		printf("q");
	else if (regex_match(str, regex("\\.-\\.")))
		printf("r");
	else if (regex_match(str, regex("\\.{3}")))
		printf("s");
	else if (regex_match(str, regex("-")))
		printf("t");
	else if (regex_match(str, regex("\\.{2}-")))
		printf("u");
	else if (regex_match(str, regex("\\.{3}-")))
		printf("v");
	else if (regex_match(str, regex("\\.-{2}")))
		printf("w");
	else if (regex_match(str, regex("-\\.{2}-")))
		printf("x");
	else if (regex_match(str, regex("-\\.-{2}")))
		printf("y");
	else if (regex_match(str, regex("-{2}\\.{2}")))
		printf("z");
	else if (regex_match(str, regex("-{5}")))
		printf("0");
	else if (regex_match(str, regex("\\.-{4}")))
		printf("1");
	else if (regex_match(str, regex("\\.{2}-{3}")))
		printf("2");
	else if (regex_match(str, regex("\\.{3}-{2}")))
		printf("3");
	else if (regex_match(str, regex("\\.{4}-")))
		printf("4");
	else if (regex_match(str, regex("\\.{5}")))
		printf("5");
	else if (regex_match(str, regex("-\\.{4}")))
		printf("6");
	else if (regex_match(str, regex("-{2}\\.{3}")))
		printf("7");
	else if (regex_match(str, regex("-{3}\\.{2}")))
		printf("8");
	else if (regex_match(str, regex("-{4}\\.")))
		printf("9");
	else if (regex_match(str, regex("(\\.-){3}")))
		printf(".");
	else if (regex_match(str, regex("-{2}\\.{2}-{2}")))
		printf(",");
	else if (regex_match(str, regex("\\.{2}-{2}\\.{2}")))
		printf("?");
	else if (regex_match(str, regex("\\.-{4}\\.")))
		printf("\'");
	else if (regex_match(str, regex("(-\\.){2}-{2}")))
		printf("!");
	else if (regex_match(str, regex("-\\.{2}-\\.")))
		printf("/");
	else if (regex_match(str, regex("-\\.-{2}\\.")))
		printf("(");
	else if (regex_match(str, regex("-\\.-{2}\\.-")))
		printf(")");
	else if (regex_match(str, regex("\\.-\\.{3}")))
		printf("&");
	else if (regex_match(str, regex("-{3}\\.{3}")))
		printf(":");
	else if (regex_match(str, regex("(-\\.){3}")))
		printf(";");
	else if (regex_match(str, regex("-\\.{3}-")))
		printf("=");
	else if (regex_match(str, regex("(\\.-){2}\\.")))
		printf("+");
	else if (regex_match(str, regex("-\\.{4}-")))
		printf("-");
	else if (regex_match(str, regex("\\.{2}-{2}\\.-")))
		printf("_");
	else if (regex_match(str, regex("\\.-\\.{2}-\\.")))
		printf("\"");
	else if (regex_match(str, regex("\\.{3}-\\.{2}-")))
		printf("$");
	else if (regex_match(str, regex("\\.-{2}\\.-\\.")))
		printf("@");
}