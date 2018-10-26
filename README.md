## C httpd lib implemented in golang

### build
 - with go1.1.5 or above instaled.
 - in shell, run `make so t=httpd`

### usage
 - copy pkg/&lt;os_arch&gt;_shared/httpd.a to httpd-cb-impl/go_httpd.so
 - with httpd-cb-impl/go_httpd.h/.so of which you can make use to implement
   app with httpd supported.
 - there's sample code in httpd-cb-impl/sample.c 
