//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@interface AVB17221AEMSignalMultiplexerMapping : AVB17221AEMObject <NSCopying>
{
    unsigned short subSignalStart;
    unsigned short subSignalCount;
    unsigned short inputIndex;
}

@property unsigned short inputIndex; // @synthesize inputIndex;
@property unsigned short subSignalCount; // @synthesize subSignalCount;
@property unsigned short subSignalStart; // @synthesize subSignalStart;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugLogStringWithIndentation:(id)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;

@end

