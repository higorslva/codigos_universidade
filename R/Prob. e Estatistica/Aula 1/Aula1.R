df <- data.frame(Nome = character(), Matricula = character(), Curso = character())
df

df <- rbind(df, data.frame(Nome = 'Higoru', Matricula = '2021xxxxxx', Curso = 'Fisica'))
df

df <- rbind(df, data.frame(Nome = 'João',   Matricula = '2022xxxxxx', Curso = 'Computação'))
df

df <- rbind(df, data.frame(Nome='Yoni', Matricula = '1500xxxxxx', Curso='Fisica'))
df

df <- rbind(df, data.frame(Nome='Samuel', Matricula = '1980xxxxxx', Curso='Computação'))
df


print(df)
# Estrutura do data frame
str(df)

# Escolhendo alguns dos elementos do dataframe 
subset(df, Curso == 'Computação')

data('iris')
names(iris)
summary(iris)

#importando biblioteca tidyverse
library(tidyverse)

table(iris$Species)

iris[iris$Species == "setosa"  & iris$Sepal.Length > 4.8 
     & iris$Sepal.Length < 5.1, ]

iris[iris$Species == "setosa"  & iris$Sepal.Length > 4.8 
     & iris$Sepal.Length < 5.1, c("Sepal.Length", "Petal.Length")]
##############
df1 <- iris[iris$Species == "setosa"  & iris$Sepal.Length > 4.8 
            & iris$Sepal.Length < 5.1, c("Sepal.Length", "Petal.Length")]
# Crescente
df1[order(df1$Petal.Length), ]
# Decrescente:
df1[order(df1$Petal.Length, decreasing = TRUE), ]

iris$Dim <- iris$Sepal.Length/iris$Petal.Length
head(iris)

# Deletando variável Dim
iris$Dim <- NULL
head(iris)

# Plotando o gráfico das Sépalas
plot(iris$Sepal.Length,iris$Sepal.Width)


graf2 <- ggplot(aes(x=Sepal.Length, y=Sepal.Width), data=iris, color=Species)+
  geom_point(aes(color=Species),size=2) + 
  ggtitle("Largura x Comprimento das Sépalas por espécies (cm)")

# Chamando a variável graf2
graf2

# Por tamanho das petalas
plot(iris$Petal.Length,iris$Petal.Width)

# Plotando o gráfico das pétalas
graf3 <- ggplot(aes(x=Petal.Length, y=Petal.Width), data=iris, color=Species)+
  geom_point(aes(color=Species),size=2) + 
  ggtitle("Largura x Comprimento das Petalas por espécies (cm)")

graf3

#Biblioteca crabs
library(MASS)

names(crabs)

head(crabs)

tail(crabs)

str(crabs)

summary(crabs)

table(crabs$sp)

table(crabs$sex)

table(crabs$sp, crabs$sex)

crabs[1:50,]

crabs[51:100,]

hist(crabs[51:100, 6], main = 'CL: caranguejos femeas de cor azul')

split.screen(figs=c(1,2))
screen(1)
hist(crabs[1:50, 6], ylim=c(0,20), main = 'CL: caranguejos machos de cor azul')
screen(2)
hist(crabs[51:100, 6], ylim=c(0,20), main = 'CL: caranguejos femeas de cor azul')
close.screen(all=TRUE)

summary(crabs)

crabs[101:150,]

hist(crabs[101:150, 6], main = 'CL: caranguejos machos de cor laranja')
crabs[151:200,]
hist(crabs[51:100, 6], main = 'CL: caranguejos femeas de cor laranja')

split.screen(figs=c(1,2))
screen(1)
hist(crabs[101:150, 6], ylim=c(0,20), main = 'CL: caranguejos machos de cor laranja')
screen(2)
hist(crabs[151:200, 6], ylim=c(0,20), main = 'CL: caranguejos femeas de cor laranja')
close.screen(all=TRUE)

gapminder <- readRDS('/home/higorslva/Documentos/Unifap/C. Computação/Semestres/2022.2/Probabilidade e Estatística/Materiais/gapminder_dados.rds')
gapminder

data(gapminder)
head(gapminder)
names(gapminder)
