/*
*  Author:   suyuhui@youmi.net
*  	     huangjunwei@youmi.net
*  Time:     Mon 15 Jun 2015 08:19:50 PM CST
*  File:     q++.cpp
*  Desc:     main function of this project
*/

#include <vector>
#include <string>

#include "util.h"
#include "iostream"

using namespace std;

void usage(void) {
	cerr << "Usage:" << endl;
	cerr << "	q++ 'select count(*) from example.csv where id > 100'" << endl;
}


int main(int n, char **args) {
	// query example
	// q++ 'select count(*) from xxx.csv where id > 10'
	if(2 != n) {
		usage();
		return 0;
	}
	char *sqlstr = args[1];
	cout << sqlstr << endl;

	string query = string("select id from example.csv where id > 10 and id < 100");
	split(query, " ");

	vector<string> items = split(query, " ");

	cout << upper(query) << endl;
	cout << lower(query) << endl;
	cout << reverse(query) << endl;
	cout << ltrim(query, "s") << endl;
	cout << rtrim(query, "0") << endl;

	cout << join(items, ",") << endl;

	return 0;
}
