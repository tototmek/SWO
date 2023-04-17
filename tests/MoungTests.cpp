#include "Moung.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Moung", "[moung]") {
  Moung moung(1);
  REQUIRE(moung.moung(1) == 2);
}