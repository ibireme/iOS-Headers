//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

#import "SKUIItemOfferButtonDelegate.h"
#import "SKUIOfferViewDelegate.h"
#import "SKUIPerspectiveView.h"
#import "SKUIViewElementView.h"

@class NSMapTable, NSMutableArray, NSString, SKUIGradientView, SKUILockupViewElement, SKUIProductLockupLayout;

@interface SKUIProductLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIPerspectiveView, SKUIViewElementView>
{
    NSMapTable *_elementViews;
    SKUIProductLockupLayout *_layout;
    SKUILockupViewElement *_lockup;
    SKUIGradientView *_offerConfirmationGradientView;
    int _offerMetadataPosition;
    NSMutableArray *_segmentedControlControllers;
}

+ (void)_requestLayoutForViewElements:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (float)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (id)_viewElementForView:(id)arg1;
- (void)_updateLayoutToAnimateOfferTransitionForView:(id)arg1;
- (struct CGRect)_stackElements:(id)arg1 alignment:(int)arg2 inRect:(struct CGRect)arg3;
- (struct CGRect)_stackBottomRightElements:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_prepareOfferConfirmationGradientForView:(id)arg1;
- (void)_layoutConfirmationGradientRelativeToSection:(int)arg1 alpha:(float)arg2;
- (struct CGRect)_frameForSection:(int)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_imageTapAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)offerViewWillAnimateTransition:(id)arg1;
- (void)offerViewDidAnimateTransition:(id)arg1;
- (BOOL)offerViewAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
