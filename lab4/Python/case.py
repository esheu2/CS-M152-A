import struct
from math import exp
import decimal

global nextbin


def transfer(activation):
	return 1.0 / (1.0 + exp(-activation))

def float_to_bin(num):
    return format(struct.unpack('!I', struct.pack('!f', num))[0], '032b')

def print_case(text, lower, upper, step):
    iter = list(drange(lower, upper,step))
    for pos, i in enumerate(iter[:-1]):
        next = iter[pos+1]
        avg = (i+next)/2
        sig = transfer(avg)
        inbin = float_to_bin(avg)
        currbin = float_to_bin(i)
        nextbin = float_to_bin(next)
        if(i == 0):
            text.write("if( x > 32'b%s && x < 32'b%s)\n" % (currbin, nextbin))
        else:
            text.write("if( x >= 32'b%s && x < 32'b%s)\n" % (currbin, nextbin))
        text.write("begin\n")
        text.write("\ty_temp <= 32'b%s;\n" % (float_to_bin(sig)))
        text.write("end\n")
    text.write("if( x >= 32'b%s )\n" % (nextbin))
    text.write("begin\n")
    text.write("\ty_temp <= 32'b00111111100000000000000000000000;\n")
    text.write("end\n")

    text.write("if( x == 0 )\n")
    text.write("begin\n")
    text.write("\ty_temp <= 32'b00111111000000000000000000000000;\n")
    text.write("end\n")

def print_case_neg(text, lower, upper, step):
    iter = list(drange(lower, upper,step))
    for pos, i in enumerate(iter[:-1]):
        next = iter[pos+1]
        avg = (i+next)/2
        sig = transfer(avg)
        inbin = float_to_bin(avg)
        currbin = float_to_bin(i)
        nextbin = float_to_bin(next)
        # if(avg == -5):
        #     text.write("if( x <= 32'b%s )\n" % (inbin))
        #     text.write("begin\n")
        #     text.write("\ty_temp <= 0;\n")
        #     text.write("end\n")
        if(i == 0):
            text.write("if( x < 32'b%s && x > 32'b%s)\n" % (currbin, nextbin))
        else:
            text.write("if( x <= 32'b%s && x > 32'b%s)\n" % (currbin, nextbin))
        text.write("begin\n")
        text.write("\ty_temp <= 32'b%s;\n" % (float_to_bin(sig)))
        text.write("end\n")
    text.write("if( x >= 32'b11000000101000000000000000000000 )\n")
    text.write("begin\n")
    text.write("\ty_temp <= 0;\n")
    text.write("end\n")

def drange(x, y, jump):
  while x < y:
    yield float(x)
    x += float(jump)

if __name__ == '__main__':
    text_file = open("casep.txt", "w")
    print_case(text_file, 0.0, 5.0, '0.05')
    text_file.close()
    text_file = open("casen.txt", "w")
    print_case_neg(text_file, -5.0, 0.0, '0.05')
    text_file.close()
