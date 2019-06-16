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
		
		System.out.println("服务器开启喇");
		while (true) {
			try {
				/* 开始接受客户端的连接 */
				Socket so = ss.accept();
				if (so == null) {
					continue;
				}
				System.out.println("有客户端连接我了，好兴奋~");
				clientThread.addClient(so);
			} catch (IOException e) {
				e.printStackTrace();
			}

		}

	}
}
