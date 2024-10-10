cmake_minimum_required(VERSION 3.16)

project(ASCIICode2 LANGUAGES C)

add_executable(ASCIICode2 main.c)

include(GNUInstallDirs)
install(TARGETS ASCIICode2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
