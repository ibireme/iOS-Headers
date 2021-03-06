/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, TSWPParagraphStyle;

// Not exported
@interface TSWPTOCEntryData : NSObject
{
    int _numberFormat;
    unsigned long long _paragraphIndex;
    unsigned long long _pageNumber;
    NSString *_heading;
    TSWPParagraphStyle *_indexedStyle;
}

+ (id)tocEntryDataWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5;
@property(readonly, nonatomic) TSWPParagraphStyle *indexedStyle; // @synthesize indexedStyle=_indexedStyle;
@property(readonly, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(readonly, nonatomic) int numberFormat; // @synthesize numberFormat=_numberFormat;
@property(readonly, nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(readonly, nonatomic) unsigned long long paragraphIndex; // @synthesize paragraphIndex=_paragraphIndex;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5;

@end

