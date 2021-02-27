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

void printImageData(const MetaCamera& image)
{
	std::cout << "File Name: " << image.getFileName() << std::endl;
	std::cout << "Image Type: " << image.getImageType() << std::endl;
	std::cout << "Date Created: " << image.getdateCreated() << std::endl;
	std::cout << "File Size: " << image.getSize() << std::endl;
	std::cout << "Author: " << image.getAuthor() << std::endl;
	std::cout << "Width: " << image.getXDimension() << std::endl;
	std::cout << "Height: " << image.getYDimension() << std::endl;
	std::cout << "Apature: " << "f/" << image.getApertureSize() << std::endl;
	std::cout << "Exposure Time: " << "1/" << image.getExposureTime() << std::endl;
	std::cout << "ISO: " << image.getISO() << std::endl;
	std::cout << "Flash: " << image.getFlash() << std::endl;
}

std::ostream& operator<<(std::ostream& out, const MetaCamera& image)
{
	out << "File Name: " << image.getFileName() << std::endl;
	out << "Image Type: " << image.getImageType() << std::endl;
	out << "Date Created: " << image.getdateCreated() << std::endl;
	out << "File Size: " << image.getSize() << std::endl;
	out << "Author: " << image.getAuthor() << std::endl;
	out << "Width: " << image.getXDimension() << std::endl;
	out << "Height: " << image.getYDimension() << std::endl;
	out << "Apature: " << "f/" << image.getApertureSize() << std::endl;
	out << "Exposure Time: " << "1/" << image.getExposureTime() << std::endl;
	out << "ISO: " << image.getISO() << std::endl;
	out << "Flash: " << image.getFlash() << std::endl;
	return out;
}
