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
		
		/* ���͵�¼��Ϣ */
		OutputStream os;
		try {
			os = so.getOutputStream();
			
			/* ���������֮�󣬾�ֱ�ӷ��͵�¼��Ϣ����ң�������¼��Ϸ��{"cmd":1} */
			String send = "{\"cmd\":1}";
			os.write(send.getBytes("UTF-8"));
		} catch (IOException e) {
		}
	}

	@Override
	public void run() {
		while (true) {
			try {
				/* ���տͻ��˵����� */
				for(Socket so : clients) {
					InputStream is = so.getInputStream();
					OutputStream os = so.getOutputStream();
					int len = is.available();
					if(len <= 0) {
						continue;
					}
					/* �������� */
					byte[] buff = new byte[len];
					is.read(buff);
					
					String read = new String(buff);	
					System.out.println("�յ������ݣ�" + read);
				}
				sleep(10);
			} catch (IOException e) {
			} catch (InterruptedException e) {
			}
		}
	}
}
