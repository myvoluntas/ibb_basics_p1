cmake_minimum_required(VERSION 3.15)
project(ibb_basics_p1)

set(CMAKE_CXX_STANDARD 14)

add_executable(ibb_basics_p1 main.cpp domain/Book.cpp domain/Book.h cite_service/CiteService.cpp cite_service/CiteService.h app/App.cpp app/App.h)