//
// Created by sky on 2023/2/6.
//

#ifndef DESIGNPATTERN_FILESPLITTER_H
#define DESIGNPATTERN_FILESPLITTER_H

#include "ProgressBar.h"

#include <string>

class FileSplitter {
private:
    std::string filePath;
    int fileNum;

    // Add ProgressBar
    ProgressBar *progressBar;

public:
    FileSplitter(std::string filePath, int fileNum, ProgressBar *progressBar):
        filePath(filePath), fileNum(fileNum), progressBar(progressBar) {}

    virtual ~FileSplitter();

    void split();
};

#endif //DESIGNPATTERN_FILESPLITTER_H
