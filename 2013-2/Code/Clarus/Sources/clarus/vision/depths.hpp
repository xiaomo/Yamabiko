/*
This file is part of Clarus.

Clarus is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Clarus is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Clarus.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CLARUS_VISION_DEPTHS_HPP
#define CLARUS_VISION_DEPTHS_HPP

#include <opencv2/opencv.hpp>

#include <string>

namespace depths {
    typedef float Depth;

    cv::Mat load(const std::string &path, const cv::Size &size);

    void save(const std::string &path, const cv::Mat &depths);

    cv::Mat bgr(const cv::Mat &depths, const cv::Size &scale = cv::Size(0, 0));
}

#endif
