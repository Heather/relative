#include <iostream>
#include <windows.h>
#include <tchar.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "Usage:" << std::endl
              << "  absolute <from> <to>" << std::endl;
  } else {
    if(!SetCurrentDirectory(argv[1])) {
      printf("SetCurrentDirectory failed (%d)\n", GetLastError());
      return -1;
    }
    TCHAR buffer[MAX_PATH]=TEXT("");
    TCHAR** lppPart={NULL};
    auto retval = GetFullPathName(argv[2],
                  MAX_PATH,
                  buffer,
                  lppPart);
    std::cout << buffer;
  }
  return 0;
}
