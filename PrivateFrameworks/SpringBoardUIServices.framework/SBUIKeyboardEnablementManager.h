/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIKeyboardEnablementManager : NSObject {
    BOOL _disabled;
    NSHashTable *_disabledContexts;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)description;
- (void)disableAutomaticAppearanceForContext:(id)arg1;
- (void)enableAutomaticAppearanceForContext:(id)arg1;
- (id)init;

@end
