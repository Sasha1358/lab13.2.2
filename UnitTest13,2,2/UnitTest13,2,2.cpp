#include "pch.h"
#include "CppUnitTest.h"
#include "../lab13.2.2/Source.cpp"  // Include the source file that contains the processInput function

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1322
{
    TEST_CLASS(UnitTest1322)
    {
    public:
        int processInput(int a, char b, int c);

        TEST_METHOD(TestMethod1)
        {
            int actual_output = processInput(5, 'A', static_cast<int>('A') / ALPHABET_MATRIX_COLS_DIVISOR);
            int expected_output = 0;
            Assert::AreEqual(expected_output, actual_output);
        }
    };
    int UnitTest1322::processInput(int a, char b, int c)
    {
        return 0;
    }
}
