//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPRatingCommandEvent : MPRemoteCommandEvent
{
    float _rating;
}

@property(readonly, nonatomic) float rating; // @synthesize rating=_rating;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

