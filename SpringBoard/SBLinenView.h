/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSMutableArray;

@interface SBLinenView : UIView
{
    int _type;
    NSMutableArray *_strips;
}

+ (float)_vOffsetOfTopForType:(int)arg1;
+ (struct CGRect)_scaledRectForIndex:(unsigned int)arg1 ofImage:(id)arg2;
+ (id)_imageKeyForIndex:(unsigned int)arg1;
+ (id)_cachedImageForIndex:(unsigned int)arg1;
+ (unsigned int)_maximumNumberOfStrips;
+ (void)_generateStripsIfNecessary;
+ (id)squareImageForBounds:(struct CGRect)arg1;
+ (CDStruct_b2fbf00d)stripMetricsForIndex:(unsigned int)arg1;
+ (float)naturalWidth;
+ (void)load;
@property(nonatomic) int type; // @synthesize type=_type;
- (float)_vOffsetOfTop;
- (void)layoutSubviews;
- (void)_layoutForBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
