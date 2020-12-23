#include "pch.h"
#include "CppUnitTest.h"
#include "../laba9.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest911
{
	TEST_CLASS(UnitTest911)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int kil_student = 2;
			student* s = new student[kil_student];
			s[0].prizv = "клоун";
			s[0].specialization = Special(4);
			s[0].phisuka = 5;
			s[0].matematic = 4;
			s[0].informatic = 5;
			s[1].prizv = "візуал";
			s[1].specialization = Special(3);
			s[1].phisuka = 4;
			s[1].matematic = 5;
			s[1].informatic = 5;

			double l = find_studend(s, kil_student);
			Assert::AreEqual(1, 1);
		}
	};
}
