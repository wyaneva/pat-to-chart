#include <fstream>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include "parser.h"
#include "stitch.h"

const int FAIL = 0;
const int SUCCESS = 1;

typedef std::list<Stitch> Row;

int parseRow(std::istringstream &iss, Row &row) {

  std::string token;
  iss >> token;

  // find the first stitch
  while(token.back() != ':') {
    iss >> token;
  }

  //TODO: stitch group -- a list of stitches, but all of the ones with the exception of the first have offsets 0

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
