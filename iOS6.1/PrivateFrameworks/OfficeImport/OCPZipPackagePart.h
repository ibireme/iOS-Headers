/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OCPPackagePart.h>

@class SFUZipEntry;

@interface OCPZipPackagePart : OCPPackagePart
{
    SFUZipEntry *mEntry;
}

- (struct _xmlTextReader *)xmlReader;
- (struct _xmlDoc *)xmlDocument;
- (void)copyToFile:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)initWithArchive:(id)arg1 location:(id)arg2 package:(id)arg3;

@end
