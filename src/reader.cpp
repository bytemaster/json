//          Copyright John W. Wilkinson 2007 - 2011
// Distributed under the MIT License, see accompanying file LICENSE.txt

// json spirit version 4.04

#include <boost/json/reader.hpp>
#include <boost/json/reader_template.hpp>

using namespace boost::json;

bool boost::json::read( const std::string& s, Value& value )
{
    return read_string( s, value );
}

void boost::json::read_or_throw( const std::string& s, Value& value )
{
    read_string_or_throw( s, value );
}

bool boost::json::read( std::istream& is, Value& value )
{
    return read_stream( is, value );
}

void boost::json::read_or_throw( std::istream& is, Value& value )
{
    read_stream_or_throw( is, value );
}

bool boost::json::read( std::string::const_iterator& begin, std::string::const_iterator end, Value& value )
{
    return read_range( begin, end, value );
}

void boost::json::read_or_throw( std::string::const_iterator& begin, std::string::const_iterator end, Value& value )
{
    begin = read_range_or_throw( begin, end, value );
}

#ifndef BOOST_NO_STD_WSTRING

bool boost::json::read( const std::wstring& s, wValue& value )
{
    return read_string( s, value );
}

void boost::json::read_or_throw( const std::wstring& s, wValue& value )
{
    read_string_or_throw( s, value );
}

bool boost::json::read( std::wistream& is, wValue& value )
{
    return read_stream( is, value );
}

void boost::json::read_or_throw( std::wistream& is, wValue& value )
{
    read_stream_or_throw( is, value );
}

bool boost::json::read( std::wstring::const_iterator& begin, std::wstring::const_iterator end, wValue& value )
{
    return read_range( begin, end, value );
}

void boost::json::read_or_throw( std::wstring::const_iterator& begin, std::wstring::const_iterator end, wValue& value )
{
    begin = read_range_or_throw( begin, end, value );
}

#endif

bool boost::json::read( const std::string& s, mValue& value )
{
    return read_string( s, value );
}

void boost::json::read_or_throw( const std::string& s, mValue& value )
{
    read_string_or_throw( s, value );
}

bool boost::json::read( std::istream& is, mValue& value )
{
    return read_stream( is, value );
}

void boost::json::read_or_throw( std::istream& is, mValue& value )
{
    read_stream_or_throw( is, value );
}

bool boost::json::read( std::string::const_iterator& begin, std::string::const_iterator end, mValue& value )
{
    return read_range( begin, end, value );
}

void boost::json::read_or_throw( std::string::const_iterator& begin, std::string::const_iterator end, mValue& value )
{
    begin = read_range_or_throw( begin, end, value );
}

#ifndef BOOST_NO_STD_WSTRING

bool boost::json::read( const std::wstring& s, wmValue& value )
{
    return read_string( s, value );
}

void boost::json::read_or_throw( const std::wstring& s, wmValue& value )
{
    read_string_or_throw( s, value );
}

bool boost::json::read( std::wistream& is, wmValue& value )
{
    return read_stream( is, value );
}

void boost::json::read_or_throw( std::wistream& is, wmValue& value )
{
    read_stream_or_throw( is, value );
}

bool boost::json::read( std::wstring::const_iterator& begin, std::wstring::const_iterator end, wmValue& value )
{
    return read_range( begin, end, value );
}

void boost::json::read_or_throw( std::wstring::const_iterator& begin, std::wstring::const_iterator end, wmValue& value )
{
    begin = read_range_or_throw( begin, end, value );
}

#endif
