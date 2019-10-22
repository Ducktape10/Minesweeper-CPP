cmake_minimum_required(VERSION 3.15)
include(cmake/CompilerWarnings.cmake)

project(minesweeper)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(minesweeper
  src/Enums.h
  src/FlegField.cpp
  src/FlegField.h
  src/GameStateRun.cpp
  src/GameStateRun.h
  src/GenerateMap.cpp
  src/GenerateMap.h
  src/GetNearFields.cpp
  src/GetNearFields.h
  src/GlobalVariables.h
  src/MatrixObject.h
  src/MatrixToString.cpp
  src/MatrixToString.h
  src/Minesweeper.cpp
  src/Minesweeper.h
  src/PlaceMines.cpp
  src/PlaceMines.h
  src/PokeField.cpp
  src/PokeField.h
  src/RevealNulls.cpp
  src/RevealNulls.h
)

target_link_libraries(minesweeper PRIVATE
  CompilerWarnings::High
  CompilerWarnings::Pedantic
  CompilerWarnings::AsError
  CompilerWarnings::Colorful
)

