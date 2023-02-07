//
// Created by sky on 2023/2/6.
//

#include "FileSplitter1.h"

void FileSplitter::split() {
    // do something

    // read file data

    // split file
    for (int i = 0; i < fileNum; ++i)
    {
        // 单个观察者
        {
            // do something
            if (nullptr != this->iProgress) {
                double progress = (double) i / (double) fileNum;
                this->iProgress->OnProgress(progress);
            }
        }

        // 多个观察者
        {
            double progress = (double) i / (double) fileNum;
            for (auto observer : this->iProgressList)
            {
                observer->OnProgress(progress);
            }
        }
    }
}
