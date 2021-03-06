/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFZlibDataDecompressor : AFDataDecompressor {
    unsigned char _inflateBuffer;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    } _inflateStream;
}

- (void)dealloc;
- (id)decompressedDataForBytes:(const void*)arg1 length:(unsigned int)arg2 error:(id*)arg3;
- (id)decompressedDataForData:(id)arg1 error:(id*)arg2;
- (id)init;

@end
