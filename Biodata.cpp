#include <ncurses.h>
using namespace std;

int main (){
initscr();
char name[50], addres[100], hoby[30];

mvprintw(1,25, "-----Masukkan Input-----\n");
getstr(name);
getstr(addres);
getstr(hoby);

mvprintw(5,25, "-----Tampilan Output-----\n");
printw("Nama\t:%s \n", name);
printw("Alamat\t:%s \n", addres);
printw("Hobi\t:%s \n", hoby);

refresh();
getch();
endwin();

}