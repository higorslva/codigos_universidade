print('Para fechar a conexão, pressione primeiro CTRL + C no servidor')
print('Client TCP')

import socket
ip = input ("Digite o ip de conexao: ")
port = 7000
addr = ((ip,port))
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect(addr)

while True:

	mensagem = input("Digite uma mensagem para enviar ao servidor: ")
	client_socket.send(mensagem.encode('utf-8'))
	print ('Mensagem enviada com sucesso')

	if mensagem == 'sair_cliente':
		client_socket.close()
