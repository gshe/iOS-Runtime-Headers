/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelPooledResource : MTLIOAccelResource {
    /* Warning: unhandled struct encoding: '{_MTLIOAccelResourcePrivate="pool"@"MTLIOAccelResourcePool""entry"{?="tqe_next"@"MTLIOAccelPooledResource""tqe_prev"^@}"time_added"Q}' */ struct _MTLIOAccelResourcePrivate { 
        MTLIOAccelResourcePool *pool; 
        struct { 
            MTLIOAccelPooledResource *tqe_next; 
            id *tqe_prev; 
            unsigned long long time_added; 
        } entry; 
    } _priv;
}

@end