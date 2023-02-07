//
// Created by sky on 2023/2/6.
//

#ifndef DESIGNPATTERN_FILESPLITTER_H
#define DESIGNPATTERN_FILESPLITTER_H

#include "ProgressBar.h"

#include <string>
#include <list>

class IProgress {
public:
    virtual void OnProgress(double progress) = 0;
    ~IProgress();
};

class FileSplitter {
private:
    std::string filePath;
    int fileNum;

    // Add ProgressBar
    // ProgressBar *progressBar;   // 通知控件
    IProgress *iProgress;
    std::list<IProgress*> iProgressList;
public:
    FileSplitter(std::string filePath, int fileNum, IProgress *iProgress):
            filePath(filePath), fileNum(fileNum), iProgress(iProgress) {}

    FileSplitter(std::string filePath, int fileNum):
            filePath(filePath), fileNum(fileNum){}

    int addIProgress(IProgress *iprogress)
    {
        iProgressList.push_back(iprogress);
    }

    int removeIProgress(IProgress *progress)
    {
        iProgressList.remove(progress);
    }

    virtual ~FileSplitter();

    void split();
};

#endif //DESIGNPATTERN_FILESPLITTER_H
