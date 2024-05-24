#pragma once
#include<iostream>
#include<string> //stringクラスを使用可能にする
using namespace std;
/*static string Name;
*/
static int Id = 0;			//ユーザー名
static int flag = 1;		//会員・非会員フラグ
static int RoomNumber = 0;	//選択部屋番号

static int StartHour = 0;	//予約開始時
static int StartMin = 0;	//予約開始分

static int EndHour = 0;		//予約終了時
static int EndMin = 0;		//予約終了分
static int Num = 0;			//人数