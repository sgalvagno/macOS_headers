//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BridgeXPC/BridgeXPCListener.h>

@interface BridgeXPCSynchronousListener : BridgeXPCListener
{
    CDUnknownBlockType messageHandler;
}

@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler;
- (void).cxx_destruct;
- (void)activate;
- (void)setEventHandler:(CDUnknownBlockType)arg1;

@end

