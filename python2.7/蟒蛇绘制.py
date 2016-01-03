# -*- coding: cp936 -*-
import turtle
def drawSnake(rad, angle, len, neckrad):
    for i in range(len):
        turtle.circle(rad, angle)   # ��Բ�ι켣�˶���rad�˶��İ뾶��angle�˶��Ļ���
        turtle.circle(-rad, angle)
    turtle.circle(rad, angle/2)
    turtle.fd(rad)          # ��ֱ���˶�
    turtle.circle(neckrad + 1, 180)
    turtle.fd(rad*2/3)

def main():
    turtle.setup(1300, 800, 0, 0)   # ����ͼ�δ���
    pythonsize = 10
    turtle.pensize(pythonsize)
    turtle.pencolor("blue")
    turtle.seth(-40)        # ����ʱ�˶��ķ��򣨽Ƕȣ�
    drawSnake(40, 80, 5, pythonsize/2)

main()
