#include "pch.h"
#include "CppUnitTest.h"

#include "Vector3.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestVector3
{
	TEST_CLASS(TestVector3)
	{
	public:
		
		TEST_METHOD(Constructor)
		{
			Vector3 test_vector(1.0f, 2.0f, 3.0f);
			Assert::AreEqual(1.0f, test_vector.x);
			Assert::AreEqual(2.0f, test_vector.y);
			Assert::AreEqual(3.0f, test_vector.z);
		}
	};
}
