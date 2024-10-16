#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.1rek/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int SIZE = 21;
            int arr[SIZE];
            create(arr, SIZE, 15, 85, 0);
            Assert::AreEqual(626, Sum(arr, SIZE, 0, 0), 0.00001);
        }

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 21;
            int arr[SIZE];
            create(arr, SIZE, 18, 85, 0);
            Assert::AreEqual(10, Count(arr, SIZE, 0, 0), 0.00001);
        }
    };
}
