cmake_minimum_required(VERSION 3.10)
project(HE)
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/INSTALL CACHE PATH "Default prefix of install directories" FORCE)
endif()


set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib)


add_subdirectory(file)
include_directories(include)
add_executable(HE main.cpp)
target_link_libraries(HE FileFunctions)  
install(TARGETS HE
  RUNTIME       DESTINATION bin      
  LIBRARY       DESTINATION lib      
  ARCHIVE       DESTINATION lib      
  PUBLIC_HEADER DESTINATION include  
)
