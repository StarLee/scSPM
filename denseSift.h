/**
 * @brieft extract the dense sift descriptor
 */

#ifndef _DENSE_SIFT_H_
#define _DENSE_SIFT_H_

#include <opencv2/opencv.hpp>

namespace gentech
{

class CDenseSIFT
{
public:
	CDenseSIFT() {}

	~CDenseSIFT() {}

	// ����sift����ǰ���������һ��init
	void init();

	/**
	 ** output: siftArr
	 ** ����ΪͼƬ�в���������������Ϊsift��ά����128
	 */
	void CalculateSiftDescriptor(cv::Mat& img, cv::Mat& siftArr);
protected:
	void sp_find_sift_grid(cv::Mat& img, cv::Mat& siftArr);

	void sp_normalize_sift(cv::Mat& siftArr, double threshold = 1.0);
private:
	cv::Mat m_weights;
	cv::Mat m_G_X, m_G_Y;
};

}

#endif /* _DENSE_SIFT_H_ */
