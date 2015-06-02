/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleFlowRootViewController : GKViewController {
    GKBubbleFlowAnimator *_animator;
    BOOL _coveringContentUnderneath;
    BOOL _currentlyAnimatingADismiss;
    BOOL _showingInterstitial;
}

@property (nonatomic, retain) GKBubbleFlowAnimator *animator;
@property (getter=isCoveringContentUnderneath, nonatomic, readonly) BOOL coveringContentUnderneath;
@property (getter=isCurrentlyAnimatingADismiss, nonatomic) BOOL currentlyAnimatingADismiss;
@property (getter=isShowingInterstitial, nonatomic) BOOL showingInterstitial;

+ (BOOL)_useTwoPartBubbleFlowModalPresentation;
+ (id)sharedBubbleFlowRootViewController;

- (void)_updateViewAlpha:(float)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)animator;
- (void)clearInterstitialViewAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isCoveringContentUnderneath;
- (BOOL)isCurrentlyAnimatingADismiss;
- (BOOL)isShowingInterstitial;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)pseudoModalViewController;
- (void)setAnimator:(id)arg1;
- (void)setCurrentlyAnimatingADismiss:(BOOL)arg1;
- (void)setShowingInterstitial:(BOOL)arg1;
- (void)showInterstitialViewAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)viewDidLoad;

@end