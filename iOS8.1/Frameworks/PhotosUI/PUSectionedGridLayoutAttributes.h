//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutAttributes.h"

@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes
{
    BOOL _floating;
    BOOL _extendsTopContent;
    BOOL _exists;
    float _interactiveTransitionProgress;
}

@property(nonatomic) BOOL exists; // @synthesize exists=_exists;
@property(nonatomic) BOOL extendsTopContent; // @synthesize extendsTopContent=_extendsTopContent;
@property(nonatomic) float interactiveTransitionProgress; // @synthesize interactiveTransitionProgress=_interactiveTransitionProgress;
@property(nonatomic) BOOL floating; // @synthesize floating=_floating;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
