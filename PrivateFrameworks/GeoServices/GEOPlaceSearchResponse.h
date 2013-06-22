/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOMapRegion, NSData, NSMutableArray;

@interface GEOPlaceSearchResponse : PBCodable
{
    double _turnaroundTime;
    int _localSearchProviderID;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_placeResults;
    NSMutableArray *_searchs;
    int _status;
    int _statusCodeInfo;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    BOOL _abTestResponse;
    struct {
        unsigned int turnaroundTime:1;
        unsigned int localSearchProviderID:1;
        unsigned int statusCodeInfo:1;
        unsigned int abTestResponse:1;
    } _has;
}

@property(nonatomic) double turnaroundTime; // @synthesize turnaroundTime=_turnaroundTime;
@property(nonatomic) int statusCodeInfo; // @synthesize statusCodeInfo=_statusCodeInfo;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property(retain, nonatomic) NSMutableArray *suggestionEntryLists; // @synthesize suggestionEntryLists=_suggestionEntryLists;
@property(nonatomic) BOOL abTestResponse; // @synthesize abTestResponse=_abTestResponse;
@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(retain, nonatomic) NSMutableArray *searchs; // @synthesize searchs=_searchs;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;
@property(nonatomic) int status; // @synthesize status=_status;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTurnaroundTime;
@property(nonatomic) BOOL hasStatusCodeInfo;
@property(readonly, nonatomic) BOOL hasSuggestionMetadata;
- (id)suggestionEntryListsAtIndex:(unsigned int)arg1;
- (unsigned int)suggestionEntryListsCount;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)clearSuggestionEntryLists;
@property(nonatomic) BOOL hasAbTestResponse;
@property(nonatomic) BOOL hasLocalSearchProviderID;
- (id)searchAtIndex:(unsigned int)arg1;
- (unsigned int)searchsCount;
- (void)addSearch:(id)arg1;
- (void)clearSearchs;
@property(readonly, nonatomic) BOOL hasMapRegion;
- (id)placeResultAtIndex:(unsigned int)arg1;
- (unsigned int)placeResultsCount;
- (void)addPlaceResult:(id)arg1;
- (void)clearPlaceResults;
- (void)dealloc;

@end
