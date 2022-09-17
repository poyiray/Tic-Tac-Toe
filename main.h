#pragma once
#include<iostream>
#include<string>
using namespace std;

//提示
string hint = "先手叉子, 后手圆圈\n输入1-9来确定棋子的位置\n";

//棋子
char first = '1';
char second = '2';
char third = '3';
char fourth = '4';
char fifth = '5';
char sixth = '6';
char seventh = '7';
char eighth = '8';
char ninth = '9';

int checkNum[20];
//玩家
int player1[20];
int player2[20];

//次数
int time = 1;