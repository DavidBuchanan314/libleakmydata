# libleakmydata

A simple `LD_PRELOAD` library to disable SSL certificate verification. Inspired
by `libeatmydata`.

### Example usage:

```
$ make
$ LD_PRELOAD=./libleakmydata.so curl https://self-signed.badssl.com/
...
```

### Currently supported libraries:

- OpenSSL
- GNUTLS
