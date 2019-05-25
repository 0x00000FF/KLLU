// KLLU.cpp : Defines the entry point for the application.
//

#include <KLLUInterface.hpp>

using namespace std;

#ifdef WIN32
int __stdcall wWinMain(void*, void*, void*, int)
#else
int main()
#endif
{
    return MainWindow().execResult();
}
