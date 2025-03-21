
#pragma once
#include "files.hpp"
namespace duckdb {
const File FILE_TEST_HTML = {
     // Content
     "PCFET0NUWVBFIGh0bWw+PGh0bWwgbGFuZz0iZW4iPjxoZWFkPjxtZXRhIGNoYXJTZXQ9InV0Zi04Ii8+PG1ldGEgbmFtZT0idmlld3BvcnQiIGNvbnRlbnQ9IndpZHRoPWRldmljZS13aWR0aCwgaW5pdGlhbC1zY2FsZT0xIi8+PGxpbmsgcmVsPSJzdHlsZXNoZWV0IiBocmVmPSIvX25leHQvc3RhdGljL2Nzcy83MjVhY2FjOTcyY2IyZDg2LmNzcyIgZGF0YS1wcmVjZWRlbmNlPSJuZXh0Ii8+PGxpbmsgcmVsPSJwcmVsb2FkIiBhcz0ic2NyaXB0IiBmZXRjaFByaW9yaXR5PSJsb3ciIGhyZWY9Ii9fbmV4dC9zdGF0aWMvY2h1bmtzL3dlYnBhY2stZjU1Njg5YjFmY2NiNjY1My5qcyIvPjxzY3JpcHQgc3JjPSIvX25leHQvc3RhdGljL2NodW5rcy9jNzhhYzBhYS0zYWNlMTdjYWQ4YzkwODk4LmpzIiBhc3luYz0iIj48L3NjcmlwdD48c2NyaXB0IHNyYz0iL19uZXh0L3N0YXRpYy9jaHVua3MvNzM2LTliY2U3ZmRlMmFmY2MwNDQuanMiIGFzeW5jPSIiPjwvc2NyaXB0PjxzY3JpcHQgc3JjPSIvX25leHQvc3RhdGljL2NodW5rcy9tYWluLWFwcC0yMmQ5NjNlZjNmZTUzZTE0LmpzIiBhc3luYz0iIj48L3NjcmlwdD48c2NyaXB0IHNyYz0iL19uZXh0L3N0YXRpYy9jaHVua3MvMjE3LTE3MWMzODI4NjM3NDM2OGEuanMiIGFzeW5jPSIiPjwvc2NyaXB0PjxzY3JpcHQgc3JjPSIvX25leHQvc3RhdGljL2NodW5rcy9hcHAvdGVzdC9wYWdlLWEyYzczMGI5N2ZkZjcxZDUuanMiIGFzeW5jPSIiPjwvc2NyaXB0PjxzY3JpcHQgc3JjPSIvX25leHQvc3RhdGljL2NodW5rcy8zNTUtOTE5NjRmNTQ3YjNmNmQyOC5qcyIgYXN5bmM9IiI+PC9zY3JpcHQ+PHNjcmlwdCBzcmM9Ii9fbmV4dC9zdGF0aWMvY2h1bmtzLzc2NC05MDNlYjVlN2YyYjJmMjk0LmpzIiBhc3luYz0iIj48L3NjcmlwdD48c2NyaXB0IHNyYz0iL19uZXh0L3N0YXRpYy9jaHVua3MvNTk2LWE4ZWU2OWE2ZTk5MDgwNWMuanMiIGFzeW5jPSIiPjwvc2NyaXB0PjxzY3JpcHQgc3JjPSIvX25leHQvc3RhdGljL2NodW5rcy9hcHAvbGF5b3V0LWM4OGI2N2IyNzU3NjM5NzMuanMiIGFzeW5jPSIiPjwvc2NyaXB0Pjx0aXRsZT5EYXNoPC90aXRsZT48bWV0YSBuYW1lPSJhcHBsZS1tb2JpbGUtd2ViLWFwcC10aXRsZSIgY29udGVudD0iRGFzaCIvPjxsaW5rIHJlbD0ibWFuaWZlc3QiIGhyZWY9Ii9tYW5pZmVzdC5qc29uIiBjcm9zc29yaWdpbj0idXNlLWNyZWRlbnRpYWxzIi8+PGxpbmsgcmVsPSJpY29uIiBocmVmPSIvZmF2aWNvbi5pY28iIHR5cGU9ImltYWdlL3gtaWNvbiIgc2l6ZXM9IjQ4eDQ4Ii8+PGxpbmsgcmVsPSJpY29uIiBocmVmPSIvaWNvbi5wbmc/ZjQ1MjFhNTlkZjBkOGYwYiIgdHlwZT0iaW1hZ2UvcG5nIiBzaXplcz0iOTZ4OTYiLz48bGluayByZWw9ImFwcGxlLXRvdWNoLWljb24iIGhyZWY9Ii9hcHBsZS1pY29uLnBuZz9lNDdjNDJkOTlmMmQyNDRmIiB0eXBlPSJpbWFnZS9wbmciIHNpemVzPSIxODB4MTgwIi8+PG1ldGEgbmFtZT0ibmV4dC1zaXplLWFkanVzdCIvPjxzY3JpcHQgc3JjPSIvX25leHQvc3RhdGljL2NodW5rcy9wb2x5ZmlsbHMtNzhjOTJmYWM3YWE4ZmRkOC5qcyIgbm9Nb2R1bGU9IiI+PC9zY3JpcHQ+PC9oZWFkPjxib2R5IGNsYXNzPSJtaW4taC1zY3JlZW4gYmctYmFja2dyb3VuZCBhbnRpYWxpYXNlZCI+PG1haW4+PGRpdiBjbGFzcz0idy1zY3JlZW4gaC1zY3JlZW4iPjxzY3JpcHQ+KChlLHQscixuLGksbyxzLGEpPT57bGV0IGw9ZG9jdW1lbnQuZG9jdW1lbnRFbGVtZW50LHU9WyJsaWdodCIsImRhcmsiXTtmdW5jdGlvbiBkKHQpeyhBcnJheS5pc0FycmF5KGUpP2U6W2VdKS5mb3JFYWNoKGU9PntsZXQgcj0iY2xhc3MiPT09ZSxuPXImJm8/aS5tYXAoZT0+b1tlXXx8ZSk6aTtyPyhsLmNsYXNzTGlzdC5yZW1vdmUoLi4ubiksbC5jbGFzc0xpc3QuYWRkKHQpKTpsLnNldEF0dHJpYnV0ZShlLHQpfSksYSYmdS5pbmNsdWRlcyh0KSYmKGwuc3R5bGUuY29sb3JTY2hlbWU9dCl9aWYobilkKG4pO2Vsc2UgdHJ5e2xldCBlPWxvY2FsU3RvcmFnZS5nZXRJdGVtKHQpfHxyLG49cyYmInN5c3RlbSI9PT1lP3dpbmRvdy5tYXRjaE1lZGlhKCIocHJlZmVycy1jb2xvci1zY2hlbWU6IGRhcmspIikubWF0Y2hlcz8iZGFyayI6ImxpZ2h0IjplO2Qobil9Y2F0Y2goZSl7fX0pKCJjbGFzcyIsInRoZW1lIiwic3lzdGVtIixudWxsLFsibGlnaHQiLCJkYXJrIl0sbnVsbCx0cnVlLHRydWUpPC9zY3JpcHQ+PGRpdiBjbGFzcz0iZmxleCBmbGV4LXJvdyBoLXNjcmVlbiB3LXNjcmVlbiI+PCEtLSQtLT48aDEgY2xhc3M9InNjcm9sbC1tLTIwIHRleHQtNHhsIGZvbnQtZXh0cmFib2xkIHRyYWNraW5nLXRpZ2h0IGxnOnRleHQtNXhsIj4gSG9pISA8L2gxPjwhLS0vJC0tPjwvZGl2PjwvZGl2PjxzZWN0aW9uIGFyaWEtbGFiZWw9Ik5vdGlmaWNhdGlvbnMgYWx0K1QiIHRhYmluZGV4PSItMSIgYXJpYS1saXZlPSJwb2xpdGUiIGFyaWEtcmVsZXZhbnQ9ImFkZGl0aW9ucyB0ZXh0IiBhcmlhLWF0b21pYz0iZmFsc2UiPjwvc2VjdGlvbj48L21haW4+PHNjcmlwdCBzcmM9Ii9fbmV4dC9zdGF0aWMvY2h1bmtzL3dlYnBhY2stZjU1Njg5YjFmY2NiNjY1My5qcyIgYXN5bmM9IiI+PC9zY3JpcHQ+PHNjcmlwdD4oc2VsZi5fX25leHRfZj1zZWxmLl9fbmV4dF9mfHxbXSkucHVzaChbMF0pO3NlbGYuX19uZXh0X2YucHVzaChbMixudWxsXSk8L3NjcmlwdD48c2NyaXB0PnNlbGYuX19uZXh0X2YucHVzaChbMSwiMTpITFtcIi9fbmV4dC9zdGF0aWMvY3NzLzcyNWFjYWM5NzJjYjJkODYuY3NzXCIsXCJzdHlsZVwiXVxuIl0pPC9zY3JpcHQ+PHNjcmlwdD5zZWxmLl9fbmV4dF9mLnB1c2goWzEsIjI6SVs3MzAzMCxbXSxcIlwiXVxuNDpJWzQ3MzQ2LFtdLFwiQ2xpZW50UGFnZVJvb3RcIl1cbjU6SVs5ODcwMSxbXCIyMTdcIixcInN0YXRpYy9jaHVua3MvMjE3LTE3MWMzODI4NjM3NDM2OGEuanNcIixcIjkyOFwiLFwic3RhdGljL2NodW5rcy9hcHAvdGVzdC9wYWdlLWEyYzczMGI5N2ZkZjcxZDUuanNcIl0sXCJkZWZhdWx0XCIsMV1cbjY6SVs2MzMwOCxbXSxcIlwiXVxuNzpJWzY1MDI2LFtdLFwiXCJdXG44OklbODYyMzksW1wiMjE3XCIsXCJzdGF0aWMvY2h1bmtzLzIxNy0xNzFjMzgyODYzNzQzNjhhLmpzXCIsXCIzNTVcIixcInN0YXRpYy9jaHVua3MvMzU1LTkxOTY0ZjU0N2IzZjZkMjguanNcIixcIjc2NFwiLFwic3RhdGljL2NodW5rcy83NjQtOTAzZWI1ZTdmMmIyZjI5NC5qc1wiLFwiNTk2XCIsXCJzdGF0aWMvY2h1bmtzLzU5Ni1hOGVlNjlhNmU5OTA4MDVjLmpzXCIsXCIxODVcIixcInN0YXRpYy9jaHVua3MvYXBwL2xheW91dC1jODhiNjdiMjc1NzYzOTczLmpzXCJdLFwiZGVmYXVsdFwiLDFdXG5iOklbNDAxNzksW10sXCJcIl1cbjk6e31cbmM6W11cbiJdKTwvc2NyaXB0PjxzY3JpcHQ+c2VsZi5fX25leHRfZi5wdXNoKFsxLCIwOltcIiRcIixcIiRMMlwiLG51bGwse1wiYnVpbGRJZFwiOlwiTURlQUVaTTNsajBTeXdvYUJXR1JuXCIsXCJhc3NldFByZWZpeFwiOlwiXCIsXCJ1cmxQYXJ0c1wiOltcIlwiLFwidGVzdFwiXSxcImluaXRpYWxUcmVlXCI6W1wiXCIse1wiY2hpbGRyZW5cIjpbXCJ0ZXN0XCIse1wiY2hpbGRyZW5cIjpbXCJfX1BBR0VfX1wiLHt9XX1dfSxcIiR1bmRlZmluZWRcIixcIiR1bmRlZmluZWRcIix0cnVlXSxcImluaXRpYWxTZWVkRGF0YVwiOltcIlwiLHtcImNoaWxkcmVuXCI6W1widGVzdFwiLHtcImNoaWxkcmVuXCI6W1wiX19QQUdFX19cIix7fSxbW1wiJEwzXCIsW1wiJFwiLFwiJEw0XCIsbnVsbCx7XCJwcm9wc1wiOntcInBhcmFtc1wiOnt9LFwic2VhcmNoUGFyYW1zXCI6e319LFwiQ29tcG9uZW50XCI6XCIkNVwifV0sbnVsbF0sbnVsbF0sbnVsbF19LFtudWxsLFtcIiRcIixcIiRMNlwiLG51bGwse1wicGFyYWxsZWxSb3V0ZXJLZXlcIjpcImNoaWxkcmVuXCIsXCJzZWdtZW50UGF0aFwiOltcImNoaWxkcmVuXCIsXCJ0ZXN0XCIsXCJjaGlsZHJlblwiXSxcImVycm9yXCI6XCIkdW5kZWZpbmVkXCIsXCJlcnJvclN0eWxlc1wiOlwiJHVuZGVmaW5lZFwiLFwiZXJyb3JTY3JpcHRzXCI6XCIkdW5kZWZpbmVkXCIsXCJ0ZW1wbGF0ZVwiOltcIiRcIixcIiRMN1wiLG51bGwse31dLFwidGVtcGxhdGVTdHlsZXNcIjpcIiR1bmRlZmluZWRcIixcInRlbXBsYXRlU2NyaXB0c1wiOlwiJHVuZGVmaW5lZFwiLFwibm90Rm91bmRcIjpcIiR1bmRlZmluZWRcIixcIm5vdEZvdW5kU3R5bGVzXCI6XCIkdW5kZWZpbmVkXCJ9XV0sbnVsbF19LFtbW1tcIiRcIixcImxpbmtcIixcIjBcIix7XCJyZWxcIjpcInN0eWxlc2hlZXRcIixcImhyZWZcIjpcIi9fbmV4dC9zdGF0aWMvY3NzLzcyNWFjYWM5NzJjYjJkODYuY3NzXCIsXCJwcmVjZWRlbmNlXCI6XCJuZXh0XCIsXCJjcm9zc09yaWdpblwiOlwiJHVuZGVmaW5lZFwifV1dLFtcIiRcIixcIiRMOFwiLG51bGwse1wiY2hpbGRyZW5cIjpbXCIkXCIsXCIkTDZcIixudWxsLHtcInBhcmFsbGVsUm91dGVyS2V5XCI6XCJjaGlsZHJlblwiLFwic2VnbWVudFBhdGhcIjpbXCJjaGlsZHJlblwiXSxcImVycm9yXCI6XCIkdW5kZWZpbmVkXCIsXCJlcnJvclN0eWxlc1wiOlwiJHVuZGVmaW5lZFwiLFwiZXJyb3JTY3JpcHRzXCI6XCIkdW5kZWZpbmVkXCIsXCJ0ZW1wbGF0ZVwiOltcIiRcIixcIiRMN1wiLG51bGwse31dLFwidGVtcGxhdGVTdHlsZXNcIjpcIiR1bmRlZmluZWRcIixcInRlbXBsYXRlU2NyaXB0c1wiOlwiJHVuZGVmaW5lZFwiLFwibm90Rm91bmRcIjpbW1wiJFwiLFwidGl0bGVcIixudWxsLHtcImNoaWxkcmVuXCI6XCI0MDQ6IFRoaXMgcGFnZSBjb3VsZCBub3QgYmUgZm91bmQuXCJ9XSxbXCIkXCIsXCJkaXZcIixudWxsLHtcInN0eWxlXCI6e1wiZm9udEZhbWlseVwiOlwic3lzdGVtLXVpLFxcXCJTZWdvZSBVSVxcXCIsUm9ib3RvLEhlbHZldGljYSxBcmlhbCxzYW5zLXNlcmlmLFxcXCJBcHBsZSBDb2xvciBFbW9qaVxcXCIsXFxcIlNlZ29lIFVJIEVtb2ppXFxcIlwiLFwiaGVpZ2h0XCI6XCIxMDB2aFwiLFwidGV4dEFsaWduXCI6XCJjZW50ZXJcIixcImRpc3BsYXlcIjpcImZsZXhcIixcImZsZXhEaXJlY3Rpb25cIjpcImNvbHVtblwiLFwiYWxpZ25JdGVtc1wiOlwiY2VudGVyXCIsXCJqdXN0aWZ5Q29udGVudFwiOlwiY2VudGVyXCJ9LFwiY2hpbGRyZW5cIjpbXCIkXCIsXCJkaXZcIixudWxsLHtcImNoaWxkcmVuXCI6W1tcIiRcIixcInN0eWxlXCIsbnVsbCx7XCJkYW5nZXJvdXNseVNldElubmVySFRNTFwiOntcIl9faHRtbFwiOlwiYm9keXtjb2xvcjojMDAwO2JhY2tncm91bmQ6I2ZmZjttYXJnaW46MH0ubmV4dC1lcnJvci1oMXtib3JkZXItcmlnaHQ6MXB4IHNvbGlkIHJnYmEoMCwwLDAsLjMpfUBtZWRpYSAocHJlZmVycy1jb2xvci1zY2hlbWU6ZGFyayl7Ym9keXtjb2xvcjojZmZmO2JhY2tncm91bmQ6IzAwMH0ubmV4dC1lcnJvci1oMXtib3JkZXItcmlnaHQ6MXB4IHNvbGlkIHJnYmEoMjU1LDI1NSwyNTUsLjMpfX1cIn19XSxbXCIkXCIsXCJoMVwiLG51bGwse1wiY2xhc3NOYW1lXCI6XCJuZXh0LWVycm9yLWgxXCIsXCJzdHlsZVwiOntcImRpc3BsYXlcIjpcImlubGluZS1ibG9ja1wiLFwibWFyZ2luXCI6XCIwIDIwcHggMCAwXCIsXCJwYWRkaW5nXCI6XCIwIDIzcHggMCAwXCIsXCJmb250U2l6ZVwiOjI0LFwiZm9udFdlaWdodFwiOjUwMCxcInZlcnRpY2FsQWxpZ25cIjpcInRvcFwiLFwibGluZUhlaWdodFwiOlwiNDlweFwifSxcImNoaWxkcmVuXCI6XCI0MDRcIn1dLFtcIiRcIixcImRpdlwiLG51bGwse1wic3R5bGVcIjp7XCJkaXNwbGF5XCI6XCJpbmxpbmUtYmxvY2tcIn0sXCJjaGlsZHJlblwiOltcIiRcIixcImgyXCIsbnVsbCx7XCJzdHlsZVwiOntcImZvbnRTaXplXCI6MTQsXCJmb250V2VpZ2h0XCI6NDAwLFwibGluZUhlaWdodFwiOlwiNDlweFwiLFwibWFyZ2luXCI6MH0sXCJjaGlsZHJlblwiOlwiVGhpcyBwYWdlIGNvdWxkIG5vdCBiZSBmb3VuZC5cIn1dfV1dfV19XV0sXCJub3RGb3VuZFN0eWxlc1wiOltdfV0sXCJwYXJhbXNcIjpcIiQ5XCJ9XV0sbnVsbF0sW1tcIiRcIixcIm1haW5cIixudWxsLHtcImNsYXNzTmFtZVwiOlwiZmxleCBtaW4taC1zY3JlZW4gZmxleC1jb2wgaXRlbXMtY2VudGVyIGp1c3RpZnktYmV0d2VlbiBwLTI0XCIsXCJjaGlsZHJlblwiOltcIiRcIixcImgxXCIsbnVsbCx7XCJjbGFzc05hbWVcIjpcInRleHQtNnhsIGZvbnQtYm9sZFwiLFwiY2hpbGRyZW"
     "5cIjpcIkxvYWRpbmcuLi4uLlwifV19XSxbXSxbXV1dLFwiY291bGRCZUludGVyY2VwdGVkXCI6ZmFsc2UsXCJpbml0aWFsSGVhZFwiOltudWxsLFwiJExhXCJdLFwiZ2xvYmFsRXJyb3JDb21wb25lbnRcIjpcIiRiXCIsXCJtaXNzaW5nU2xvdHNcIjpcIiRXY1wifV1cbiJdKTwvc2NyaXB0PjxzY3JpcHQ+c2VsZi5fX25leHRfZi5wdXNoKFsxLCJhOltbXCIkXCIsXCJtZXRhXCIsXCIwXCIse1wibmFtZVwiOlwidmlld3BvcnRcIixcImNvbnRlbnRcIjpcIndpZHRoPWRldmljZS13aWR0aCwgaW5pdGlhbC1zY2FsZT0xXCJ9XSxbXCIkXCIsXCJtZXRhXCIsXCIxXCIse1wiY2hhclNldFwiOlwidXRmLThcIn1dLFtcIiRcIixcImxpbmtcIixcIjJcIix7XCJyZWxcIjpcIm1hbmlmZXN0XCIsXCJocmVmXCI6XCIvbWFuaWZlc3QuanNvblwiLFwiY3Jvc3NPcmlnaW5cIjpcInVzZS1jcmVkZW50aWFsc1wifV0sW1wiJFwiLFwibGlua1wiLFwiM1wiLHtcInJlbFwiOlwiaWNvblwiLFwiaHJlZlwiOlwiL2Zhdmljb24uaWNvXCIsXCJ0eXBlXCI6XCJpbWFnZS94LWljb25cIixcInNpemVzXCI6XCI0OHg0OFwifV0sW1wiJFwiLFwibGlua1wiLFwiNFwiLHtcInJlbFwiOlwiaWNvblwiLFwiaHJlZlwiOlwiL2ljb24ucG5nP2Y0NTIxYTU5ZGYwZDhmMGJcIixcInR5cGVcIjpcImltYWdlL3BuZ1wiLFwic2l6ZXNcIjpcIjk2eDk2XCJ9XSxbXCIkXCIsXCJsaW5rXCIsXCI1XCIse1wicmVsXCI6XCJhcHBsZS10b3VjaC1pY29uXCIsXCJocmVmXCI6XCIvYXBwbGUtaWNvbi5wbmc/ZTQ3YzQyZDk5ZjJkMjQ0ZlwiLFwidHlwZVwiOlwiaW1hZ2UvcG5nXCIsXCJzaXplc1wiOlwiMTgweDE4MFwifV0sW1wiJFwiLFwibWV0YVwiLFwiNlwiLHtcIm5hbWVcIjpcIm5leHQtc2l6ZS1hZGp1c3RcIn1dXVxuMzpudWxsXG4iXSk8L3NjcmlwdD48L2JvZHk+PC9odG1sPg==",    //
     "text/html", //
     "/test.html/", //
};
}
