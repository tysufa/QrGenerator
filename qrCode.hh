#pragma once
#include <iostream>
#include <string>
#include <bitset>

enum class errorCorrectionLevel{L, M, Q, H};
enum class encodingMode{numeric, alphanumeric, byte, kanji};
const int version1 = 21;
const int versionSizeIncrease = 4;

class QrCode{
public:
  QrCode(std::string const & input, errorCorrectionLevel ecl, int version)
  :_input(input), _ecl(ecl), _version(version){}


  encodingMode getEncodingMode() const {return encodingMode::byte;};
  std::bitset<4> getModeIndicator() const {return std::bitset<4>{0100};};
  std::bitset<8> getCCI() const {return std::bitset<8>(_input.size());};

private:
  std::string _input;
  errorCorrectionLevel _ecl;
  int _version;
  // it should be 16 bytes on version 10 and more but i choose to ignore it, if it becomes necessary, I will use vector<bool>
  std::bitset<8> _characterCountIndicator; 

};
