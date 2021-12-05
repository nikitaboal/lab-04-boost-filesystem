#include <filewalk.hpp>

using namespace std;

int main() {
  FilesWalk directoryWalker;
  directoryWalker.read_directory("../misc/ftp", false);
  directoryWalker.output_statistics();
  //  asdas
}

