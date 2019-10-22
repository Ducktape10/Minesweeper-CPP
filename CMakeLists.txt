cmake_minimum_required(VERSION 3.15)
include(cmake/CompilerWarnings.cmake)

project(minesweeper)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(minesweeper
  src/Enums.h
  src/FlegField.cpp
  src/FlegField.h
  src/GlobalVariables.h
  src/MatrixObject.h
  src/MatrixToString.cpp
  src/MatrixToString.h
  src/Minesweeper.cpp
  src/Minesweeper.h
  src/PokeField.cpp
  src/PokeField.h
  src/RevealNulls.cpp
  src/RevealNulls.h
  src/gameStateRun.cpp
  src/gameStateRun.h
  src/generateMap.cpp
  src/generateMap.h
  src/getNearFields.cpp
  src/getNearFields.h
  src/placeMines.cpp
  src/placeMines.h
)

target_link_libraries(minesweeper PRIVATE
  CompilerWarnings::High
  CompilerWarnings::Pedantic
  CompilerWarnings::AsError
  CompilerWarnings::Colorful
)

