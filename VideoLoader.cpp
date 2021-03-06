#include "VideoLoader.hpp"

#include <QFileDialog>
#include <QDebug>

#include <QMediaPlayer>

VideoLoader::VideoLoader()
{

}

std::optional<Video> VideoLoader::loadFromDialog()
{
    QFileDialog fileDialog;
    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.setViewMode(QFileDialog::Detail);
    fileDialog.setDirectory(QDir::current());

    if(!fileDialog.exec())
    {
        return std::nullopt;
    }

    if(QStringList selectedFiles = fileDialog.selectedFiles(); selectedFiles.size() != 1)
    {
        return loadFromUrl(QUrl(selectedFiles.first()));
    }

    return std::nullopt;
}

std::optional<Video> VideoLoader::loadFromUrl(const QUrl &url)
{

    return std::nullopt;
}
