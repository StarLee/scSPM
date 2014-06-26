#ifndef _CLASSIFY_H_
#define _CLASSIFY_H_

#include <opencv2\opencv.hpp>
#include "denseSift.h"
#include "sparse_coding.h"

namespace gentech
{

class CScSPM
{
public:
	/**
	 * @param dictMatPath �ֵ�mat fileϵͳ·��
	 * @param dictMatName �ֵ�mat��Ӧ��matlab��������
	 * @param wMatPath    Ȩ��mat fileϵͳ·��
	 * @param wMatName    Ȩ��mat��Ӧ��matlab��������
	 * @param bMatPath    /b mat fileϵͳ·��
	 * @param bMatName    /b ��Ӧ��matlab��������
	 */
	CScSPM(const char* dictMatPath, const char* dictMatName,
	       const char* wMatPath, const char* wMatName, 
	       const char* bMatPath, const char* bMatName);

	~CScSPM() {}

	cv::Mat classify(cv::Mat& img);
private:
	CScSPM() {}
private:
	CDenseSIFT m_denseSIFT;
	CSparseCoding m_sparseCoding;
	cv::Mat m_w;
	cv::Mat m_b;
};

}


#endif /* _CLASSIFY_H_ */