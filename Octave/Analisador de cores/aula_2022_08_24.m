img = imread('sanic.png')
cmy=uint8(zeros(size(img)));

for i = 1:size(img,1)
  for j = 1:size(img,2)
    for k = 1:size(img,3)
      cmy(i,j,k) = 255 - img(i,j,k);
    endfor
  endfor
endfor
im_yiq = double(img)
mat_yiq = [0.299 0.587 0.114;
           0.596 -0.275 -0.321;
           0.212 -0.523 0.311];

for i = 1:size(img, 1)
  for j = 1:size(img, 2)
    rgb = double([img](i, j, 1), img(i, j, 2), img(i, j, 3))
    im_yig(i,j,1:3) = mat_yiq*rgb';
  endfor
endfor
subplot(131)
imshow (img)
subplot(132)
imshow(im_yiq)
subplot(133)
imshow(im_yiq)

limiar = 130;
img_bin = img;
value = [0 255]

for i = 1:size(img,1)
  for j = 1:size(img,2)
    for k = 1:size(img,3)
      if img(i, j, k)>limiar
        img_bin(i,j,k) = value(2);
       else
        img_bin(i,j,k) = value(1);
      endif
    endfor
  endfor
endfor

%value = [0 255];
%for i=1:size(img,2)
