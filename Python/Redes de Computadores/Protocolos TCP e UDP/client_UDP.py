import socket

print("Aperte CTRL + C para sair da conexão")
print("Cliente UDP")
print("Porta padrão: 5005")
UDP_IP = input ("Digite o ip de conexao: ")
UDP_PORT = 5005

while True:
	sock = socket.socket(socket.AF_INET, # Internet
                     socket.SOCK_DGRAM) # UDP
	mensagem = input("Digite uma mensagem para enviar ao servidor: ")
	sock.sendto(mensagem.encode('utf-8'), (UDP_IP, UDP_PORT))
