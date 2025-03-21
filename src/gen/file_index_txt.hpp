
#pragma once
#include "files.hpp"
namespace duckdb {
const File FILE_INDEX_TXT = {
     // Content
     "MjpJWzQ3MzQ2LFtdLCJDbGllbnRQYWdlUm9vdCJdCjM6SVsyMzI3NCxbIjU1NCIsInN0YXRpYy9jaHVua3MvNmJiODA4MDYtMWJhZWQ1YzAzZmY1NDMwNy5qcyIsIjEwOSIsInN0YXRpYy9jaHVua3MvOTNiZmE4OGYtNmVlMzk2NDBjOWZlODZhMC5qcyIsIjI0OSIsInN0YXRpYy9jaHVua3MvMGI0MmNlNzMtNDY4MTg0YTQ4ODJkNmNlOC5qcyIsIjIxNyIsInN0YXRpYy9jaHVua3MvMjE3LTE3MWMzODI4NjM3NDM2OGEuanMiLCIzNTUiLCJzdGF0aWMvY2h1bmtzLzM1NS05MTk2NGY1NDdiM2Y2ZDI4LmpzIiwiMjE4Iiwic3RhdGljL2NodW5rcy8yMTgtNjBmNjg5NmExZTkxYTI2Ni5qcyIsIjU5NiIsInN0YXRpYy9jaHVua3MvNTk2LWE4ZWU2OWE2ZTk5MDgwNWMuanMiLCI5MzEiLCJzdGF0aWMvY2h1bmtzL2FwcC9wYWdlLTAyZTI3YTdmNzk0YmVkM2UuanMiXSwiZGVmYXVsdCIsMV0KNDpJWzg2MjM5LFsiMjE3Iiwic3RhdGljL2NodW5rcy8yMTctMTcxYzM4Mjg2Mzc0MzY4YS5qcyIsIjM1NSIsInN0YXRpYy9jaHVua3MvMzU1LTkxOTY0ZjU0N2IzZjZkMjguanMiLCI3NjQiLCJzdGF0aWMvY2h1bmtzLzc2NC05MDNlYjVlN2YyYjJmMjk0LmpzIiwiNTk2Iiwic3RhdGljL2NodW5rcy81OTYtYThlZTY5YTZlOTkwODA1Yy5qcyIsIjE4NSIsInN0YXRpYy9jaHVua3MvYXBwL2xheW91dC1jODhiNjdiMjc1NzYzOTczLmpzIl0sImRlZmF1bHQiLDFdCjU6SVs2MzMwOCxbXSwiIl0KNjpJWzY1MDI2LFtdLCIiXQo3Ont9CjA6WyJ4TEIwbmlGbEl2dk50RUdhT3VVb1EiLFtbWyIiLHsiY2hpbGRyZW4iOlsiX19QQUdFX18iLHt9XX0sIiR1bmRlZmluZWQiLCIkdW5kZWZpbmVkIix0cnVlXSxbIiIseyJjaGlsZHJlbiI6WyJfX1BBR0VfXyIse30sW1siJEwxIixbIiQiLCIkTDIiLG51bGwseyJwcm9wcyI6eyJwYXJhbXMiOnt9LCJzZWFyY2hQYXJhbXMiOnt9fSwiQ29tcG9uZW50IjoiJDMifV0sW1siJCIsImxpbmsiLCIwIix7InJlbCI6InN0eWxlc2hlZXQiLCJocmVmIjoiL19uZXh0L3N0YXRpYy9jc3MvMDYwMzdhNGRjMzRiNjQxNS5jc3MiLCJwcmVjZWRlbmNlIjoibmV4dCIsImNyb3NzT3JpZ2luIjoiJHVuZGVmaW5lZCJ9XV1dLG51bGxdLG51bGxdfSxbW1tbIiQiLCJsaW5rIiwiMCIseyJyZWwiOiJzdHlsZXNoZWV0IiwiaHJlZiI6Ii9fbmV4dC9zdGF0aWMvY3NzLzcyNWFjYWM5NzJjYjJkODYuY3NzIiwicHJlY2VkZW5jZSI6Im5leHQiLCJjcm9zc09yaWdpbiI6IiR1bmRlZmluZWQifV1dLFsiJCIsIiRMNCIsbnVsbCx7ImNoaWxkcmVuIjpbIiQiLCIkTDUiLG51bGwseyJwYXJhbGxlbFJvdXRlcktleSI6ImNoaWxkcmVuIiwic2VnbWVudFBhdGgiOlsiY2hpbGRyZW4iXSwiZXJyb3IiOiIkdW5kZWZpbmVkIiwiZXJyb3JTdHlsZXMiOiIkdW5kZWZpbmVkIiwiZXJyb3JTY3JpcHRzIjoiJHVuZGVmaW5lZCIsInRlbXBsYXRlIjpbIiQiLCIkTDYiLG51bGwse31dLCJ0ZW1wbGF0ZVN0eWxlcyI6IiR1bmRlZmluZWQiLCJ0ZW1wbGF0ZVNjcmlwdHMiOiIkdW5kZWZpbmVkIiwibm90Rm91bmQiOltbIiQiLCJ0aXRsZSIsbnVsbCx7ImNoaWxkcmVuIjoiNDA0OiBUaGlzIHBhZ2UgY291bGQgbm90IGJlIGZvdW5kLiJ9XSxbIiQiLCJkaXYiLG51bGwseyJzdHlsZSI6eyJmb250RmFtaWx5Ijoic3lzdGVtLXVpLFwiU2Vnb2UgVUlcIixSb2JvdG8sSGVsdmV0aWNhLEFyaWFsLHNhbnMtc2VyaWYsXCJBcHBsZSBDb2xvciBFbW9qaVwiLFwiU2Vnb2UgVUkgRW1vamlcIiIsImhlaWdodCI6IjEwMHZoIiwidGV4dEFsaWduIjoiY2VudGVyIiwiZGlzcGxheSI6ImZsZXgiLCJmbGV4RGlyZWN0aW9uIjoiY29sdW1uIiwiYWxpZ25JdGVtcyI6ImNlbnRlciIsImp1c3RpZnlDb250ZW50IjoiY2VudGVyIn0sImNoaWxkcmVuIjpbIiQiLCJkaXYiLG51bGwseyJjaGlsZHJlbiI6W1siJCIsInN0eWxlIixudWxsLHsiZGFuZ2Vyb3VzbHlTZXRJbm5lckhUTUwiOnsiX19odG1sIjoiYm9keXtjb2xvcjojMDAwO2JhY2tncm91bmQ6I2ZmZjttYXJnaW46MH0ubmV4dC1lcnJvci1oMXtib3JkZXItcmlnaHQ6MXB4IHNvbGlkIHJnYmEoMCwwLDAsLjMpfUBtZWRpYSAocHJlZmVycy1jb2xvci1zY2hlbWU6ZGFyayl7Ym9keXtjb2xvcjojZmZmO2JhY2tncm91bmQ6IzAwMH0ubmV4dC1lcnJvci1oMXtib3JkZXItcmlnaHQ6MXB4IHNvbGlkIHJnYmEoMjU1LDI1NSwyNTUsLjMpfX0ifX1dLFsiJCIsImgxIixudWxsLHsiY2xhc3NOYW1lIjoibmV4dC1lcnJvci1oMSIsInN0eWxlIjp7ImRpc3BsYXkiOiJpbmxpbmUtYmxvY2siLCJtYXJnaW4iOiIwIDIwcHggMCAwIiwicGFkZGluZyI6IjAgMjNweCAwIDAiLCJmb250U2l6ZSI6MjQsImZvbnRXZWlnaHQiOjUwMCwidmVydGljYWxBbGlnbiI6InRvcCIsImxpbmVIZWlnaHQiOiI0OXB4In0sImNoaWxkcmVuIjoiNDA0In1dLFsiJCIsImRpdiIsbnVsbCx7InN0eWxlIjp7ImRpc3BsYXkiOiJpbmxpbmUtYmxvY2sifSwiY2hpbGRyZW4iOlsiJCIsImgyIixudWxsLHsic3R5bGUiOnsiZm9udFNpemUiOjE0LCJmb250V2VpZ2h0Ijo0MDAsImxpbmVIZWlnaHQiOiI0OXB4IiwibWFyZ2luIjowfSwiY2hpbGRyZW4iOiJUaGlzIHBhZ2UgY291bGQgbm90IGJlIGZvdW5kLiJ9XX1dXX1dfV1dLCJub3RGb3VuZFN0eWxlcyI6W119XSwicGFyYW1zIjoiJDcifV1dLG51bGxdLFtbIiQiLCJtYWluIixudWxsLHsiY2xhc3NOYW1lIjoiZmxleCBtaW4taC1zY3JlZW4gZmxleC1jb2wgaXRlbXMtY2VudGVyIGp1c3RpZnktYmV0d2VlbiBwLTI0IiwiY2hpbGRyZW4iOlsiJCIsImgxIixudWxsLHsiY2xhc3NOYW1lIjoidGV4dC02eGwgZm9udC1ib2xkIiwiY2hpbGRyZW4iOiJMb2FkaW5nLi4uLi4ifV19XSxbXSxbXV1dLFsiJEw4IixudWxsXV1dXQo4OltbIiQiLCJtZXRhIiwiMCIseyJuYW1lIjoidmlld3BvcnQiLCJjb250ZW50Ijoid2lkdGg9ZGV2aWNlLXdpZHRoLCBpbml0aWFsLXNjYWxlPTEifV0sWyIkIiwibWV0YSIsIjEiLHsiY2hhclNldCI6InV0Zi04In1dLFsiJCIsImxpbmsiLCIyIix7InJlbCI6Im1hbmlmZXN0IiwiaHJlZiI6Ii9tYW5pZmVzdC5qc29uIiwiY3Jvc3NPcmlnaW4iOiJ1c2UtY3JlZGVudGlhbHMifV0sWyIkIiwibGluayIsIjMiLHsicmVsIjoiaWNvbiIsImhyZWYiOiIvZmF2aWNvbi5pY28iLCJ0eXBlIjoiaW1hZ2UveC1pY29uIiwic2l6ZXMiOiI0OHg0OCJ9XSxbIiQiLCJsaW5rIiwiNCIseyJyZWwiOiJpY29uIiwiaHJlZiI6Ii9pY29uLnBuZz9mNDUyMWE1OWRmMGQ4ZjBiIiwidHlwZSI6ImltYWdlL3BuZyIsInNpemVzIjoiOTZ4OTYifV0sWyIkIiwibGluayIsIjUiLHsicmVsIjoiYXBwbGUtdG91Y2gtaWNvbiIsImhyZWYiOiIvYXBwbGUtaWNvbi5wbmc/ZTQ3YzQyZDk5ZjJkMjQ0ZiIsInR5cGUiOiJpbWFnZS9wbmciLCJzaXplcyI6IjE4MHgxODAifV0sWyIkIiwibWV0YSIsIjYiLHsibmFtZSI6Im5leHQtc2l6ZS1hZGp1c3QifV1dCjE6bnVsbAo=",    //
     4592, //
     "text/plain", //
     "/index.txt/", //
     
};
}
