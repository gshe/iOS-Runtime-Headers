/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKPlayerStateChangeInfo : NSObject {
    NSDictionary *_jsonValue;
    int _state;
}

@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic, copy) NSDictionary *jsonValue;
@property (nonatomic, readonly) int state;

- (void).cxx_destruct;
- (id)_stateNameForState:(int)arg1;
- (double)duration;
- (double)elapsedTime;
- (id)initWithState:(int)arg1;
- (id)jsonValue;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setJsonValue:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (int)state;

@end