#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

void print_date(struct tm *date) {
    char buffer[80];
    strftime(buffer, 80, "%A, %d %B %Y", date);
    printw("Tanggal: %s\n", buffer);
}

void adjust_date(struct tm *date, int days) {
    time_t rawtime = mktime(date);
    rawtime += days * 24 * 60 * 60;
    *date = *localtime(&rawtime);
}

int main() {
    time_t rawtime;
    struct tm *date;

    // Inisialisasi ncurses
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    // Dapatkan tanggal saat ini
    time(&rawtime);
    date = localtime(&rawtime);

    int ch;
    while(1) {
        clear();
        print_date(date);
        printw("Tekan 'n' untuk tanggal selanjutnya, 'p' untuk tanggal sebelumnya, 'q' untuk keluar.\n");
        ch = getch();
        switch(ch) {
            case 'n':
                adjust_date(date, 1);
                break;
            case 'p':
                adjust_date(date, -1);
                break;
            case 'q':
                endwin();
                return 0;
        }
    }

    // Akhiri ncurses
    endwin();
    return 0;
}
