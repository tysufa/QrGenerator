#include "qrCode.hh"
#include <iostream>

#include "raylib/src/raylib.h"


int main(void){
  std::string message = "Hello world !";

  QrCode qr(message, errorCorrectionLevel::L, 1);

  std::cout << qr.getCCI() << std::endl;

  return 0;
}
