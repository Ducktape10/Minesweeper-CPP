add_library(CompilerWarnings_High INTERFACE)
add_library(CompilerWarnings::High ALIAS CompilerWarnings_High)
target_compile_options(CompilerWarnings_High INTERFACE
  $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:-Wall;-Wextra>
  $<$<CXX_COMPILER_ID:MSVC>:/W4>
)

add_library(CompilerWarnings_Pedantic INTERFACE)
add_library(CompilerWarnings::Pedantic ALIAS CompilerWarnings_Pedantic)
target_compile_options(CompilerWarnings_Pedantic INTERFACE
  $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:-pedantic>
  $<$<CXX_COMPILER_ID:MSVC>:/Za>
)

add_library(CompilerWarnings_AsError INTERFACE)
add_library(CompilerWarnings::AsError ALIAS CompilerWarnings_AsError)
target_compile_options(CompilerWarnings_AsError INTERFACE
  $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:-Werror>
  $<$<CXX_COMPILER_ID:MSVC>:/WX>
)

add_library(CompilerWarnings_Colorful INTERFACE)
add_library(CompilerWarnings::Colorful ALIAS CompilerWarnings_Colorful)
target_compile_options(CompilerWarnings_Colorful INTERFACE
  $<$<CXX_COMPILER_ID:GNU>:-fdiagnostics-color=always>
)

