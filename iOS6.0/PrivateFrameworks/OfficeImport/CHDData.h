/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CHDDataValuesCollection, CHDFormula, EDResources;

@interface CHDData : NSObject
{
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    unsigned int mContentFormatId;
    unsigned int mDataValueIndexCount;
    EDResources *mResources;
}

+ (id)dataWithDataPointCount:(unsigned int)arg1 resources:(id)arg2;
+ (id)dataWithResources:(id)arg1;
- (id)firstValueContentFormatWithWorkbook:(id)arg1;
- (_Bool)isEmpty;
- (void)setContentFormat:(id)arg1;
- (id)contentFormat;
- (unsigned int)countOfCellsBeingReferenced;
- (void)setFormula:(id)arg1 chart:(id)arg2;
- (id)formula;
- (unsigned int)averageDataPointDecimalCount;
- (void)setDataValueIndexCount:(unsigned int)arg1;
- (unsigned int)dataValueIndexCount;
- (id)dataValues;
- (void)dealloc;
- (id)initWithDataPointCount:(unsigned int)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (unsigned int)contentFormatId;

@end

