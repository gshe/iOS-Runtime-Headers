/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioPlaybackContext : MPPlaybackContext {
    MPAVItem *_prefixItem;
    NSMapTable *_preparedAdSlotByRadioTrack;
    RadioStation *_station;
    NSArray *_tracks;
}

@property (nonatomic, readonly, copy) NSArray *allPreparedAdSlotRadioTracks;
@property (nonatomic, retain) MPAVItem *prefixItem;
@property (nonatomic, readonly) RadioStation *station;
@property (nonatomic, copy) NSArray *tracks;

+ (Class)queueFeederClass;

- (void).cxx_destruct;
- (void)addPreparedAdSlot:(id)arg1 forRadioTrack:(id)arg2;
- (id)allPreparedAdSlotRadioTracks;
- (id)initWithStation:(id)arg1;
- (id)prefixItem;
- (id)preparedAdSlotForRadioTrack:(id)arg1;
- (void)setPrefixItem:(id)arg1;
- (void)setTracks:(id)arg1;
- (id)station;
- (id)tracks;

@end