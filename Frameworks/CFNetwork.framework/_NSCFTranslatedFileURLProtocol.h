/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol {
    const struct CFURLProtocolInstanceCallbacks { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); void *x14; } *_callbacks;
    struct CFURLProtocolClient { 
        int version; 
        void *client; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*wasRedirected)(); 
        int (*cacheResponseIsValid)(); 
        int (*didReceiveResponse)(); 
        int (*didLoadData)(); 
        int (*didFinishLoading)(); 
        int (*didFail)(); 
        int (*didReceiveAuthenticationChallenge)(); 
    } _cfurlClient;
    const void *_info;
}

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (const struct CFURLProtocolImplementation { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); }*)pimpl;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (id).cxx_construct;
- (struct CFURLProtocolClient { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); }*)cfurlClient;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)startLoading;
- (void)stopLoading;

@end