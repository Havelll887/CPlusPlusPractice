#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <string>
#include <fstream>

// ����ݽ�������
class SpeechManager
{
public:

	// ���캯��
	SpeechManager();

	// �˵�����
	void show_Menu();

	// ��ʼ������������
	void initSpeech();

	// �˳�ϵͳ
	void exitSystem();
	
	// ��������
	~SpeechManager();

	// ����12��ѡ��
	void createSpeaker();

	// ��ʼ���� �����������̿��ƺ���
	void startSpeech();

	// ��ǩ
	void speechDraw();

	// ����
	void speechContest();

	// ��ʾ�÷�
	void showScore();

	// �����¼
	void saveRecord();

	// ��ȡ��¼
	void loadRecord();

	// �ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty ;

	// ��������¼������
	map<int, vector<string>>m_Record;

	//��ʾ�����¼
	void showRecord();

	// ����ļ�
	void clearRecord();

	// ��Ա����
	// �����һ�ֱ���ѡ�ֱ������
	vector<int>v1;

	// ��һ�ֽ����������
	vector<int>v2;

	// ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;

	// ��ű���Լ���Ӧ����ѡ������
	map<int, Speaker>m_Speaker;

	// ��ű�������
	int m_Index;

private:

};

