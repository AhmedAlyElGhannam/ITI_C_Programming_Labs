# Introduction to Programming Using C Language Course Labs
This repository contains my solutions to the lab exercises in the course titled "Introduction to Programming Using C Language" in my ITI 9-month scholarship.

## Tools Used
All the uploaded code was NEITHER written on your average IDE nor compiled using GCC. Instead, a DOS emulator called `DOSBOX` was used to run a retro-development environment called `BORLANDC`. Setup process is fairly simple and the environment can be used on both Windows and Linux. Of course, I used Linux to make my Linux Guru proud.

### DOSBOX Setup on Linux (Debian-based Machines)

1. Open the terminal and make sure your packages are up to date.
   ```
   sudo apt update && sudo apt upgrade -y
   ```
   
1. Simply, install `DOSBOX`.
   ```
   sudo apt install dosbox
   ```

1. In order to use `BORLANDC` in `DOSBOX`, open its `.conf` file using your favourite text editor the add the following lines at the end of the file.
   ```
   vim ~/.dosbox/dosbox-0.74-3.conf
   ```

   ```
   mount D /home/nemesis/BORLANDC
   D:
   cd BIN
   BC
   ```

1. Copy the folder titled `BORLANDC` from this repo to your home directory.

1. Done! Enjoy coding inside your retro environment!


![Screenshot from 2024-10-31 10-00-25](https://github.com/user-attachments/assets/bc410c16-bc88-4c24-85a6-345158a3929f)


![Screenshot from 2024-10-31 10-00-41](https://github.com/user-attachments/assets/ed9caf3e-ea15-4cd0-a36f-89bdbbf1e80a)



