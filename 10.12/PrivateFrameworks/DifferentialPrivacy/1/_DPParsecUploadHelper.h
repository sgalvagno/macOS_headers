//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PARSession, PARSessionConfiguration;

@interface _DPParsecUploadHelper : NSObject
{
    PARSessionConfiguration *_configuration;
    PARSession *_session;
}

@property(readonly, nonatomic) PARSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (BOOL)send:(id)arg1;
- (id)init;

@end

