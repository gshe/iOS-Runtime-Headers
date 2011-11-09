/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIPopoverView, <UIPopoverControllerDelegate>, UIBarButtonItem, _UIPopoverLayoutInfo, UIViewController, UIDimmingView, NSArray;

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIAppearanceContainer> {
    id _delegate;
    UIViewController *_contentViewController;
    UIViewController *_splitParentController;
    _UIPopoverView *_popoverView;
    UIDimmingView *_dimmingView;
    UIBarButtonItem *_targetBarButtonItem;
    unsigned int _requestedArrowDirections;
    unsigned int _currentArrowDirection;
    int _popoverBackgroundStyle;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    Class _popoverBackgroundViewClass;
    struct CGSize { 
        float width; 
        float height; 
    } _popoverContentSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _targetRectInDimmingView;
    unsigned int draggingChildScrollViewCount;
    unsigned int deceleratingChildScrollViewCount;
    id _target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned int _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    struct { 
        unsigned int isPresentingOrDismissing : 1; 
        unsigned int isPresentingModalViewController : 1; 
        unsigned int isPresentingActionSheet : 1; 
        unsigned int dimsWhenModal : 1; 
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling : 1; 
        unsigned int isInTextEffectsWindow : 1; 
    } _popoverControllerFlags;
    BOOL _allowResizePastTargetRect;
    BOOL _dismissesOnRotation;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _popoverLayoutMargins;
    BOOL _showsTargetRect;
    BOOL _showsOrientationMarker;
    BOOL _showsPresentationArea;
    BOOL _retainsSelfWhilePresented;
    BOOL _embedsInView;
    BOOL _preventFastMode;
}

@property <UIPopoverControllerDelegate> * delegate;
@property(retain) UIViewController * contentViewController;
@property struct CGSize { float x1; float x2; } popoverContentSize;
@property(getter=isPopoverVisible,readonly) BOOL popoverVisible;
@property unsigned int popoverArrowDirection;
@property(copy) NSArray * passthroughViews;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } popoverLayoutMargins;
@property(retain) Class popoverBackgroundViewClass;
@property(retain) UIDimmingView * dimmingView;
@property BOOL allowResizePastTargetRect;
@property BOOL dismissesOnRotation;
@property(getter=_embedsInView,setter=_setEmbedsInView:) BOOL embedsInView;
@property(retain) _UIPopoverLayoutInfo * preferredLayoutInfo;
@property(setter=_setPreventFastMode:) BOOL _preventFastMode;
@property BOOL showsTargetRect;
@property BOOL showsOrientationMarker;
@property BOOL showsPresentationArea;
@property(getter=_retainsSelfWhilePresented,setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented;

+ (BOOL)_showTargetRectPref;
+ (BOOL)_popoversDisabled;

- (void)setDelegate:(id)arg1;
- (void)_setPreventFastMode:(BOOL)arg1;
- (BOOL)_preventFastMode;
- (void)_setEmbedsInView:(BOOL)arg1;
- (BOOL)_embedsInView;
- (id)preferredLayoutInfo;
- (BOOL)_retainsSelfWhilePresented;
- (void)setShowsPresentationArea:(BOOL)arg1;
- (BOOL)showsPresentationArea;
- (void)setShowsOrientationMarker:(BOOL)arg1;
- (BOOL)showsOrientationMarker;
- (void)setShowsTargetRect:(BOOL)arg1;
- (BOOL)showsTargetRect;
- (void)setPopoverBackgroundViewClass:(Class)arg1;
- (Class)popoverBackgroundViewClass;
- (void)setPopoverLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)dismissesOnRotation;
- (BOOL)allowResizePastTargetRect;
- (void)setDimmingView:(id)arg1;
- (id)dimmingView;
- (void)setPopoverArrowDirection:(unsigned int)arg1;
- (unsigned int)popoverArrowDirection;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_stopWatchingForWindowRotations;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(int)arg2 animated:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })popoverContentSize;
- (void)_modalAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (struct CGSize { float x1; float x2; })_currentPopoverContentSize;
- (void)_scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_childScrollViewDidEndAnimating;
- (void)_hostingWindowDidRotate:(id)arg1;
- (void)_hostingWindowWillRotate:(id)arg1;
- (BOOL)_canRepresentAutomatically;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (void)_setSplitParentController:(id)arg1;
- (float)_dismissalAnimationDuration;
- (void)_dismissPopoverAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)_startWatchingForScrollViewNotifications;
- (void)_startWatchingForWindowRotations;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })popoverLayoutMargins;
- (void)_startWatchingForKeyboardNotifications;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1;
- (BOOL)isPresentingOrDismissing;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setPreferredLayoutInfo:(id)arg1;
- (float)_presentationAnimationDuration;
- (id)_layoutInfoForCurrentKeyboardState;
- (void)setAllowResizePastTargetRect:(BOOL)arg1;
- (void)setContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (void)_setRetainsSelfWhilePresented:(BOOL)arg1;
- (void)_setPopoverBackgroundStyle:(int)arg1;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentViewController:(id)arg1;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)setPassthroughViews:(id)arg1;
- (id)passthroughViews;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2;
- (id)_splitParentController;
- (id)_dimmingView;
- (void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (BOOL)isPopoverVisible;
- (id)popoverView;
- (int)_popoverBackgroundStyle;
- (void)_containedViewControllerModalStateChanged;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (id)contentViewController;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4;
- (void)setDismissesOnRotation:(BOOL)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (id)delegate;
- (id)init;
- (void)dealloc;
- (id)copyScriptPopOver;

@end