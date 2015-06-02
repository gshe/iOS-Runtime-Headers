/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackContext : NSObject {
    BOOL _keepPlayingCurrentItemIfPossible;
    unsigned int _repeatType;
    BOOL _shouldStartPlayback;
    unsigned int _shuffleType;
}

@property (nonatomic) BOOL keepPlayingCurrentItemIfPossible;
@property (nonatomic) unsigned int repeatType;
@property (nonatomic) BOOL shouldStartPlayback;
@property (nonatomic) unsigned int shuffleType;

+ (Class)queueFeederClass;

- (id)init;
- (BOOL)keepPlayingCurrentItemIfPossible;
- (unsigned int)repeatType;
- (void)setKeepPlayingCurrentItemIfPossible:(BOOL)arg1;
- (void)setRepeatType:(unsigned int)arg1;
- (void)setShouldStartPlayback:(BOOL)arg1;
- (void)setShuffleType:(unsigned int)arg1;
- (BOOL)shouldStartPlayback;
- (unsigned int)shuffleType;

@end