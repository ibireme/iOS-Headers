//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRadioArtworkImageCacheRequest.h>

@class RadioTrack;

@interface MPRadioTrackImageCacheRequest : MPRadioArtworkImageCacheRequest
{
    RadioTrack *_radioTrack;
}

@property(readonly, nonatomic) RadioTrack *radioTrack; // @synthesize radioTrack=_radioTrack;
- (void).cxx_destruct;
- (id)initWithRadioTrack:(id)arg1;

@end
