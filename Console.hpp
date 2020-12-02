
// Text Colors
#define BLACK           0
#define BLUE            1
#define GREEN           2
#define CYAN            3
#define RED             4
#define MAGENTA         5
#define BROWN           6
#define LIGHTGRAY       7
#define DARKGRAY        8
#define LIGHTBLUE       9
#define LIGHTGREEN      10
#define LIGHTCYAN       11
#define LIGHTRED        12
#define LIGHTMAGENTA    13
#define YELLOW          14
#define WHITE           15


#define EXPORT __declspec(dllexport)


//Console Screen Clear
extern "C" EXPORT void Clear(void);

// Show The Console Cursor
extern "C" EXPORT void CursorShow(bool show);

// Move Cursor
extern "C" EXPORT void gotoxy(short x, short y);

// Set Console Size
extern "C" EXPORT void SetConsoleSize(short x, short y);

// Text Color
extern "C" EXPORT void TextColor(unsigned int color, const char * string);

// Get Key Code
extern "C" EXPORT unsigned int KeyCode(const char key);