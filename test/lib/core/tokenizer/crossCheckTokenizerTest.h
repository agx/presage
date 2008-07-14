
/******************************************************
 *  Presage, an extensible predictive text entry system
 *  ---------------------------------------------------
 *
 *  Copyright (C) 2008  Matteo Vescovi <matteo.vescovi@yahoo.co.uk>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
                                                                             *
                                                                **********(*)*/


#ifndef SOOTH_CROSSCHECKTOKENIZERTEST
#define SOOTH_CROSSCHECKTOKENIZERTEST

#include <cppunit/extensions/HelperMacros.h>

#include "testStringSuite.h"
#include "core/tokenizer/forwardTokenizer.h"
#include "core/tokenizer/reverseTokenizer.h"

/** Validates ForwardTokenizer and ReverseTokenizer tokenization.
 *
 * Cross-checks ForwardTokenizer and ReverseTokenizer by comparing the
 * output of the ForwardTokenizer and ReverseTokenizer tokenization on
 * the same strings set.
 */
class CrossCheckTokenizerTest : public CppUnit::TestFixture { 
public:
    void setUp();
    void tearDown();

    void testNextToken();
    void testLowercaseMode();
    void testProgress();
    void runCrossCheck(ForwardTokenizer&, ReverseTokenizer&);

private:
    std::string blankspaces;
    std::string separators;

    TestStringSuite* stringSuite;

    CPPUNIT_TEST_SUITE( CrossCheckTokenizerTest );
    CPPUNIT_TEST( testNextToken                 );
    CPPUNIT_TEST( testLowercaseMode             );
    CPPUNIT_TEST( testProgress                  );
    CPPUNIT_TEST_SUITE_END();
};

#endif // SOOTH_CROSSCHECKTOKENIZERTEST
