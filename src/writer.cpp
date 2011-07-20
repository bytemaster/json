//          Copyright John W. Wilkinson 2007 - 2011
// Distributed under the MIT License, see accompanying file LICENSE.txt

// json spirit version 4.04

#include <boost/json/writer.hpp>

using namespace boost::json;

void boost::json::write( const Value& value, std::ostream& os, unsigned int options )
{
    write_stream( value, os, options );
}

std::string boost::json::write( const Value& value, unsigned int options )
{
    return write_string( value, options );
}

void boost::json::write( const mValue& value, std::ostream& os, unsigned int options )
{
    write_stream( value, os, options );
}

std::string boost::json::write( const mValue& value, unsigned int options )
{
    return write_string( value, options );
}

#ifndef BOOST_NO_STD_WSTRING

void boost::json::write( const wValue& value, std::wostream& os, unsigned int options )
{
    write_stream( value, os, options );
}

std::wstring boost::json::write( const wValue& value, unsigned int options )
{
    return write_string( value, options );
}

void boost::json::write( const wmValue& value, std::wostream& os, unsigned int options )
{
    write_stream( value, os, options );
}

std::wstring boost::json::write( const wmValue& value, unsigned int options )
{
    return write_string( value, options );
}

#endif

void boost::json::write_formatted( const Value& value, std::ostream& os )
{
    write_stream( value, os, pretty_print );
}

std::string boost::json::write_formatted( const Value& value )
{
    return write_string( value, pretty_print );
}

void boost::json::write_formatted( const mValue& value, std::ostream& os )
{
    write_stream( value, os, pretty_print );
}

std::string boost::json::write_formatted( const mValue& value )
{
    return write_string( value, pretty_print );
}

#ifndef BOOST_NO_STD_WSTRING

void boost::json::write_formatted( const wValue& value, std::wostream& os )
{
    write_stream( value, os, pretty_print );
}

std::wstring boost::json::write_formatted( const wValue& value )
{
    return write_string( value, pretty_print );
}

void boost::json::write_formatted( const wmValue& value, std::wostream& os )
{
    write_stream( value, os, pretty_print );
}

std::wstring boost::json::write_formatted( const wmValue& value )
{
    return write_string( value, pretty_print );
}

#endif
