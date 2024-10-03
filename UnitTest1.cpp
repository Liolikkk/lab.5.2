#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		}
	};
}
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.5.2/lab.5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCosTaylorSeries
{
    TEST_CLASS(UnitTestCosTaylorSeries)
    {
    public:

        // Test for cos(0) = 1
        TEST_METHOD(TestCosZero)
        {
            // Arrange
            double x = 0;  // cos(0) = 1
            double eps = 1e-6;  // Precision
            double s = 0;  // Sum variable
            int n = 0;  // Number of terms

            // Act
            S (x, eps, n, s);  // Call the Taylor series approximation

            // Assert
            Assert::AreEqual(1.0, s, eps, L"cos(0) approximation failed.");
        }

        // Test for cos(π/2) = 0
        TEST_METHOD(TestCosPiOver2)
        {
            // Arrange
            double x = cos(x);  // cos(π/2) = 0
            double eps = 1e-6;
            double s = 0;
            int n = 0;

            // Act
            S(x, eps, n, s);

            // Assert
            Assert::AreEqual(0.0, s, eps, L"cos(π/2) approximation failed.");
        }

        // Test for cos(π) = -1
        TEST_METHOD(TestCosPi)
        {
            // Arrange
            double x = cos(x);  // cos(π) = -1
            double eps = 1e-6;
            double s = 0;
            int n = 0;

            // Act
            S (x, eps, n, s);

            // Assert
            Assert::AreEqual(-1.0, s, eps, L"cos(π) approximation failed.");
        }

        // Test for cos(π/3) = 0.5
        TEST_METHOD(TestCosPiOver3)
        {
            // Arrange
            double x = cos(x) / 3;  // cos(π/3) = 0.5
            double eps = 1e-6;
            double s = 0;
            int n = 0;

            // Act
            S (x, eps, n, s);

            // Assert
            Assert::AreEqual(0.5, s, eps, L"cos(π/3) approximation failed.");
        }

        // Test for cos(2π) = 1
        TEST_METHOD(TestCosTwoPi)
        {
            // Arrange
            double x = 2 * cos(x);  // cos(2π) = 1
            double eps = 1e-6;
            double s = 0;
            int n = 0;

            // Act
            S (x, eps, n, s);

            // Assert
            Assert::AreEqual(1.0, s, eps, L"cos(2π) approximation failed.");
        }
    };
}
