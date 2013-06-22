/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSMappingModel.h>

@interface NSMappingModel (_NSInternalMethods)
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;
+ (id)_modelPathsFromBundles:(id)arg1;
+ (BOOL)_isInferredMappingModel:(id)arg1;
- (id)_initWithEntityMappings:(id)arg1;
- (void)_addEntityMapping:(id)arg1;
- (BOOL)isEditable;
- (void)_createCachesAndOptimizeState;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (id)_sourceEntityVersionHashesByName;
- (id)_destinationEntityVersionHashesByName;
@end
