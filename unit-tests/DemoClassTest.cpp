#include "DemoClassTest.h"
#include <iostream>
#include <vector>

void DemoClassTest::setUp() {}
void DemoClassTest::tearDown() {}



void DemoClassTest::testCaseOne() {
    double testnumber = dc.convert(-4);
    CPPUNIT_ASSERT( testnumber == -0.4 );
}
void DemoClassTest::testCaseTwo() {
    CPPUNIT_ASSERT( dc.convert( -1) == -0.1 );
}

void DemoClassTest::argumentTest() {
    CPPUNIT_ASSERT_THROW ( dc.convert(-100), std::out_of_range); 
}


namespace MySuites {
   std::string converter() { 
     return "Math";
   }
 }

CPPUNIT_TEST_SUITE_REGISTRATION( DemoClassTest );
// CPPUNIT_TEST_SUITE_NAMED_REGISTRATION( DemoClassTest, MySuites::converter() );
