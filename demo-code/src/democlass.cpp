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

#include "./democlass.h"
#include <iostream>

double DemoClass::convert(int input) throw (std::out_of_range){
    if (-10 <= input && input <= 10) {
        return ((double)input)/10;
    } else {
        throw std::out_of_range( "received input out of range" );
    }
}
