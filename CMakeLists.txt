include_directories( include )

SET( sources 
            src/reader.cpp
            src/value.cpp
            src/writer.cpp
             )

SETUP_LIBRARY( boost_json SOURCES ${sources}
                             LIBRARIES 
                             LIBRARY_TYPE STATIC )

