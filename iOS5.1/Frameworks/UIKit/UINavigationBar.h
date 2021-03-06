/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, UIColor, UINavigationItem;

@interface UINavigationBar : UIView <NSCoding>
{
    NSMutableArray *_itemStack;
    float _rightMargin;
    unsigned int _state;
    id _delegate;
    UIView *_backgroundView;
    UIView *_titleView;
    NSArray *_leftViews;
    NSArray *_rightViews;
    UIView *_prompt;
    UIView *_accessoryView;
    UIColor *_tintColor;
    id _appearanceStorage;
    struct {
        unsigned int animate:1;
        unsigned int animationDisabledCount:10;
        unsigned int transitioningBarStyle:1;
        unsigned int newBarStyle:3;
        unsigned int barStyle:3;
        unsigned int isTranslucent:1;
        unsigned int disableLayout:1;
        unsigned int backPressed:1;
        unsigned int animatePromptChange:1;
        unsigned int pendingHideBackButton:1;
        unsigned int titleAutosizesToFit:1;
        unsigned int usingNewAPI:1;
        unsigned int minibar:1;
        unsigned int forceFullHeightInLandscape:1;
        unsigned int isLocked:1;
        unsigned int shouldUpdatePromptAfterTransition:1;
        unsigned int crossfadeItems:1;
        unsigned int autoAdjustTitle:1;
        unsigned int isContainedInPopover:1;
        unsigned int needsDrawRect:1;
        unsigned int animationCleanupCancelled:1;
        unsigned int forceLayout:1;
        unsigned int layoutInProgress:1;
    } _navbarFlags;
}

+ (BOOL)_useCustomBackButtonAction;
+ (void)_setUseCustomBackButtonAction:(BOOL)arg1;
+ (void)setDefaultAnimationDuration:(double)arg1;
+ (id)defaultPromptFont;
+ (struct CGSize)defaultSizeWithPrompt;
+ (struct CGSize)defaultSize;
+ (struct CGSize)defaultSizeWithPromptForOrientation:(int)arg1;
+ (struct CGSize)defaultSizeForOrientation:(int)arg1;
- (void)_setAutoAdjustTitle:(BOOL)arg1;
- (void)_navBarButtonPressed:(id)arg1;
- (int)_barStyle:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)_setNeedsLayoutForce:(BOOL)arg1;
- (id)_itemStack;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrame:(struct CGRect *)arg2 rightViewFrame:(struct CGRect *)arg3 forViews:(id *)arg4 forItemAtIndex:(unsigned int)arg5;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrame:(struct CGRect *)arg2 rightViewFrame:(struct CGRect *)arg3;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrame:(struct CGRect *)arg2 rightViewFrame:(struct CGRect *)arg3 forViews:(id *)arg4;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned int)arg4;
- (void)_adjustVisibleItemsByDelta:(float)arg1;
- (void)_fadeAllViewsIn;
- (void)_fadeViewsIn:(id)arg1;
- (void)_fadeAllViewsOut;
- (void)_fadeViewsOut:(id)arg1;
- (void)_fadeViewOut:(id)arg1;
- (void)_removeItemsFromSuperview:(id)arg1;
- (id)_allViews;
- (void)_startPopAnimationFromItems:(id)arg1 fromBarStyle:(int)arg2 toItems:(id)arg3 toBarStyle:(int)arg4;
- (void)_startPushAnimationFromItems:(id)arg1 fromBarStyle:(int)arg2;
- (void)_backgroundFadeDidFinish:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_startBarStyleAnimation:(int)arg1 withTintColor:(id)arg2;
- (void)_drawPrompt:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 barStyle:(int)arg4;
- (struct CGRect)_boundsForPrompt:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 barStyle:(int)arg4;
- (void)_removeAccessoryView;
- (void)setTopItemAlpha:(float)arg1;
- (float)topItemAlpha;
- (struct CGRect)availableTitleArea;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)_updateBackgroundImage;
- (void)showHideBackButtomAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)showBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_hideButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideButtons;
- (id)createButtonWithContents:(id)arg1 width:(float)arg2 barStyle:(int)arg3 buttonStyle:(int)arg4 isRight:(BOOL)arg5;
- (void)setButton:(int)arg1 enabled:(BOOL)arg2;
- (void)_showLeftRightButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_setLeftViews:(id)arg1 rightViews:(id)arg2;
- (void)_setLeftView:(id)arg1 rightView:(id)arg2;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)drawBackButtonBackgroundInRect:(struct CGRect)arg1 withStyle:(int)arg2 pressed:(BOOL)arg3;
- (void)drawBackgroundInRect:(struct CGRect)arg1 withStyle:(int)arg2;
- (unsigned int)animationDisabledCount;
- (BOOL)isAnimationEnabled;
- (void)enableAnimation;
- (void)disableAnimation;
- (struct CGRect)promptBounds;
- (id)promptView;
- (id)prompt;
- (void)setPrompt:(id)arg1;
- (void)updatePrompt;
- (id)currentBackButton;
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (BOOL)_hasBackButton;
- (id)currentRightView;
- (id)_currentRightViews;
- (id)currentLeftView;
- (id)_currentLeftViews;
- (void)setTitleView:(id)arg1;
- (void)_updateTitleView;
- (BOOL)titleAutoresizesToFit;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (void)setRightMargin:(float)arg1;
@property(retain, nonatomic) UIColor *tintColor;
- (id)_effectiveTintColor;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)_propagateEffectiveTintColorWithPreviousColor:(id)arg1;
- (id)buttonItemTextColor;
- (id)buttonItemShadowColor;
- (void)setForceFullHeightInLandscape:(BOOL)arg1;
- (BOOL)forceFullHeightInLandscape;
- (BOOL)isMinibar;
@property(nonatomic, getter=isTranslucent) BOOL translucent;
@property(nonatomic) int barStyle;
- (void)_setBarStyle:(int)arg1;
- (void)_updateNavigationBarItemsForStyle:(int)arg1;
- (void)_updateNavigationBarItemsForStyle:(int)arg1 previousTintColor:(id)arg2;
- (void)didAddSubview:(id)arg1;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(int)arg2;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(int)arg2 previousTintColor:(id)arg3;
@property(nonatomic) id delegate;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (void)mouseDown:(struct __GSEvent *)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)_commonHitTest:(struct CGPoint)arg1 forView:(id)arg2;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (void)_navigationAnimationDidFinish:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;
- (id)navigationItemAtPoint:(struct CGPoint)arg1;
- (void)_cancelInProgressPushOrPop;
- (id)navigationItems;
@property(copy, nonatomic) NSArray *items;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNavigationItems:(id)arg1;
- (void)_setupTopNavItem:(id)arg1 oldTopNavItem:(id)arg2;
- (void)_setItems:(id)arg1 transition:(int)arg2;
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (int)_transitionForOldItems:(id)arg1 newItems:(id)arg2;
@property(readonly, nonatomic) UINavigationItem *backItem;
@property(readonly, nonatomic) UINavigationItem *topItem;
- (void)popNavigationItem;
- (void)_prepareForPopAnimationWithNewTopItem:(id)arg1;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (void)pushNavigationItem:(id)arg1;
- (void)_prepareForPushAnimationWithItems:(id)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)setAccessoryView:(id)arg1 animate:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (unsigned int)_subviewIndexAboveBackground;
- (BOOL)_canDrawContent;
- (int)state;
- (id)_defaultTitleFont;
- (void)setLocked:(BOOL)arg1;
- (BOOL)isLocked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonNavBarInit;
- (BOOL)_subclassImplementsDrawBackgroundInRect;
- (BOOL)_subclassImplementsDrawRect;
- (void)_updateOpacity;
- (struct CGSize)defaultSizeForOrientation:(int)arg1;
- (float)defaultButtonHeight;
- (id)_appearanceStorage;
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)setTitleVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
@property(copy, nonatomic) NSDictionary *titleTextAttributes;
- (id)backgroundImageForBarMetrics:(int)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;

@end

