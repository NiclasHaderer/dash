
#pragma once
#include "files.hpp"
namespace duckdb {
const File FILE_INDEX_TXT = {
     // Content
     "MjpJWzQ3MzQ2LFtdLCJDbGllbnRQYWdlUm9vdCJdCjM6SVsyNzk2NyxbIjU1NCIsInN0YXRpYy9jaHVua3MvNmJiODA4MDYtMWJhZWQ1YzAzZmY1NDMwNy5qcyIsIjEwOSIsInN0YXRpYy9jaHVua3MvOTNiZmE4OGYtNmVlMzk2NDBjOWZlODZhMC5qcyIsIjI0OSIsInN0YXRpYy9jaHVua3MvMGI0MmNlNzMtNDY4MTg0YTQ4ODJkNmNlOC5qcyIsIjIxNyIsInN0YXRpYy9jaHVua3MvMjE3LTE3MWMzODI4NjM3NDM2OGEuanMiLCI1NTkiLCJzdGF0aWMvY2h1bmtzLzU1OS0yZDVlN2Q0MDA3ZDc5ZmEyLmpzIiwiODgiLCJzdGF0aWMvY2h1bmtzLzg4LTJmN2ZkNjg5NTAyMWU0ZjQuanMiLCIzMDEiLCJzdGF0aWMvY2h1bmtzLzMwMS02NDRjZWRmNGJlMzcwOTAwLmpzIiwiOTMxIiwic3RhdGljL2NodW5rcy9hcHAvcGFnZS0zYmJlNWUwODY2YjA5ODUxLmpzIl0sImRlZmF1bHQiLDFdCjQ6SVs4NjIzOSxbIjIxNyIsInN0YXRpYy9jaHVua3MvMjE3LTE3MWMzODI4NjM3NDM2OGEuanMiLCI1NTkiLCJzdGF0aWMvY2h1bmtzLzU1OS0yZDVlN2Q0MDA3ZDc5ZmEyLmpzIiwiNzY0Iiwic3RhdGljL2NodW5rcy83NjQtOTAzZWI1ZTdmMmIyZjI5NC5qcyIsIjMwMSIsInN0YXRpYy9jaHVua3MvMzAxLTY0NGNlZGY0YmUzNzA5MDAuanMiLCIxODUiLCJzdGF0aWMvY2h1bmtzL2FwcC9sYXlvdXQtMzAxZmI1ZGJiMzNmNGIzZC5qcyJdLCJkZWZhdWx0IiwxXQo1OklbNjMzMDgsW10sIiJdCjY6SVs2NTAyNixbXSwiIl0KNzp7fQowOlsieHNZME5ybnB4bUcyX1lzVXhFZ01NIixbW1siIix7ImNoaWxkcmVuIjpbIl9fUEFHRV9fIix7fV19LCIkdW5kZWZpbmVkIiwiJHVuZGVmaW5lZCIsdHJ1ZV0sWyIiLHsiY2hpbGRyZW4iOlsiX19QQUdFX18iLHt9LFtbIiRMMSIsWyIkIiwiJEwyIixudWxsLHsicHJvcHMiOnsicGFyYW1zIjp7fSwic2VhcmNoUGFyYW1zIjp7fX0sIkNvbXBvbmVudCI6IiQzIn1dLFtbIiQiLCJsaW5rIiwiMCIseyJyZWwiOiJzdHlsZXNoZWV0IiwiaHJlZiI6Ii9fbmV4dC9zdGF0aWMvY3NzLzA2MDM3YTRkYzM0YjY0MTUuY3NzIiwicHJlY2VkZW5jZSI6Im5leHQiLCJjcm9zc09yaWdpbiI6IiR1bmRlZmluZWQifV1dXSxudWxsXSxudWxsXX0sW1tbWyIkIiwibGluayIsIjAiLHsicmVsIjoic3R5bGVzaGVldCIsImhyZWYiOiIvX25leHQvc3RhdGljL2Nzcy83MjVhY2FjOTcyY2IyZDg2LmNzcyIsInByZWNlZGVuY2UiOiJuZXh0IiwiY3Jvc3NPcmlnaW4iOiIkdW5kZWZpbmVkIn1dXSxbIiQiLCIkTDQiLG51bGwseyJjaGlsZHJlbiI6WyIkIiwiJEw1IixudWxsLHsicGFyYWxsZWxSb3V0ZXJLZXkiOiJjaGlsZHJlbiIsInNlZ21lbnRQYXRoIjpbImNoaWxkcmVuIl0sImVycm9yIjoiJHVuZGVmaW5lZCIsImVycm9yU3R5bGVzIjoiJHVuZGVmaW5lZCIsImVycm9yU2NyaXB0cyI6IiR1bmRlZmluZWQiLCJ0ZW1wbGF0ZSI6WyIkIiwiJEw2IixudWxsLHt9XSwidGVtcGxhdGVTdHlsZXMiOiIkdW5kZWZpbmVkIiwidGVtcGxhdGVTY3JpcHRzIjoiJHVuZGVmaW5lZCIsIm5vdEZvdW5kIjpbWyIkIiwidGl0bGUiLG51bGwseyJjaGlsZHJlbiI6IjQwNDogVGhpcyBwYWdlIGNvdWxkIG5vdCBiZSBmb3VuZC4ifV0sWyIkIiwiZGl2IixudWxsLHsic3R5bGUiOnsiZm9udEZhbWlseSI6InN5c3RlbS11aSxcIlNlZ29lIFVJXCIsUm9ib3RvLEhlbHZldGljYSxBcmlhbCxzYW5zLXNlcmlmLFwiQXBwbGUgQ29sb3IgRW1vamlcIixcIlNlZ29lIFVJIEVtb2ppXCIiLCJoZWlnaHQiOiIxMDB2aCIsInRleHRBbGlnbiI6ImNlbnRlciIsImRpc3BsYXkiOiJmbGV4IiwiZmxleERpcmVjdGlvbiI6ImNvbHVtbiIsImFsaWduSXRlbXMiOiJjZW50ZXIiLCJqdXN0aWZ5Q29udGVudCI6ImNlbnRlciJ9LCJjaGlsZHJlbiI6WyIkIiwiZGl2IixudWxsLHsiY2hpbGRyZW4iOltbIiQiLCJzdHlsZSIsbnVsbCx7ImRhbmdlcm91c2x5U2V0SW5uZXJIVE1MIjp7Il9faHRtbCI6ImJvZHl7Y29sb3I6IzAwMDtiYWNrZ3JvdW5kOiNmZmY7bWFyZ2luOjB9Lm5leHQtZXJyb3ItaDF7Ym9yZGVyLXJpZ2h0OjFweCBzb2xpZCByZ2JhKDAsMCwwLC4zKX1AbWVkaWEgKHByZWZlcnMtY29sb3Itc2NoZW1lOmRhcmspe2JvZHl7Y29sb3I6I2ZmZjtiYWNrZ3JvdW5kOiMwMDB9Lm5leHQtZXJyb3ItaDF7Ym9yZGVyLXJpZ2h0OjFweCBzb2xpZCByZ2JhKDI1NSwyNTUsMjU1LC4zKX19In19XSxbIiQiLCJoMSIsbnVsbCx7ImNsYXNzTmFtZSI6Im5leHQtZXJyb3ItaDEiLCJzdHlsZSI6eyJkaXNwbGF5IjoiaW5saW5lLWJsb2NrIiwibWFyZ2luIjoiMCAyMHB4IDAgMCIsInBhZGRpbmciOiIwIDIzcHggMCAwIiwiZm9udFNpemUiOjI0LCJmb250V2VpZ2h0Ijo1MDAsInZlcnRpY2FsQWxpZ24iOiJ0b3AiLCJsaW5lSGVpZ2h0IjoiNDlweCJ9LCJjaGlsZHJlbiI6IjQwNCJ9XSxbIiQiLCJkaXYiLG51bGwseyJzdHlsZSI6eyJkaXNwbGF5IjoiaW5saW5lLWJsb2NrIn0sImNoaWxkcmVuIjpbIiQiLCJoMiIsbnVsbCx7InN0eWxlIjp7ImZvbnRTaXplIjoxNCwiZm9udFdlaWdodCI6NDAwLCJsaW5lSGVpZ2h0IjoiNDlweCIsIm1hcmdpbiI6MH0sImNoaWxkcmVuIjoiVGhpcyBwYWdlIGNvdWxkIG5vdCBiZSBmb3VuZC4ifV19XV19XX1dXSwibm90Rm91bmRTdHlsZXMiOltdfV0sInBhcmFtcyI6IiQ3In1dXSxudWxsXSxbWyIkIiwibWFpbiIsbnVsbCx7ImNsYXNzTmFtZSI6ImZsZXggbWluLWgtc2NyZWVuIGZsZXgtY29sIGl0ZW1zLWNlbnRlciBqdXN0aWZ5LWJldHdlZW4gcC0yNCIsImNoaWxkcmVuIjpbIiQiLCJoMSIsbnVsbCx7ImNsYXNzTmFtZSI6InRleHQtNnhsIGZvbnQtYm9sZCIsImNoaWxkcmVuIjoiTG9hZGluZy4uLi4uIn1dfV0sW10sW11dXSxbIiRMOCIsbnVsbF1dXV0KODpbWyIkIiwibWV0YSIsIjAiLHsibmFtZSI6InZpZXdwb3J0IiwiY29udGVudCI6IndpZHRoPWRldmljZS13aWR0aCwgaW5pdGlhbC1zY2FsZT0xIn1dLFsiJCIsIm1ldGEiLCIxIix7ImNoYXJTZXQiOiJ1dGYtOCJ9XSxbIiQiLCJsaW5rIiwiMiIseyJyZWwiOiJtYW5pZmVzdCIsImhyZWYiOiIvbWFuaWZlc3QuanNvbiIsImNyb3NzT3JpZ2luIjoidXNlLWNyZWRlbnRpYWxzIn1dLFsiJCIsImxpbmsiLCIzIix7InJlbCI6Imljb24iLCJocmVmIjoiL2Zhdmljb24uaWNvIiwidHlwZSI6ImltYWdlL3gtaWNvbiIsInNpemVzIjoiNDh4NDgifV0sWyIkIiwibGluayIsIjQiLHsicmVsIjoiaWNvbiIsImhyZWYiOiIvaWNvbi5wbmc/ZjQ1MjFhNTlkZjBkOGYwYiIsInR5cGUiOiJpbWFnZS9wbmciLCJzaXplcyI6Ijk2eDk2In1dLFsiJCIsImxpbmsiLCI1Iix7InJlbCI6ImFwcGxlLXRvdWNoLWljb24iLCJocmVmIjoiL2FwcGxlLWljb24ucG5nP2U0N2M0MmQ5OWYyZDI0NGYiLCJ0eXBlIjoiaW1hZ2UvcG5nIiwic2l6ZXMiOiIxODB4MTgwIn1dLFsiJCIsIm1ldGEiLCI2Iix7Im5hbWUiOiJuZXh0LXNpemUtYWRqdXN0In1dXQoxOm51bGwK",    //
     "text/plain", //
     "/index.txt/", //
};
}
