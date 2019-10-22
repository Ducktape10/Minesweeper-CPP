add_executable(minesweeper
  Enums.h
  FlegField.cpp
  FlegField.h
  GlobalVariables.h
  MatrixObject.h
  MatrixToString.cpp
  MatrixToString.h
  Minesweeper.cpp
  Minesweeper.h
  PokeField.cpp
  PokeField.h
  RevealNulls.cpp
  RevealNulls.h
  gameStateRun.cpp
  gameStateRun.h
  generateMap.cpp
  generateMap.h
  getNearFields.cpp
  getNearFields.h
  placeMines.cpp
  placeMines.h
)

target_link_libraries(minesweeper PRIVATE
  CompilerWarnings::High
  CompilerWarnings::Pedantic
  CompilerWarnings::AsError
  CompilerWarnings::Colorful
)

