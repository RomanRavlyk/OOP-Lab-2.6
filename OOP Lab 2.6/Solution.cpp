#include <iostream>
#include <string>
#include <sstream>
#include "Solution.h"

using namespace std;


int Solution::counter = 0;

void Solution::Read() {
	Liquid s;
	cout << endl;
	cout << "Solution = ? " << endl;
	s.Read();
	int Am;
	cout << "Amount = ? " << endl;

	cin >> Am;
	Init(Am, s);

}

void Solution::Display() const {
	cout << "Amount: " << getAmount() << endl;
	cout << "Liquid: "; liquid.Display(); cout << endl;
}

void Solution::Init(int amount, Liquid liquid) {
	setAmount(amount);
	setLiquid(liquid);
}

string Solution::toString() {
	cout << "Amount string: ";
	return to_string(amount);
}



Solution& Solution::operator ++() {
	amount++;
	return *this;
}

Solution& Solution::operator --() {
	amount--;
	return *this;
}

Solution Solution::operator ++(int)
{
	Solution t(*this);
	amount++;
	return t;
}

Solution Solution::operator --(int)
{
	Solution t(*this);
	amount--;
	return t;
}

ostream& operator << (ostream& out, const Solution& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Solution& r)
{

	in >> r.liquid; cout << endl;
	cout << " Enter amount = "; in >> r.amount; cout << endl;
	return in;
}

Solution::operator string() const {
	stringstream ss;
	ss << liquid;
	ss << "Your amount: " << amount << endl;
	return ss.str();
}

Solution& Solution::operator=(const Solution& other) {
	this->liquid = other.liquid;
	amount = other.amount;
	return *this;
}

int Solution::getCounter()
{
	return Solution::counter;
}

/////////////////////////Liquid

int Solution::Liquid::counter = 0;


void Solution::Liquid::setDen(int value) {
	density = value;
}

void Solution::Liquid::setName(string value) {
	name = value;
}

void Solution::Liquid::Read() {
	string x;
	int y;
	cout << "Enter Liquid name: "; cin >> x;
	cout << "Enter Liquid density: "; cin >> y;
	if (Init(x, y)) { setName(x); setDen(y); }
}

bool Solution::Liquid::Init(string value, int Den) {
	if (value.length() > 0 && Den > 0) {
		return true;
	}
}

void Solution::Liquid::Display() const {
	cout << "Liquid name: " << getName() << endl;
	cout << "Liquid density: " << getDensity() << endl;
}

string Solution::Liquid::toString() {
	cout << "Density of Liquid: ";
	return to_string(density);
}

Solution::Liquid& Solution::Liquid::operator ++() {
	density++;
	return *this;
}

Solution::Liquid& Solution::Liquid::operator --() {
	density--;
	return *this;
}

Solution::Liquid Solution::Liquid::operator ++(int)
{
	Liquid t(*this);
	density++;
	return t;
}

Solution::Liquid Solution::Liquid::operator --(int)
{
	Liquid t(*this);
	density--;
	return t;
}

ostream& operator << (ostream& out, const Solution::Liquid& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Solution::Liquid& r)
{
	cout << " Enter liqud name = "; in >> r.name; cout << endl;
	cout << " Enter liqud density = "; in >> r.density; cout << endl;
	return in;
}

Solution::Liquid::operator string() const {
	cout << "Your liqud name: " << name << endl;
	cout << "Your liquid density: " << density << endl;
	return "";
}

Solution::Liquid& Solution::Liquid::operator=(const Liquid& other) {
	name = other.name;
	density = other.density;
	return *this;
}

int Solution::Liquid::getCounter()
{
	return Solution::Liquid::counter;
}