#define BOOST_TEST_MODULE Suite_example
#include <boost/test/included/unit_test.hpp>

#include "util.h"

using namespace cs5150;

BOOST_AUTO_TEST_SUITE(util_suite)
    BOOST_AUTO_TEST_CASE(testCharToInt) {
        BOOST_TEST(0 == charToInt('0'));
        BOOST_TEST(35 == charToInt('Z'));
    }

    BOOST_AUTO_TEST_CASE(testIntToChar) {
        BOOST_TEST('9' == intToChar(9));
        BOOST_TEST('A' == intToChar(10));
    }

    BOOST_AUTO_TEST_CASE(testMod36) {
        BOOST_TEST(0 == mod36(36));
        BOOST_TEST(1 == mod36(-35));
        BOOST_TEST(35 == mod36(71));
    }

BOOST_AUTO_TEST_SUITE_END()
