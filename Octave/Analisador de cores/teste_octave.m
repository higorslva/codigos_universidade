var = [ 10 20 30 40 50]
var2 = [ var ; var]

dim = size(var);
disp (dim);

dim = size(var2);
disp (dim);

img = imread('./sanic.png');
imshow(img)

for i = 1:size(img, 1)
  for j = 1:size(img, 2)
      for k = 1:size(img, 3)
        aux = double(img( i, j, k)) %* 90;
        disp(['Pos ', int2str(i), ' ', int2str(j), ' ', int2str(k), ' ', int2str(aux)])
      endfor
  endfor
endfor

