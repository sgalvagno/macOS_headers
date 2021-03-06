//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTimeJumpObserverFactory-Protocol.h>

@class NSString;
@protocol SVPlayerItemObserverFactory, SVVideoTimeProviderFactory;

@interface SVVideoTimeJumpObserverFactory : NSObject <SVVideoTimeJumpObserverFactory>
{
    id <SVPlayerItemObserverFactory> _playerItemObserverFactory;
    id <SVVideoTimeProviderFactory> _timeProviderFactory;
}

@property(readonly, nonatomic) id <SVVideoTimeProviderFactory> timeProviderFactory; // @synthesize timeProviderFactory=_timeProviderFactory;
@property(readonly, nonatomic) id <SVPlayerItemObserverFactory> playerItemObserverFactory; // @synthesize playerItemObserverFactory=_playerItemObserverFactory;
- (void).cxx_destruct;
- (id)createTimeJumpObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1 timeProviderFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

