#include "MetaCamera.h"

MetaCamera::MetaCamera(std::string fileN, std::string ImageType, std::string date, double size, std::string author, int x, int y, int Apature, int exposure, int ISO, bool Flash) {
	setFileName(fileN);
	if ((ImageType == ".jpeg") || (ImageType == ".png") || (ImageType == ".gif")) {
		setImageType(ImageType);
	}
	else
		std::cout << "Image type reverted to .jpeg, type allower are .jpeg, .png, and .gif, please set file type if not .jpeg";

	setDate(date);
	setSize(size);
	setAuthor(author);
	setX(x);
	setY(y);
	setApature(Apature);
	setExposure(exposure);
	setISO(ISO);
	setFlash(Flash);

}