//#define _GNU_SOURCE
//#include <dlfcn.h>
#include <openssl/x509_vfy.h>
#include <gnutls/gnutls.h>
#include <gnutls/x509.h>

/* // fancy hooking doesn't seem to be needed,for now...
#define NEXT_HOOK(ret_type, name, args) typedef ret_type (*name##_type) args;\
name##_type next_##name; \
ret_type name args { \
if (next_##name == NULL) { \
	next_##name = (name##_type) dlsym(RTLD_NEXT, #name); \
}
*/


/* OPENSSL HOOKS */

void SSL_CTX_set_verify(void *ctx, int mode, void *cb)
{
	return;
}

long SSL_get_verify_result(const void *ssl)
{
	return X509_V_OK;
}


/* GNUTLS HOOKS */

int
gnutls_certificate_verify_peers(gnutls_session_t session,
				gnutls_typed_vdata_st * data,
				unsigned int elements,
				unsigned int *status)
{
	*status = 0;
	return GNUTLS_E_SUCCESS;
}
