add_library(currencylib currency.c)
target_include_directories(currencylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)