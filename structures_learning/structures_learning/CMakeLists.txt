# CMakeList.txt: проект CMake для structures_learning; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (structures_learning "structures_learning.cpp" "structures_learning.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET structures_learning PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
