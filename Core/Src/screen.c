/*
 * screen.c
 *
 *  Created on: Nov 28, 2023
 *      Author: Admin
 */

#include "screen.h"

void screen_init(){
	lcd_ShowStr(60,10,"Game Menu",GREEN,WHITE,24,1);
//	lcd_ShowStr(40,60,"Player ID:",WHITE,BLACK,16,0);
//	lcd_ShowIntNum(120, 60, ID, 4, WHITE, BLACK, 16);
//	lcd_Fill(50, 200, 190, 300, GREEN);
//	lcd_ShowStr(40, 90, "Mode (B):", WHITE, BLACK, 16, 0);
//	if(mode == NORMAL)
//		lcd_ShowStr(120, 90, "NORMAL", WHITE, BLACK, 16, 0);
//	if(mode == WALL)
//		lcd_ShowStr(120, 90, "WALL", WHITE, BLACK, 16, 0);
//	if(mode == WALLS)
//		lcd_ShowStr(120, 90, "WALLS", WHITE, BLACK, 16, 0);
//	if(mode == TIMER)
//		lcd_ShowStr(120, 90, "TIMER", WHITE, BLACK, 16, 0);
//	lcd_ShowStr(40, 120, "Speed (E):", WHITE, BLACK, 16, 0);
//	if(speed == 1000)
//		lcd_ShowStr(120, 120, "EASY", WHITE, BLACK, 16, 0);
//	if(speed == 500)
//		lcd_ShowStr(120, 120, "MEDIUM", WHITE, BLACK, 16, 0);
//	if(speed == 100)
//		lcd_ShowStr(120, 120, "HARD", WHITE, BLACK, 16, 0);

//	lcd_ShowStr(40,155,"Hi, I\'m Slyther! <3",BLUE,BLACK,16,0);
//	lcd_ShowStr(40,180,"Help me grow strong",BLUE,BLACK,16,0);
//	lcd_ShowStr(40,205,"to protect our jungle! ",BLUE,BLACK,16,0);
//	lcd_ShowStr(90,235,"START",BLACK,BLACK,24,1);
}

void screen_play(){
	lcd_Fill(0, 0, 240, 200, WHITE);
	lcd_Fill(90, 210, 150, 250, RED);//UP
	lcd_ShowStr(113, 217, "U", WHITE, YELLOW, 24, 1);
	lcd_Fill(90, 260, 150, 300, YELLOW);//DOWN
	lcd_ShowStr(113, 267, "D", WHITE, YELLOW, 24, 1);
	lcd_Fill(20, 260, 80, 300, RED);//LEFT
	lcd_ShowStr(45, 267, "L", WHITE, RED, 24, 1);
	lcd_Fill(160, 260, 220, 300, RED);//RIGHT
	lcd_ShowStr(185, 267, "R", WHITE, RED, 24, 1);
}

void screen_score(){
//	lcd_ShowStr(0, 205, "Food: ", WHITE, WHITE, 24, 1);
	lcd_ShowIntNum(8, 218, score, 4, WHITE, BLACK, 24);
}

void screen_exit(){
	lcd_ShowStr(174, 218, "End", WHITE, WHITE, 24, 1);
//	lcd_ShowStr(170, 230, " >> ", WHITE, WHITE, 24, 1);
}

void screen_game_over(){
	lcd_ShowStr(90,10,"Finish",RED,WHITE,24,1);
//	lcd_ShowStr(40,60,"Player ID:",WHITE,BLACK,16,0);
//	lcd_ShowIntNum(120, 60, ID, 4, WHITE, BLACK, 16);

//	lcd_ShowStr(40, 90, "Mode (B):", WHITE, BLACK, 16, 0);
//	if(mode == NORMAL)
//		lcd_ShowStr(120, 90, "NORMAL", WHITE, BLACK, 16, 0);
//	if(mode == WALL)
//		lcd_ShowStr(120, 90, "WALL", WHITE, BLACK, 16, 0);
//	if(mode == WALLS)
//		lcd_ShowStr(120, 90, "WALLS", WHITE, BLACK, 16, 0);
//	if(mode == TIMER)
//		lcd_ShowStr(120, 90, "TIMER", WHITE, BLACK, 16, 0);
//
//	lcd_ShowStr(40, 120, "Speed (E):", WHITE, BLACK, 16, 0);
//	if(speed == 1000)
//		lcd_ShowStr(120, 120, "EASY", WHITE, BLACK, 16, 0);
//	if(speed == 500)
//		lcd_ShowStr(120, 120, "MEDIUM", WHITE, BLACK, 16, 0);
//	if(speed == 100)
//		lcd_ShowStr(120, 120, "HARD", WHITE, BLACK, 16, 0);
//
//	lcd_ShowStr(40, 150, "Leaderboard (<)", WHITE, BLACK, 16, 0);
//	lcd_ShowStr(40, 180, "Time:", WHITE, BLACK, 16, 0);
	lcd_ShowStr(40, 60, "Time:", WHITE, BLACK, 16, 0);
	lcd_ShowIntNum(90, 60, count/60, 2, WHITE, BLACK, 16);
	lcd_ShowStr(110, 60, ":", WHITE, BLACK, 16, 0);
	lcd_ShowIntNum(120, 60, count%60, 2, WHITE, BLACK, 16);

	lcd_ShowStr(40, 90, "Food: ", WHITE, BLACK, 16, 0);
	lcd_ShowIntNum(100, 90, score, 2, WHITE, BLACK, 16);
//	lcd_Fill(50, 250, 190, 300, GREEN);
//	lcd_ShowStr(80,260,"RESTART",BLACK,BLACK,24,1);
//	lcd_ShowStr(40,211,"You did well!!! Again?",BLUE,BLACK,16,0);
}
