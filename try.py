#!/usr/bin/env python3
import os
import serial
import pygame
import simpleaudio as sa

pygame.mixer.init()


def main():
    global play_obj
    f1, f7 = True, True
    flag = False
    counter = 0
    # wave_object = []
    songs = ["hiallIamIggy.wav", "doyoulike.wav", "mymom.wav", "ifyoucome.wav", "iamtired.wav"]
    ser = serial.Serial('/dev/ttyACM0', 9600)
    ser.flush()
    while True:
        number = ser.read()
        n = int.from_bytes(number, byteorder='big')
        print(n)
        if n > 70:
            if f1:
                wave_obj = sa.WaveObject.from_wave_file("yawn.wav")
                play_obj1 = wave_obj.play()
                f1 = False
            elif not f1 and (not play_obj1.is_playing()):
                wave_obj = sa.WaveObject.from_wave_file("yawn.wav")
                play_obj1 = wave_obj.play()

        elif n >= 30 and n <= 70:
            file_name = ""
            # print("Hey1")
            if os.path.isfile("name.txt"):
                f = open("name.txt", "r")
                file_name = f.read()
                f.close()
                os.system("rm name.txt")
            # else:
            #    pass

            if file_name == "":
                # print("Hey")
                wave_obj = sa.WaveObject.from_wave_file(songs[0])
                # write song file name to a text file
                f = open("name.txt", "w")
                f.write(songs[0])
                f.close()
                play_obj = wave_obj.play()
            else:
                # wave_obj = sa.WaveObject.from_wave_file(file_name)
                f = open("name.txt", "w")
                f.write(file_name)
                f.close()
                if play_obj.is_playing():
                    pass
                else:
                    if counter < 4:
                        counter += 1
                        if flag:
                            play_obj7.stop()
                        else:
                            pass
                        wave_obj = sa.WaveObject.from_wave_file(songs[counter])
                        f = open("name.txt", "w")
                        f.write(songs[counter])
                        f.close()
                        #seq = "seq1\n"
                        #ser.write(seq.encode('utf-8'))
                        play_obj = wave_obj.play()
                    elif counter == 4:
                        counter = 0
                        os.system("rm name.txt")


        elif n < 20:
            if f7:
                wave_obj7 = sa.WaveObject.from_wave_file("dontcome.wav")
                play_obj.stop()  # need to make it into any audio encountered
                play_obj7 = wave_obj7.play()
                counter = counter - 1
                flag = True
                f7 = False
            elif not f7 and (not play_obj7.is_playing()):
                wave_obj7 = sa.WaveObject.from_wave_file("dontcome.wav")
                play_obj.stop()  # need to make it into any audio encountered
                flag = True
                counter = counter - 1
                play_obj7 = wave_obj7.play()


if __name__ == '__main__':
    main()
