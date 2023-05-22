/**
 * 헤더파일 include
 * 
 * 
*/

#include <iostream>
#include <string>

using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void programExit();

FILE *inFp, *outFp;

int main() {
    inFp = fopen(INPUT_FILE_NAME, "r+");
    outFp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();
}

void doTask() {
    int menuLevel1 = 0, menuLevel2 = 0;
    int isProgramExit = 0;

    while (!isProgramExit) {
        fscanf(inFp, "%d %d", &menuLevel1, &menuLevel2);

        switch(menuLevel1) {
            case 1: 
                switch(menuLevel2) {
                    case 1:
                        break;
                    case 2:
                        break;
                }
                break;
            case 2: 
                switch(menuLevel2) {
                    case 1:
                        break;
                    case 2:
                        break;
                }
                break;
            case 3: 
                switch(menuLevel2) {
                    case 1:
                        break;
                    case 2:
                        break;
                }
                break;
            case 4: 
                switch(menuLevel2) {
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                }
                break;
            case 5: 
                switch(menuLevel2) {
                    case 1:
                        break;
                }
                break;
            case 6: 
                switch(menuLevel2) {
                    case 1:
                        programExit();
                        isProgramExit = true;
                        break;
                }
                break;
        }
    }
}

void programExit() {
    fprintf(outFp, "6.1 종료");
}