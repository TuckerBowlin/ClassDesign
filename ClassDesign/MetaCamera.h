#pragma once
#include <string>;
#include <iostream>;

class MetaCamera
{
private:
	std::string fileName = "untitled";
	std::string imageType = ".jpeg";
	std::string dateCreated = "00/00/0000";
	double size = 0;
	std::string Author = "n/a";
	int xDimension = 0;
	int yDimension = 0;
	int ApertureSize = 0;
	int exposureTime = 0;
	int ISO = 0;
	bool Flash = 0;
public:
	

	std::string getFileName()    {return fileName;}
	std::string getImageType()   {return imageType;}
	std::string getdateCreated()    {return dateCreated;}
	double      getSize()        {return size;}
	std::string getAuthor()      {return Author;}
	int         getXDimension()  {return xDimension;}
	int         getYDimension()  {return yDimension;}
	int         getApertureSize(){return ApertureSize;}
	int         getExposureTime(){return exposureTime;}
	int         getISO()         {return ISO;}
	bool        getFlash()       {return Flash;}

	void setFileName (std::string newFileName) {fileName = newFileName;}
	void setImageType(std::string newType) {
		if ((newType == ".jpeg") || (newType == ".png") || (newType == ".gif")) {
			imageType = newType;
		}
		else {
			std::cout << "That Type is not allowed please input .jpeg, .png, or .gif";
		}
	}
	void setDate    (std::string newDate ){dateCreated = newDate;}
	void setSize    (double newSize) {size = newSize;}
	void setAuthor  (std::string newAuthor) {Author = newAuthor;}
	void setX       (int newX) {xDimension = newX;}
	void setY       (int newY) {yDimension = newY;}
	void setApature (int newAperture) { ApertureSize = newAperture;}
	void setExposure(int newExposure) { exposureTime = newExposure;}
	void setISO     (int newISO) { ISO = newISO; }
	void setFlash(bool newFlash) { Flash = newFlash; }

	MetaCamera(std::string, std::string, std::string, double, std::string, int, int, int, int, int, bool);
};

