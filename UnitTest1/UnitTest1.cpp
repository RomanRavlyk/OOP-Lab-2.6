#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 2.6/Solution.h"
#include "..//OOP Lab 2.6/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Solution::Liquid liq("water", 32);
			Assert::AreEqual(32, liq.getDensity());
		}
	};
}
