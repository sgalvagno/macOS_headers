//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADMovie.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface OADLinkedMediaFile : OADMovie
{
    NSURL *mUrl;
    BOOL mIsExternal;
}

@property BOOL isExternal; // @synthesize isExternal=mIsExternal;
@property(retain) NSURL *url; // @synthesize url=mUrl;
- (void)dealloc;

@end

