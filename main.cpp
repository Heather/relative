#include <windows.h>
#include <iostream>

#include "Shlwapi.h"

int main(int argc, char *argv[]) {
  char szOut[MAX_PATH] = "";
  if (argc < 2) {
    std::cout << "Usage:" << std::endl;
    std::cout << "  relative <from> <to>" << std::endl;
    return 0;
  }
  PathRelativePathTo(szOut,
                     argv[1],
                     FILE_ATTRIBUTE_DIRECTORY,
                     argv[2],
                     FILE_ATTRIBUTE_NORMAL);
  std::cout << szOut;
  return 0;
}
