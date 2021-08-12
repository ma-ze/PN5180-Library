#ifndef TIMEOUT_H
#define TIMEOUT_H
#pragma once
	
#define WHILETIMEOUT(condition, timeout) { \
   unsigned long startedMillis = millis(); \
   while(condition && millis() - startedMillis < timeout);\
   if (condition) return false; \
}
#endif