//
// Created by sky on 2023/2/6.
//

#include "MainForm.h"
#include "ProgressBar.h"

void MainForm::ButtonClick() {
    std::string filePath = txtFilePath;
    int fileNum = atoi(txtFileNum.c_str());
    ProgressBar *progressBar = new ProgressBar;

    FileSplitter *fileSplitter = new FileSplitter(filePath, fileNum, progressBar);

    fileSplitter->split();
}