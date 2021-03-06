/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPImageCacheRequest.h>

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest
{
    NSURL *_url;
    BOOL _usePlaceholderAsFallback;
}

@property(nonatomic) BOOL usePlaceholderAsFallback; // @synthesize usePlaceholderAsFallback=_usePlaceholderAsFallback;
- (id)uniqueKey;
- (id)placeholderImage;
- (id)copyRawImageReturningError:(id *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

