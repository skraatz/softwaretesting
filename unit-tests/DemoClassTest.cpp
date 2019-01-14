/**
* Copyright (c) 2018 Stefan Kraatz.
* All rights reserved.
* 
* Redistribution and use in source and binary forms are permitted
* provided that the above copyright notice and this paragraph are
* duplicated in all such forms and that any documentation,
* advertising materials, and other materials related to such
* distribution and use acknowledge that the software was developed
* by the Stefan Kraatz. The name of the Stefan Kraatz may not be 
* used to endorse or promote products derived
* from this software without specific prior written permission.
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
* IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*/

#include "DemoClassTest.h"

void DemoClassTest::setUp() {
    this->dc = new DemoClass();
}

void DemoClassTest::tearDown() {
    delete(this->dc);
}

void DemoClassTest::testCaseOne() {
    double testnumber = dc->convert(-4);
    CPPUNIT_ASSERT( testnumber == -0.4 );
}
void DemoClassTest::testCaseTwo() {
    CPPUNIT_ASSERT( dc->convert( -1) == -0.1 );
}

void DemoClassTest::argumentTest() {
    CPPUNIT_ASSERT_THROW ( dc->convert(-100), std::out_of_range); 
}

CPPUNIT_TEST_SUITE_REGISTRATION( DemoClassTest );
