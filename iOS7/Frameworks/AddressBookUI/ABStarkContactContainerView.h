/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class ABContactView, UIImageView;

@interface ABStarkContactContainerView : UIView
{
    UIImageView *_photoView;
    ABContactView *_contactView;
}

@property(readonly, nonatomic) ABContactView *contactView; // @synthesize contactView=_contactView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;

@end

