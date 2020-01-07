#include<iostream>
#include<vector>
using namespace std;

#define TABLE_X 20 //��Ʈ���� �� x �� ����
#define TABLE_Y 30 //��Ʈ���� �� y �� ����

class MainMenu {
public:
	MainMenu() {
		cout << "\n\n\n\n";
		cout << "\t\t"; cout << "@@@@@@@@@@@@  @@@@@@@@@   @@@@@@@@@@@  @@@@@@@@   @   @@@@@@@@@@@\n";
		cout << "\t\t"; cout << "      @       @   @            @       @      @   @   @          \n";
		cout << "\t\t"; cout << "      @       @   @            @       @      @   @   @          \n";
		cout << "\t\t"; cout << "      @       @@@@@@@@@        @       @     @    @   @@@@@@@@@@@\n";
		cout << "\t\t"; cout << "      @       @   @            @       @ @ @      @             @\n";
		cout << "\t\t"; cout << "      @       @   @            @       @     @    @             @\n";
		cout << "\t\t"; cout << "      @       @@@@@@@@@        @       @      @   @   @@@@@@@@@@@\n\n\n\n\n";
		cout << "\t\t"; cout << "                ������ �����Ϸ��� �ƹ�Ű�� ��������.\n\n\n\n\n\n\n";

		cout << "\t\t"; cout << "                   TetrisGame1.0 By SeokJinLee\n";

		getchar(); // �ƹ�Ű �Է� ��ٸ�
		system("cls"); // �ܼ� â clear
	}
};

class GameTable {
private:
	int x; // ����
	int y; // ����
	vector<vector<int> > table; // ���̺� �� 0 = " ", 1 = "��" , 2  = "��"
public:
	GameTable(int x, int y) { //��Ʈ���� �� ���� ����
		this->x = x;
		this->y = y;
		for (int i = 0; i < y; i++) {
			vector<int> temp;
			for (int j = 0; j < x; j++) {
				temp.push_back(0);
			}
			table.push_back(temp);
		}
		//���� �ڸ� ���� ��ĥ
		for (int i = 0; i < x; i++) {
			table[0][i] = 1;
			table[y - 1][i] = 1;
		}
		for (int i = 1; i < y - 1; i++) {
			table[i][0] = 1;
			table[i][x - 1] = 1;
		}
	}
	void DrawGameTable() {
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				if (table[i][j] == 1)cout << "��";
				else cout << "  "; // �� ĭ ����
			}
			cout << "\n";
		}
	}
};

int main(void) {
	system("mode con cols=100 lines=40 | title ��Ʈ���� ����"); // �ܼ�â ũ�� �� ���� ����
	GameTable gt(TABLE_X, TABLE_Y); //���� �� �׸��� ��ü ����
	MainMenu(); // ���� �޴� �׸��� ������ ȣ��
	gt.DrawGameTable(); // �������� �׸���.
	return 0;
}