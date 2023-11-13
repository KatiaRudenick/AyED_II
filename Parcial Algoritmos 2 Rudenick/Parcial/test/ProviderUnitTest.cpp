#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Provider.hpp>
#include <iostream>
#include <memory>
#include <catch.hpp>

using namespace std;
 
TEST_CASE( "Create providers", "[Provider]") {
  // Arrange
  auto provider = make_shared<Provider>("P00", "Gigi", "NYC");

  // Act
string providerId = provider->getCode();

  // Assert
  REQUIRE(providerId == "P00");
}