
def pyramid_volume(base_length, base_width, pyramid_height):
    return(base_width * base_length * pyramid_height) / 3

length = float(input())
width = float(input())
height = float(input())
print('Volume for 4.5, 2.1, 3.0 is:', pyramid_volume(length, width, height))
