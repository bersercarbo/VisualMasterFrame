#ifndef CAMERAFACTORY_H_
#define CAMERAFACTORY_H_

#ifdef CAMERAFACTORY_EXPORTS
#define CAMERAFACTORY_API extern "C" _declspec(dllexport)
#else
#define CAMERAFACTORY_API extern "C" _declspec(dllimport)
#endif

#include <string>
#include <opencv2/opencv.hpp>

class LdrCamera
{
public:
	LdrCamera() {}
	virtual ~LdrCamera() {}

	virtual bool open() = 0;
	virtual void close() = 0;
	virtual bool isOpen() = 0;
	virtual bool startCapture() { return true; }
	virtual bool stopCapture() { return true; }
	virtual bool getNextFrame(cv::Mat &image) = 0;

	//model = 0 is gray  1 is rgb 2 is bgr; Ä¬ÈÏbgr
	//virtual bool setImageModel(int mode) = 0;
	// should be available after open()
	//virtual bool getImageInfo(int& imageHeight, int& imageWidth, bool& rgb) = 0;
};

CAMERAFACTORY_API int GetHikRootCameraInfo(std::string& strDevicesInfo);

CAMERAFACTORY_API int RefreshDevices(std::string& strDevicesInfo);

CAMERAFACTORY_API LdrCamera* CreateCameraDevice(int index);

CAMERAFACTORY_API void DestoryCameraDevice(LdrCamera* camera);
#endif // !CAMERAFACTORY_H_
