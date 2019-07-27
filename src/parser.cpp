#include <fstream>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include "stitch.h"

const int FAIL = 0;
const int SUCCESS = 1;

typedef std::list<Stitch> Row;

int parseRow(std::istringstream &iss, Row &row) {

  std::string token;
  iss >> token;

  std::cout << token << std::endl;

  return SUCCESS;
}

int parsePattern(const std::string &patternFile) {

  std::ifstream infile(patternFile);
  std::string line;

  if (!infile.is_open()) {
    std::cout << "Error opening pattern file: " << patternFile << ".\n";
    return FAIL;
  }

  std::list<Row> patternRows;

  while(getline(infile, line)) {

    std::istringstream iss(line);
    std::string token;
    iss >> token;

    if (token == "Row") {

      Row row;
      parseRow(iss, row);

      patternRows.push_back(row);
    }
  }

  return SUCCESS;
}
