# code: utf-8

import ctypes

httpd = ctypes.CDLL('./httpdsample.so')
httpd.start_server.argtypes = [ctypes.c_char_p, ctypes.c_int, ctypes.c_int]
httpd.start_server.restype = ctypes.c_int

def start(host, port, showLog=False):
    ret = httpd.start_server(host.encode('utf-8'), port, int(showLog))
    if ret != 0:
        print('failed to run server')
    return ret

def stop():
    httpd.stop_server()
