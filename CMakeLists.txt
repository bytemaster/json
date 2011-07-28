include_directories( include )

SET( sources 
            src/reader.cpp
            src/value.cpp
            src/writer.cpp
             )

install( DIRECTORY include/boost/json DESTINATION include/boost )
SETUP_LIBRARY( boost_json SOURCES ${sources}
                             LIBRARIES 
                             LIBRARY_TYPE STATIC )

