# -*- coding: cp936 -*-
import turtle
def drawSnake(rad, angle, len, neckrad):
    for i in range(len):
        turtle.circle(rad, angle)   # 沿圆形轨迹运动，rad运动的半径，angle运动的弧度
        turtle.circle(-rad, angle)
    turtle.circle(rad, angle/2)
    turtle.fd(rad)          # 沿直线运动
    turtle.circle(neckrad + 1, 180)
    turtle.fd(rad*2/3)

def main():
    turtle.setup(1300, 800, 0, 0)   # 启动图形窗口
    pythonsize = 10
    turtle.pensize(pythonsize)
    turtle.pencolor("blue")
    turtle.seth(-40)        # 启动时运动的方向（角度）
    drawSnake(40, 80, 5, pythonsize/2)

main()
