#pragma once
#include <string>

using namespace std;
class Solution
{
private:
	int amount;
	static int counter;
public:
	class Liquid {
	private:
		std::string name;
		int density;
		static int counter;
	public:
		Liquid() : name(""), density(0) { counter++; };
		Liquid(const std::string& name, int density) : name(name), density(density) { counter++; };
		Liquid(const Liquid& other) : name(other.name), density(other.density) { counter++; };
		~Liquid() { counter--; }
		string getName() const { return name; }
		void setName(std::string value);
		int getDensity() const { return density; }
		void setDen(int value);
		void Read();
		void Display() const;
		bool Init(std::string value, int Den);
		std::string toString();

		Liquid& operator ++();
		Liquid& operator --();
		Liquid operator ++(int);
		Liquid operator --(int);
		operator string() const;
		Liquid& operator=(const Liquid& other);
		friend ostream& operator << (ostream&, const Liquid&);
		friend istream& operator >> (istream&, Liquid&);
		static int getCounter();
	};
	Liquid liquid;

	Solution() : liquid(liquid), amount(0) { counter++; };

	Solution(const Liquid& liquid1, int amount1) : liquid(liquid1), amount(amount1) { counter++; };

	Solution(const Solution& other) : liquid(other.liquid), amount(other.amount) { counter++; };
	~Solution() { counter--; }
	int getAmount() const { return amount; }
	void setAmount(int value) { this->amount = value; };
	void setLiquid(Liquid liquid) { this->liquid = liquid; };
	Liquid getLiquid() const { return liquid; }
	void Init(int amount, Liquid liquid);
	void Display() const;
	void Read();
	string toString();

	Solution& operator=(const Solution& other);
	Solution& operator ++();
	Solution& operator --();
	Solution operator ++(int);
	Solution operator --(int);
	operator string() const;
	friend ostream& operator << (ostream&, const Solution&);
	friend istream& operator >> (istream&, Solution&);
	static int getCounter();

};

