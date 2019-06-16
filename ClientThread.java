import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.ArrayList;

public class ClientThread extends Thread  {
	private ArrayList<Socket> clients = new ArrayList<Socket>();

	public void addClient(Socket so) {
		clients.add(so);
		
		/* 发送登录消息 */
		OutputStream os;
		try {
			os = so.getOutputStream();
			
			/* 玩家连接上之后，就直接发送登录消息给玩家，让他登录游戏：{"cmd":1} */
			String send = "{\"cmd\":1}";
			os.write(send.getBytes("UTF-8"));
		} catch (IOException e) {
		}
	}

	@Override
	public void run() {
		while (true) {
			try {
				/* 接收客户端的数据 */
				for(Socket so : clients) {
					InputStream is = so.getInputStream();
					OutputStream os = so.getOutputStream();
					int len = is.available();
					if(len <= 0) {
						continue;
					}
					/* 接收数据 */
					byte[] buff = new byte[len];
					is.read(buff);
					
					String read = new String(buff);	
					System.out.println("收到的数据：" + read);
				}
				sleep(10);
			} catch (IOException e) {
			} catch (InterruptedException e) {
			}
		}
	}
}
