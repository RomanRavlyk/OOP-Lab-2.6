#include "Solution.h"
#include <iostream>
using namespace std;


int main()
{
		Solution::Liquid liquid;
		Solution sol(liquid, 0);

		Solution::Liquid liquid1;
		Solution sol1(liquid, 0);

		cin >> sol;
		cout << sol;

		cin >> sol1;
		cout << sol1;

		cout << sol++ << endl;
		cout << sol-- << endl;
		cout << ++sol << endl;
		cout << --sol << endl;

		sol = sol1;
		cout << sol;

		cout << "Solution : " << Solution::getCounter() << endl;
		cout << "Solution::Liquid : " << Solution::Liquid::getCounter() << endl;
		Solution::Liquid m1("water", 23);
		cout << "Solution::Liquid +1 : " << Solution::Liquid::getCounter() << endl;
		{
			Solution s4(m1, 45);
			cout << "Solution local : " << Solution::getCounter() << endl;
			cout << "Solution::Liquid local : " << Solution::Liquid::getCounter() << endl;
			Solution::Liquid m1;
			cout << "Solution::Liquid local +1 : " << Solution::Liquid::getCounter() << endl;
		}
		cout << "Solution : " << Solution::getCounter() << endl;
		cout << "Solution::Liquid : " << Solution::Liquid::getCounter() << endl;

		return 0;
	
}