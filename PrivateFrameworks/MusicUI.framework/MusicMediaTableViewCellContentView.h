/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicMediaTableViewCellContentView : MusicTableViewCellContentView <SKUIItemOfferButtonDelegate> {
    UIImage *_artworkImage;
    MPUSlantedTextPlaceholderArtworkView *_artworkView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentBoundsEdgeInsets;
    MPUEmphasizedText *_detailEmphasizedText;
    UILabel *_detailLabel;
    BOOL _displayAsDisabled;
    BOOL _editing;
    BOOL _explicitTrack;
    BOOL _highlighted;
    MPUItemOfferButton *_itemOfferButton;
    BOOL _needsContentReload;
    MusicNowPlayingIndicatorView *_nowPlayingIndicatorView;
    id /* block */ _offerButtonActionHandler;
    MusicMediaOfferButtonState *_offerButtonState;
    NSString *_placeholderSubtitleText;
    NSString *_placeholderTitleText;
    int _playbackState;
    UIImage *_rightAccessoryHighlightedImage;
    UIImage *_rightAccessoryImage;
    UIImageView *_rightAccessoryImageView;
    BOOL _selected;
    BOOL _showsArtworkImage;
    MPUEmphasizedText *_subtitleEmphasizedText;
    UILabel *_subtitleLabel;
    MPUEmphasizedText *_titleEmphasizedText;
    UILabel *_titleLabel;
}

@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic, retain) MPUSlantedTextPlaceholderArtworkView *artworkView;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentBoundsEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) MPUEmphasizedText *detailEmphasizedText;
@property (nonatomic, retain) UILabel *detailLabel;
@property (getter=isDisplayingAsDisabled, nonatomic) BOOL displayAsDisabled;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (getter=isExplicitTrack, nonatomic) BOOL explicitTrack;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, retain) MPUItemOfferButton *itemOfferButton;
@property (nonatomic, retain) MusicNowPlayingIndicatorView *nowPlayingIndicatorView;
@property (nonatomic, copy) id /* block */ offerButtonActionHandler;
@property (nonatomic, retain) MusicMediaOfferButtonState *offerButtonState;
@property (nonatomic, copy) NSString *placeholderSubtitleText;
@property (nonatomic, copy) NSString *placeholderTitleText;
@property (nonatomic) int playbackState;
@property (nonatomic, retain) UIImage *rightAccessoryHighlightedImage;
@property (nonatomic, retain) UIImage *rightAccessoryImage;
@property (nonatomic, retain) UIImageView *rightAccessoryImageView;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic) BOOL showsArtworkImage;
@property (nonatomic, copy) MPUEmphasizedText *subtitleEmphasizedText;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) MPUEmphasizedText *titleEmphasizedText;
@property (nonatomic, retain) UILabel *titleLabel;

+ (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
+ (struct CGSize { float x1; float x2; })artworkSize;
+ (void)contentSizeCategoryDidChange;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_itemOfferButtonCancelConfirmationAction:(id)arg1;
- (void)_itemOfferButtonShowConfirmationAction:(id)arg1;
- (void)_reloadRightAccessoryImageView;
- (void)_updateItemOfferButtonAnimated:(BOOL)arg1;
- (id)artworkImage;
- (id)artworkView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentBoundsEdgeInsets;
- (void)contentSizeCategoryDidChange;
- (void)dealloc;
- (id)detailEmphasizedText;
- (id)detailLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDisplayingAsDisabled;
- (BOOL)isEditing;
- (BOOL)isExplicitTrack;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (id)itemOfferButton;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (id)nowPlayingIndicatorView;
- (id /* block */)offerButtonActionHandler;
- (id)offerButtonState;
- (id)placeholderSubtitleText;
- (id)placeholderTitleText;
- (int)playbackState;
- (void)reloadContent;
- (id)rightAccessoryHighlightedImage;
- (id)rightAccessoryImage;
- (id)rightAccessoryImageView;
- (void)setArtworkImage:(id)arg1;
- (void)setArtworkImage:(id)arg1 animated:(BOOL)arg2;
- (void)setArtworkView:(id)arg1;
- (void)setContentBoundsEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDetailEmphasizedText:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDisplayAsDisabled:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setExplicitTrack:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setItemOfferButton:(id)arg1;
- (void)setNeedsContentReload;
- (void)setNowPlayingIndicatorView:(id)arg1;
- (void)setOfferButtonActionHandler:(id /* block */)arg1;
- (void)setOfferButtonState:(id)arg1;
- (void)setOfferButtonState:(id)arg1 animated:(BOOL)arg2;
- (void)setPlaceholderSubtitleText:(id)arg1;
- (void)setPlaceholderTitleText:(id)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setRightAccessoryHighlightedImage:(id)arg1;
- (void)setRightAccessoryImage:(id)arg1;
- (void)setRightAccessoryImageView:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsArtworkImage:(BOOL)arg1;
- (void)setSubtitleEmphasizedText:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleEmphasizedText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (BOOL)showsArtworkImage;
- (id)subtitleEmphasizedText;
- (id)subtitleLabel;
- (id)titleEmphasizedText;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)updateAttributedTextForLabel:(id)arg1;
- (BOOL)updateLabelFonts;

@end