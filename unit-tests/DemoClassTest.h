#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestFixture.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestAssert.h>
#include <cppunit/TestCase.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/extensions/HelperMacros.h>
#include <stdexcept>
#include "democlass.h"

class DemoClassTest : public CppUnit::TestFixture { 

    CPPUNIT_TEST_SUITE( DemoClassTest );

    CPPUNIT_TEST( testCaseOne );
    CPPUNIT_TEST( testCaseTwo );
    CPPUNIT_TEST_EXCEPTION( argumentTest, std::illegal_argument );
  
    CPPUNIT_TEST_SUITE_END();

    DemoClass dc;

    public: 
  

    void setUp(); 
    void tearDown(); 
    void testCaseOne(); 
    void testCaseTwo();
    void argumentTest();
 
  


/* simple style
  static CppUnit::Test *suite()
  {
    CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "DemoClassTest" );
    suiteOfTests->addTest( new CppUnit::TestCaller<DemoClassTest>("tc 1", &DemoClassTest::testCaseOne ) ); 
    suiteOfTests->addTest( new CppUnit::TestCaller<DemoClassTest>("tc 2", &DemoClassTest::testCaseTwo ) ); 

    return suiteOfTests;
  }
*/


};
