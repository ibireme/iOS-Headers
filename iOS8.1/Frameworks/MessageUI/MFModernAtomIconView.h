//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface MFModernAtomIconView : UIView
{
    NSArray *_iconImages;
    float _iconPadding;
    struct CGPoint _drawingOffset;
}

@property(nonatomic) struct CGPoint drawingOffset; // @synthesize drawingOffset=_drawingOffset;
@property(nonatomic) float iconPadding; // @synthesize iconPadding=_iconPadding;
@property(retain, nonatomic) NSArray *iconImages; // @synthesize iconImages=_iconImages;
- (float)preferredWidth;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end
