#pragma once

#include "duckdb/common/optional_ptr.hpp"

#include <string>
#include <vector>

namespace duckdb {

typedef std::string Path;
typedef unsigned char Byte;

struct File {
	std::vector<Byte> content;
	std::string content_type;
	std::string path;
};

optional_ptr<File> GetFile(Path path);

} // namespace duckdb
