#include <doctest/doctest.h>
#include <bingo/greeter.h>
#include <bingo/version.h>

#include <string>

TEST_CASE("Bingo") {
  using namespace bingo;

  Bingo bingo("Tests");

  CHECK(bingo.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(bingo.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(bingo.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(bingo.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("Bingo version") {
  static_assert(std::string_view(BINGO_VERSION) == std::string_view("1.0"));
  CHECK(std::string(BINGO_VERSION) == std::string("1.0"));
}
