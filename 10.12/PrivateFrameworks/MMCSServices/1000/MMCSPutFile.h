//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MMCSServices/MMCSSimpleFile.h>

@class NSData, NSString;

@interface MMCSPutFile : MMCSSimpleFile
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _updateBlock;
    NSString *_protocolVersion;
    NSData *_authRequestData;
    CDUnknownBlockType _registrationBlock;
}

@property(copy) CDUnknownBlockType registrationBlock; // @synthesize registrationBlock=_registrationBlock;
@property(copy) NSData *authRequestData; // @synthesize authRequestData=_authRequestData;
@property(copy) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(copy) CDUnknownBlockType progressUpdateBlock; // @synthesize progressUpdateBlock=_updateBlock;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_block;
- (void)setProgress:(double)arg1;
- (void)dealloc;

@end

