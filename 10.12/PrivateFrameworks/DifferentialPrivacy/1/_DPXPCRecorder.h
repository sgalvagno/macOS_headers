//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DifferentialPrivacy/_DPDataRecorder.h>

@class _DPDaemonConnection;

@interface _DPXPCRecorder : _DPDataRecorder
{
    _DPDaemonConnection *_connection;
}

@property(readonly, nonatomic) _DPDaemonConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)recordWords:(id)arg1;
- (void)recordStrings:(id)arg1;
- (void)recordNumbers:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)init;

@end

