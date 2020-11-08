#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double d, t = 2, s = 1;
			
			d = f(1, t * t, s) + f(t, s * s, 1) / 1 + f(1, t * s, 1) * f(1, t * s, 1);
			Assert::AreEqual(d, 53.7313);
		}
	};
}
