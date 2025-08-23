#include <libavformat/avformat.h>
#include <iostream>

int main() {
  AVFormatContext* pFormatContext = avformat_alloc_context();
  if (!pFormatContext) {
    return -1;
  }
  avformat_close_input(&pFormatContext);
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
