#include "NImageContent.h"
#include "NContentManagment.h"
#include "PicoPNG.h"

NImageContent::NImageContent(NContentManagment* contentManagment) : NBaseContent(contentManagment)
{
}

NImageContent::~NImageContent()
{
}

void NImageContent::Initialize()
{
	NBaseContent::Initialize();
}

bool NImageContent::Load(const std::string path) {
	NBaseContent::Load(path);

	std::vector<unsigned char> imagerRawBufferData;
	bool fileLoaded = NContentManagment::ReadFileToBuffer(mPath, imagerRawBufferData);
	bool imageDecoded = false;

	if (fileLoaded) {
		imageDecoded = decodePNG(mImageData, mWidth, mHeight, &(imagerRawBufferData[0]),
			imagerRawBufferData.size(), true) == 0;
	}

	return fileLoaded && imageDecoded;
}
