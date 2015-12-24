% ���ӵ��Ż��㷨ʾ��
% ���1
% ��������1����
backMatrix_1 = [1, 1, 1, 1, 1;
                                1, 2, 2, 2, 1;
                                1, 2, 3, 2, 1;
                                1, 2, 2, 2, 1;
                                1, 1, 1, 1, 1];
                            
% ��������2����
backMatrix_2 = [1, 1, 0, 1, 1;
                                1, 2, 1, 2, 1;
                                1, 2, 3, 2, 1;
                                1, 2, 2, 2, 1;
                                1, 1, 1, 1, 1];
                            
% ���ɸ��Ե��ݶ�����
[Matrix1x, Matrix1y] = gradient(backMatrix_1);
[Matrix2x, Matrix2y] = gradient(backMatrix_2);

% �����ݶȳ�
figure;
hold on;
subplot(1, 2, 1);
quiver(1:5, 1:5, Matrix1x, Matrix1y);
axis ij;
subplot(1, 2, 2);
quiver(1:5, 1:5, Matrix2x, Matrix2y);
axis ij;