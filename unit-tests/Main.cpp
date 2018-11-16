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
    //return result.wasSuccessful() ? 0 : 1; 

}
