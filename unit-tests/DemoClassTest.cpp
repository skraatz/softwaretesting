#include "DemoClassTest.h"
#include <iostream>

void DemoClassTest::setUp() {}
void DemoClassTest::tearDown() {}



void DemoClassTest::testCaseOne() {
    double testnumber = dc.convert(-4);
    //std::cout << testnumber << std::endl;
    CPPUNIT_ASSERT( testnumber == -0.4 );
}
void DemoClassTest::testCaseTwo() {
    CPPUNIT_ASSERT( 1==0 );
}

void DemoClassTest::argumentTest() {
    dc.convert(-100); 
}


CPPUNIT_TEST_SUITE_REGISTRATION( DemoClassTest );

