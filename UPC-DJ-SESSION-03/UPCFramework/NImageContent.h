#pragma once

#include <vector>

#include "NBaseContent.h"

class NImageContent : public NBaseContent
{
public:
	NImageContent(NContentManagment* contentManagment);
	~NImageContent();

	void Initialize();
	bool Load(const std::string path);
private:
	std::vector<unsigned char> mImageData;
	unsigned long mWidth;
	unsigned long mHeight;
};

