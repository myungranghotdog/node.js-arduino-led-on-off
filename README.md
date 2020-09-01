# node.js-arduino-led-on-off
electron 화면 창에서 led on, off button을 누르면 socket.io 통신을 통해 클라이언트(electron)에서 서버로 명령을 전달한다. 
서버에서는 클라이언트의 명령을 받으면 serial통신을 통해 arduino로 명령을 다시 전달한다.
arduino에서는 클라이언트의 명령을 듣고 led를 on/off시킨다.
(이거와는 별개로 채팅 기능도 지원함)
