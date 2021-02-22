#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1.1/Combination.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11OOP
{
	TEST_CLASS(UnitTest11OOP)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1, Factorial(0));
		}
	};
}
