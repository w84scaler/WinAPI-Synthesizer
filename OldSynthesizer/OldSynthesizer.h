﻿#pragma once

#include "resource.h"

#define WHITE_WIDTH 60
#define BLACK_WIDTH 40
#define WHITE_HEIGHT 250
#define BLACK_HEIGHT 150

#define KEY_TOP 50
#define KEY_LEFT 50

#define MENU_SIGN 3226
#define MENU_PEDAL 3227

#define INST_PIANO 3228
#define INST_GUITAR 3229
#define INST_DRUM 3230

#define OCT_CONTRA 3232
#define OCT_GREATE 3233
#define OCT_SMALL 3234
#define OCT_FIRST 3235
#define OCT_SECOND 3236
#define OCT_THIRD 3237

#define MENU_HELP 3238

typedef struct
{
	HBRUSH hbrWhite, hbrBlack, hbrGray;
	bool isWhitePress[19];
	bool isBlackPress[13];
	RECT whiteRect[19];
	RECT blackRect[13];
} KeyStruct, * PKeyStruct;

const int keySimbols[] = { 90, 83, 88, 68, 67, 86, 71, 66, 72, 78, 74, 77, 188, 76, 190, 186, 191, 81, 50, 87, 51, 69, 82, 53, 84, 54, 89, 55, 85, 73, 57, 79, 48, 80, 219, 187, 221 };
const char* octaves[] = { "Contra octave < >", "Greate octave < >", "Small octave < >", "First octave < >", "Second octave < >", "Third octave < >" };
const char* instruments[] = { "Piano","Guitar","Drum" };
const int instrumentArray[] = { 0x0000 , 0x1800, 0x7400 };
const char* whiteSimbols[] = { "Z", "X", "C", "V", "B", "N", "M", "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", "[", "]" };
const char* blackSimbols[] = { "S", "D", "G", "H", "J", "2", "3", "5", "6", "7", "9", "0", "=" };

PKeyStruct pKey = {};
HFONT hFont;
bool isSign = false;
int keyArray[37];
int Octave = 0;
int deltaVolume = 0x22222222;
int instrument = 0x0000;
int whiteBrushIndex = 0;
int blackBrushIndex = 0;
int instrumentIndex = 0;
HMIDIOUT hmidi;

VOID InitMenu(HWND hWnd);