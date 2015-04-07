#include <iostream>

#include "Shlwapi.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "Usage:" << std::endl
              << "  relative <from> <to>" << std::endl;
  } else {
    char szOut[MAX_PATH] = "";
    PathRelativePathTo(szOut,
                       argv[1],
                       FILE_ATTRIBUTE_DIRECTORY,
                       argv[2],
                       FILE_ATTRIBUTE_NORMAL);
    std::cout << szOut;
  }
  return 0;
}
