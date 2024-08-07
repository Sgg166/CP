aux_source_directory(cpp s1 )
include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(FileFunctions SHARED ${s1})
install(TARGETS FileFunctions
  RUNTIME       DESTINATION bin
  LIBRARY       DESTINATION lib
  ARCHIVE       DESTINATION lib
  PUBLIC_HEADER DESTINATION include
) 
