/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class UIButton, UIImageView, UIPageControl, UIScrollView;

@interface UIActivityListView : UIView <UIScrollViewDelegate>
{
    UIView *_dimmingView;
    int _numberOfPages;
    int _numberOfColumns;
    int _numberOfRows;
    UIImageView *_shadowView;
    BOOL _presentingModally;
    UIScrollView *_scrollView;
    struct CGSize _containerSize;
    UIView *_headerView;
    UIPageControl *_pageControl;
    UIButton *_cancelButton;
    UIImageView *_backgroundView;
    float _blankSpace;
}

@property(nonatomic) float blankSpace; // @synthesize blankSpace=_blankSpace;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) BOOL presentingModally; // @synthesize presentingModally=_presentingModally;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_changePage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dimStatusBar:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHeaderVisible:(BOOL)arg1;
- (void)reloadActivityButton:(id)arg1;
- (void)addCancelButton:(id)arg1 action:(SEL)arg2;
- (void)addActivityButton:(id)arg1 activityTitle:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)dealloc;
- (id)initPresentingModally:(BOOL)arg1 containerSize:(struct CGSize)arg2;
- (void)_setupBackground;
- (void)_setupScrollView;

@end

