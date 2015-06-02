/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElementConsistencyData : NSObject {
    unsigned int _backoffLevel;
    NSDictionary *_cleanupActionsByAID;
    NSDictionary *_passStateByAID;
    NSDictionary *_secureElementCardStateByAID;
}

@property (nonatomic) unsigned int backoffLevel;
@property (nonatomic, retain) NSDictionary *cleanupActionsByAID;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSDictionary *passStateByAID;
@property (nonatomic, retain) NSDictionary *secureElementCardStateByAID;

+ (id)consistencyDataWithPaymentApplications:(id)arg1 secureElementCards:(id)arg2 cleanupActions:(id)arg3;

- (unsigned int)backoffLevel;
- (id)cleanupActionsByAID;
- (id)dictionary;
- (id)passStateByAID;
- (id)secureElementCardStateByAID;
- (void)setBackoffLevel:(unsigned int)arg1;
- (void)setCleanupActionsByAID:(id)arg1;
- (void)setPassStateByAID:(id)arg1;
- (void)setSecureElementCardStateByAID:(id)arg1;

@end