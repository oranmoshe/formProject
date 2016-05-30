//Component.h

#ifndef __COMPONENT_H_INCLUDED__   // if x.h hasn't been included yet...
#define __COMPONENT_H_INCLUDED__   //   #define this so the compiler knows it has been included

#include <windows.h>

using namespace std;

enum class BorderType { Single, Double, None};
enum class ForegroundColor { Red, Blue, Green, Purple, Teal, Yellow, White, Black };
enum class BackgroundColor { Red, Blue, Green, Purple, Teal, Yellow, White, Black };


class COMPONENT {
protected:
	BorderType frame;
	BackgroundColor bc;
	ForegroundColor fc;
	COORD size;
	COORD location;
public:
	virtual void Show() = 0;
	virtual void Hide()= 0 ;
	virtual void SetForegroundColor(ForegroundColor) = 0;
	virtual void SetBackgroundColor(BackgroundColor) = 0;
	virtual void SetBorder(BorderType) = 0;
	COMPONENT(){
	}
};

#endif a