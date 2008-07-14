
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


#ifndef SOOTH_PROFILEMANAGERTEST
#define SOOTH_PROFILEMANAGERTEST

#include <cppunit/extensions/HelperMacros.h>

#include "core/profileManager.h"

#include "core/contextTracker.h"
#include "core/predictor.h"
#include "core/selector.h"

class ProfileManagerTest : public CppUnit::TestFixture { 
public:
    void setUp();
    void tearDown();
    
    void testDefaultProfile();
    void testNonExistantProfile();
    void testCustomProfile();

private:
    void testProfile();

    ProfileManager* profileManager;
    Profile*        profile;
    Configuration*  configuration;

    ContextTracker* contextTracker;
    Predictor*      predictor;
    Selector*       selector;
    
    CPPUNIT_TEST_SUITE( ProfileManagerTest );
    CPPUNIT_TEST( testDefaultProfile       );
    CPPUNIT_TEST( testNonExistantProfile   );
    CPPUNIT_TEST( testCustomProfile        );
    CPPUNIT_TEST_SUITE_END();
};

#endif // SOOTH_PROFILEMANAGERTEST
