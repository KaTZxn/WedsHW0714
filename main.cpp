#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*第１問
以下の2進数の計算に答えよ。
1011 + 0101 = 10000
110100 + 11011 =1001111
1011 + 110011 = 111110

第２問
以下の16進数の計算に答えよ。
FF + FF =1FE
ed + 10 = FD
563 + cd = 630

第３問
char、int、float、doubleのサイズはそれぞれいくつか答えよ。
1byte 4byte 4byte 8byte

第４問
int judge = true;
if (judge)
{
	①
}
else
{
	②
}
①と②どちらが処理されるか答えよ。
①

第５問
for (int i = 0; i < 100; i = i + 3)
{
	①
}
①の処理が何回実行されるか答えよ。
34回

第６問
int i = 0;
while (i < 100)
{
	i = i + 5;
	①
}
①の処理は何回実行されるか答えよ。
20回

第７問
int array[4][5];
上記配列のサイズはいくつか答えよ。
20

第８問
int array[5][20]
for (int i = 0; i < 5; ++i)
{
	for (int j = 0; j < ①; ++j)
	{
		array[i][j] = i * ① + j;
	}
}
①には何という数字が入るか答えよ。
20

第９問
① testFunc(int a)
{
	return;
}
①にはint, float, voidのどれが正しいか答えよ。
void

第１０問
２点間の距離を求める関数を作成してください。


第１１問
カード構造体を作成してください。
このカードはトランプのカードのことです。
情報として、なんのカードなのかを持っていてください。
スペードの7である、ハートの13であるなど。
この構造体には現在の自分の情報を設定する処理と、
現在の自分の情報を開示する処理を作ってください。


トランプの山札の構造体を作成してください。
その際カードには先ほど作った構造体を使用してください。
以下の条件を満たしておくこと。
トランプの枚数は53枚(1 ～ 13 * 4 + ジョーカー1)
Card card[53];

シャッフル機能を実装する。
card[53]にランダムにカード情報を付与してください。
card[0]がクラブの6、card[1]がハートの5といったように。
その際同じカードは存在しないようにしてください。*/

/*int main()
{
	int i = 0;
	int a = 1;
	while (i < 100)
	{
		i = i + 5;
		printf('%d', a);
		a++;
	}
}*/

int Q10();
int Q11();
//void Shuffle(Card*);
double Distance(double x1, double y1, double x2, double y2);

int main()
{
	//Q10();
	Q11();
}

int Q10()
{

	double x1, y1, x2, y2;

	scanf_s("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("dist = %lf\n", Distance(x1, y1, x2, y2));

	return 0;
}

double Distance(double x1, double y1, double x2, double y2)
{
	double dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return dist;
}

struct Card
{
private:
	char color;
	char num;
public:
	char GetNum() { return num; }
	char GetColor() { return color; }
	void SetNum(char _num) { num = _num; }
	void SetColor(char _color) { color = _color; }
};
struct CardCase
{
private:
	
public:
	
};



int Q11()
{

	char card_color[4] = {'S','H','C','D' };
	char card_num[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K'};

	Card card[53] = {};
	int x = 0;
	for(int i=0;i<4;i++)
		for (int j = 0; j < 13; j++)
		{
			card[x].SetColor(card_color[i]);
			card[x].SetNum(card_num[j]);
			x++;
		}
	card[52].SetColor('J');
	card[52].SetNum('0');

	
	Card* a, * b, c;
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		a = card + rand() % 53;
		b = card + rand() % 53;
		c = *a;
		*a = *b;
		*b = c;
	}

	for(int i = 0;i<53;i++)
		printf("%c %c\n", card[i].GetColor(), card[i].GetNum());

	return 0;
}

