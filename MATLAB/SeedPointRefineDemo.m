% 种子点优化算法示意
% 情况1
% 背景矩阵1生成
backMatrix_1 = [1, 1, 1, 1, 1;
                                1, 2, 2, 2, 1;
                                1, 2, 3, 2, 1;
                                1, 2, 2, 2, 1;
                                1, 1, 1, 1, 1];
                            
% 背景矩阵2生成
backMatrix_2 = [1, 1, 0, 1, 1;
                                1, 2, 1, 2, 1;
                                1, 2, 3, 2, 1;
                                1, 2, 2, 2, 1;
                                1, 1, 1, 1, 1];
                            
% 生成各自的梯度向量
[Matrix1x, Matrix1y] = gradient(backMatrix_1);
[Matrix2x, Matrix2y] = gradient(backMatrix_2);

% 生成梯度场
figure;
hold on;
subplot(1, 2, 1);
quiver(1:5, 1:5, Matrix1x, Matrix1y);
axis ij;
subplot(1, 2, 2);
quiver(1:5, 1:5, Matrix2x, Matrix2y);
axis ij;