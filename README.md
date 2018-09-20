# libleakmydata

A simple `LD_PRELOAD` library to disable SSL certificate verification. Inspired
by [libeatmydata](https://www.flamingspork.com/projects/libeatmydata/).

DO NOT USE this if you care about the authenticity or privacy of any data
transmitted over TLS/SSL.

### Example usage:

```
$ make
$ LD_PRELOAD=./libleakmydata.so curl https://self-signed.badssl.com/
...
```

### Currently supported libraries:

- OpenSSL
- GnuTLS
- WebKit2GTK (Tested with Midori and Epiphany browsers)

Eventually, I'd like to come up with some method of hooking into Firefox/Chrome,
which each use staticly linked SSL libraries.
