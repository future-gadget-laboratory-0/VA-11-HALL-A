import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class Server {
	public static void main(String[] args) {
		ServerSocket ss = null;
		ClientThread clientThread = new ClientThread();
		try {
			ss = new ServerSocket(7777);
			clientThread.start();
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		System.out.println("������������");
		while (true) {
			try {
				/* ��ʼ���ܿͻ��˵����� */
				Socket so = ss.accept();
				if (so == null) {
					continue;
				}
				System.out.println("�пͻ����������ˣ����˷�~");
				clientThread.addClient(so);
			} catch (IOException e) {
				e.printStackTrace();
			}

		}

	}
}
