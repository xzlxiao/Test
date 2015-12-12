% Stationary Point display
StaticPoint = [0 0 0 0 0 0 0 0 0;
               0 0 0 0 1 0 0 0 0;
               0 0 0 1 2 1 0 0 0;
               0 0 1 2 3 2 1 0 0;
               0 1 2 3 3 3 2 1 0;
               0 0 1 2 3 2 1 0 0;
               0 0 0 1 2 1 0 0 0;
               0 0 0 0 1 0 0 0 0;
               0 0 0 0 0 0 0 0 0;];
StaticPoint = StaticPoint.*30;
figure;
hold on;
for i = 1 : 9
    for j = 1 : 9
        text(i, j, num2str(StaticPoint(i, j)))
    end
end
[px, py] = gradient(StaticPoint);
v = 1:9;
contour(v,v,StaticPoint);
grid on;
quiver(v,v,px,py);
hold off;