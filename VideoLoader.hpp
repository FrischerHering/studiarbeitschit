#ifndef VIDEOLOADER_HPP
#define VIDEOLOADER_HPP

#include <QUrl>

#include <Video.hpp>

#include <optional>

class VideoLoader
{
public:
    VideoLoader();

    std::optional<Video> loadFromDialog();
    std::optional<Video> loadFromUrl(const QUrl& url);

private:

};

#endif // VIDEOLOADER_HPP
