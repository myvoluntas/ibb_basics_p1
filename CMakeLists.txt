cmake_minimum_required(VERSION 3.15)
project(ibb_basics_p1)

set(CMAKE_CXX_STANDARD 17)

add_executable(ibb_basics_p1 main.cpp domain/Book.cpp domain/Book.h domain/CiteStyle.cpp domain/CiteStyle.h app/App.cpp app/App.h app/ExecuteApp.cpp app/ExecuteApp.h database/BookRepository.cpp database/BookRepository.h database/CiteStyleRepository.cpp database/CiteStyleRepository.h app/ConsoleUtility.cpp app/ConsoleUtility.h)