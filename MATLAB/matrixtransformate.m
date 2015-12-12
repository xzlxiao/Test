
clf;
A = [0, 1, 1, 1, 1;...
    1, 1, 0, 0, 1];  % 原空间
B = [3 0; 0 2];      % 线性变换矩阵

plot(A(1,:),A(2,:), '-*');hold on
grid on;axis([0 3 0 3]); %gtext('变换前');
%%
Y = B * A;

plot(Y(1,:),Y(2,:), '-r*');
grid on;axis([0 3 0 3]); %gtext('变换后');
