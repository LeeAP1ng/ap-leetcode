/*
��һ�ǿյĵ����б�������ǰ k �����ִ������ĵ��ʡ�
���صĴ�Ӧ�ð����ʳ���Ƶ���ɸߵ������������ͬ�ĵ�������ͬ����Ƶ�ʣ�����ĸ˳������

ʾ�� 1��
����: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
���: ["i", "love"]
����: "i" �� "love" Ϊ���ִ��������������ʣ���Ϊ2�Ρ�
ע�⣬����ĸ˳�� "i" �� "love" ֮ǰ��

ʾ�� 2��
����: ["the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"], k = 4
���: ["the", "is", "sunny", "day"]
����: "the", "is", "sunny" �� "day" �ǳ��ִ��������ĸ����ʣ�
���ִ�������Ϊ 4, 3, 2 �� 1 �Ρ�

��Դ�����ۣ�LeetCode��No.692 ǰK����Ƶ����
*/
#include <string>
#include <vector>

class TopKFrequent
{
public:
	TopKFrequent( );
	~TopKFrequent( );

public:
	int topKFrequent( std::vector<std::string>& words, int k );
};