#include "imagemagick_converter.h"

ImageMagickDriver::ImageMagickDriver()
{
}

void ImageMagickDriver::ISGetProperties(const char *dev)
{
}

bool ImageMagickDriver::initProperties()
{
    return false;
}

bool ImageMagickDriver::updateProperties()
{
    return false;
}

bool ImageMagickDriver::ISNewText(const char *dev, const char *name, char *texts[], char *names[], int n)
{
    return false;
}

bool ImageMagickDriver::ISNewSwitch(const char *dev, const char *name, ISState *states, char *names[], int n)
{
    return false;
}

bool ImageMagickDriver::ISNewNumber(const char *dev, const char *name, double values[], char *names[], int n)
{
    return false;
}

bool ImageMagickDriver::ISNewBLOB(const char *dev, const char *name, int sizes[], int blobsizes[], char *blobs[], char *formats[], char *names[], int n)
{
    return false;
}

bool ImageMagickDriver::ISSnoopDevice(XMLEle *root)
{
    return false;
}

bool ImageMagickDriver::Connect()
{
    return true;
}
bool ImageMagickDriver::Disconnect()
{
    return true;
}

const char *ImageMagickDriver::getDefaultName()
{
    return "ImageMagick";
}

bool ImageMagickDriver::saveConfigItems(FILE *fp)
{
    return false;
}

bool ImageMagickDriver::processBLOB(uint8_t *data, uint32_t size, uint32_t len)
{
    return false;
}
