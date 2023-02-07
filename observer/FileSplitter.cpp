//
// Created by sky on 2023/2/6.
//

#include "FileSplitter.h"

void FileSplitter::split() {
    // do something

    // read file data

    // split file
    for (int i = 0; i < fileNum; ++i)
    {
        // do something

        if (nullptr != this->progressBar) {
            double progress = (double) i / (double) fileNum;
            this->progressBar->setProgress(progress);
        }
    }
}
