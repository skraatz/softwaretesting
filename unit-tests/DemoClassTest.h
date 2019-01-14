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
    CPPUNIT_TEST (argumentTest );


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
