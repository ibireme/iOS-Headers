//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKBCacheableView.h"

@class CALayer, NSString, UIKBRenderConfig, UIKBTree, UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIKBKeyView : UIView <UIKBCacheableView>
{
    UIKBTree *m_keyplane;
    UIKBTree *m_key;
    struct CGRect m_drawFrame;
    struct __CFBoolean *m_allowsCaching;
    UIKBRenderConfig *m_renderConfig;
    CALayer *_keyBorders;
    CALayer *_keyBackgrounds;
    CALayer *_keyForegrounds;
    CALayer *_keyCaps;
    CALayer *_keyCapHint;
    int _renderedKeyState;
    NSString *_cachedTraitsHashString;
    BOOL _renderAsMask;
    UIKeyboardMenuView *_popupMenu;
}

@property(nonatomic) BOOL renderAsMask; // @synthesize renderAsMask=_renderAsMask;
@property(nonatomic) UIKeyboardMenuView *popupMenu; // @synthesize popupMenu=_popupMenu;
@property(retain, nonatomic) NSString *cachedTraitsHashString; // @synthesize cachedTraitsHashString=_cachedTraitsHashString;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=m_renderConfig;
@property(nonatomic) struct CGRect drawFrame; // @synthesize drawFrame=m_drawFrame;
@property(readonly, nonatomic) UIKBTree *key; // @synthesize key=m_key;
@property(readonly, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=m_keyplane;
- (id)_generateBackdropMaskImage;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
@property(readonly, nonatomic) BOOL keepNonPersistent;
@property(readonly, nonatomic) float cachedWidth;
@property(readonly, nonatomic) BOOL cacheDeferable;
- (void)displayLayer:(id)arg1;
- (void)_popuplateLayer:(id)arg1 withContents:(id)arg2;
- (void)layoutSubviews;
- (BOOL)requiresSublayers;
- (BOOL)_shouldUpdateLayers;
@property(readonly) int cachedRenderFlags;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) struct UIEdgeInsets displayInsets;
- (void)dimKeyCaps:(float)arg1 duration:(float)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_applyAppearanceInvocations;
- (BOOL)_viewShouldBeOpaque;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
