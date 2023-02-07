//
// Created by sky on 2023/2/6.
//

#ifndef DESIGNPATTERN_MAINFORM_H
#define DESIGNPATTERN_MAINFORM_H

#include "FileSplitter.h"

#include <string>

using TextBox = std::string;

class MainForm  {
private:
    TextBox  txtFilePath;
    TextBox  txtFileNum;
public:
    void ButtonClick();
};

#endif //DESIGNPATTERN_MAINFORM_H
