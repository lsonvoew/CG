#pragma once
#include <vector>

template <class TInputData, class TDataType>
struct SKDTree
{
	std::vector<TDataType>  DividLine;
	struct SKDTree* LeftNode;
	struct SKDTree* RightNode;
};
template <class TInputData,class TDataType>
class CKDTree
{
public:
	CKDTree(int vDimension)m_Dimension(vDimension) {};
	TInputData createKDTree(std::vector<TInputData> vInputdata, int vDepth = 0);
	std::vector<TInputData> searchKDTree();
private:
	int m_Dimension = 0;
	std::vector<TDataType> __searchEachDimensionMidValue(std::vector<TInputData> vDataSet);
};
