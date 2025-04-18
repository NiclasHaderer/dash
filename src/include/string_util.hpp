#pragma once

#include "response_format.hpp"

#include <string>

namespace duckdb {
namespace string_util {

template <class T>
inline std::string ToString(const T &) {
	throw NotImplementedException(StringUtil::Format("ToString not implemented for type %s", typeid(T).name()));
}

template <>
inline std::string ToString<ResponseFormat>(const ResponseFormat &value) {
	switch (value) {
	case ResponseFormat::COMPACT_JSON:
		return "COMPACT_JSON";
	case ResponseFormat::JSON:
		return "JSON";
	case ResponseFormat::INVALID:
		return "INVALID";
	}
	throw NotImplementedException(
	    StringUtil::Format("Enum value not implemented in ToString<ResponseFormat>: %d", value));
}

template <class T>
inline vector<T> Values() {
	throw NotImplementedException(StringUtil::Format("ToString not implemented for type %s", typeid(T).name()));
}

template <>
inline vector<ResponseFormat> Values<ResponseFormat>() {
	return {ResponseFormat::COMPACT_JSON, ResponseFormat::JSON};
}

template <class T>
inline string StringValues() {
	vector<T> values = Values<T>();
	// Map the values to their string representation
	vector<string> string_values {values.size()};
	std::transform(values.begin(), values.end(), string_values.begin(), [](const T &x) { return ToString<T>(x); });
	return StringUtil::Join(string_values, ", ");
}

template <class T>
inline T FromString(const std::string &) {
	throw NotImplementedException(StringUtil::Format("FromString not implemented for type %s", typeid(T).name()));
}

template <>
inline ResponseFormat FromString<ResponseFormat>(const std::string &value) {
	const auto upper = StringUtil::Upper(value.c_str());
	if (StringUtil::Equals(upper.c_str(), "COMPACT_JSON")) {
		return ResponseFormat::COMPACT_JSON;
	}
	if (StringUtil::Equals(upper.c_str(), "INVALID")) {
		return ResponseFormat::INVALID;
	}
	if (StringUtil::Equals(upper.c_str(), "JSON")) {
		return ResponseFormat::JSON;
	}
	throw SerializationException(
	    StringUtil::Format("Enum value: '%s' not implemented in FromString<ResponseFormat>. Possible values {%s}'", value,
	                       StringValues<ResponseFormat>()));
}

} // namespace string_util
} // namespace duckdb
