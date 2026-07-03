# Program Sederhana di dalam Kernel

 Compile Program

'''
$ make
'''


 Memasukan Program dalam kernel

'''
$ sudo insmod hello.ko
'''


 Mengecek Program Apakah sudah masuk kedalam kernel
'''
$ lsmod |grep hello
'''


 Melihat Output Program
'''
$ sudo dmesg
'''


Mengeluarkan Program dalam kernel
'''
$ sudo rmmod hello
'''


Menghapus Program
'''
$ make clean
'''

