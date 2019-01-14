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

#include <iostream>
#include <string>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestFixture.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestAssert.h>
#include <cppunit/TestCase.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TextOutputter.h>
#include <cppunit/XmlOutputter.h>

#include "DemoClassTest.h"

int main() {
    std::string runArg = std::string ( "All Tests" ); 

    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
   
    CppUnit::TestResult controller; 
    CppUnit::TestResultCollector result;

    controller.addListener ( &result ); 
 
    std::ofstream xmlout ( "testresultout.xml" ); 
    CppUnit::XmlOutputter xmlOutputter ( &result, xmlout ); 
    CppUnit::TextOutputter consoleOutputter ( &result, std::cout ); 
 
    runner.addTest ( registry.makeTest() ); 
    runner.run ( controller, runArg.c_str() ); 
 
    xmlOutputter.write(); 
    consoleOutputter.write(); 
 

    return 0;

}
